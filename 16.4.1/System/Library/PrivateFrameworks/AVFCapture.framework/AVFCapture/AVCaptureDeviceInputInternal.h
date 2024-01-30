@class NSArray, AVCaptureDevice, AVWeakReference;
@protocol AVCallbackCancellation;

@interface AVCaptureDeviceInputInternal : NSObject {
    AVCaptureDevice *device;
    NSArray *ports;
    NSArray *multiCamPorts;
    BOOL unifiedAutoExposureDefaultsEnabled;
    BOOL builtInMicrophoneStereoAudioCaptureEnabled;
    BOOL visionDataDeliveryEnabled;
    BOOL cameraCalibrationDataDeliveryEnabled;
    float simulatedAperture;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDurationOverride;
    float maxGainOverride;
    BOOL centerStageAllowed;
    BOOL backgroundBlurAllowed;
    BOOL ready;
    float portraitLightingEffectStrength;
    AVWeakReference *weakReference;
    id<AVCallbackCancellation> deviceOpenCallbackInvoker;
    BOOL studioLightingAllowed;
}

- (void)dealloc;

@end

@class NSString, NSDictionary, AVWeakReference, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_attributes;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_semaphore> *_serverConnectionDiedSemaphore;
}

+ (void)initialize;
+ (void)_reconnectDevices:(id)a0;
+ (id)_devices;

- (id)uniqueID;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (struct OpaqueCMClock { } *)deviceClock;
- (id)deviceType;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (id)init;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)modelID;
- (void)dealloc;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (id)localizedName;
- (BOOL)startUsingDevice:(id *)a0;
- (void)stopUsingDevice;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)audioInputDevicesDidChangeHandler:(id)a0;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)a0;
- (BOOL)isConnected;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (BOOL)hasMediaType:(id)a0;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;

@end

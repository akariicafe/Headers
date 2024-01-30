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

- (struct OpaqueCMClock { } *)deviceClock;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)uniqueID;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (id)localizedName;
- (id)modelID;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)a0;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (BOOL)hasMediaType:(id)a0;
- (id)deviceType;
- (BOOL)startUsingDevice:(id *)a0;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (void)stopUsingDevice;
- (id)init;
- (BOOL)isConnected;
- (void)dealloc;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)audioInputDevicesDidChangeHandler:(id)a0;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;

@end

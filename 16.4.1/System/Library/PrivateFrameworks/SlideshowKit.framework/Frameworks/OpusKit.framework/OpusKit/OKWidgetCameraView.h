@class AVCaptureDeviceInput, AVCaptureSession, NSString, NSObject, OKWidgetCameraPreviewView;
@protocol OS_dispatch_queue;

@interface OKWidgetCameraView : OKWidgetView {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    id _runtimeErrorHandlingObserver;
    OKWidgetCameraPreviewView *_previewView;
    long long _inputType;
    NSString *_inputDeviceName;
    float _volume;
}

@property (nonatomic, getter=isDeviceAuthorized) BOOL deviceAuthorized;
@property (readonly, nonatomic, getter=isSessionRunningAndDeviceAuthorized) BOOL sessionRunningAndDeviceAuthorized;
@property (nonatomic) id deviceConnectedObserver;
@property (nonatomic) id deviceDisconnectedObserver;

+ (id)deviceWithInputType:(long long)a0 inputDeviceName:(id)a1;
+ (id)keyPathsForValuesAffectingSessionRunningAndDeviceAuthorized;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (void)_startRunning;
- (void)layoutSubviews;
- (void)__stopRunning;
- (void)_prepareSessionIfNeeded;
- (void)_stopRunning;
- (void)checkDeviceAuthorizationStatus;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setSettingInput:(long long)a0;
- (void)setSettingInputDeviceName:(id)a0;
- (void)setSettingVolume:(float)a0;

@end

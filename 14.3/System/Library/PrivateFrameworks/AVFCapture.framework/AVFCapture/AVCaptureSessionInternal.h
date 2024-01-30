@class NSError, NSString, AVWeakReference, NSHashTable, FigCaptureSessionConfiguration, NSMutableArray, AVRunLoopCondition, NSObject, AVCaptureSessionConfiguration;
@protocol OS_dispatch_semaphore;

@interface AVCaptureSessionInternal : NSObject {
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    int beginConfigRefCount;
    FigCaptureSessionConfiguration *sessionConfig;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    BOOL figCaptureSessionRunning;
    BOOL figCaptureSessionStarted;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSHashTable *videoPreviewLayers;
    NSMutableArray *connections;
    NSMutableArray *committedAVCaptureSessionConfigurations;
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;
    NSError *stopError;
    BOOL running;
    BOOL interrupted;
    BOOL usesApplicationAudioSession;
    BOOL automaticallyConfiguresApplicationAudioSession;
    BOOL automaticallyConfiguresCaptureDeviceForWideColor;
    AVRunLoopCondition *runLoopCondition;
    BOOL waitingForFigCaptureSessionToStart;
    BOOL waitingForFigCaptureSessionToStop;
    BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
    struct OpaqueCMClock { } *masterClock;
    BOOL notifiesOnMainThread;
    NSMutableArray *devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
    BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
    BOOL xctestAuthorizedToStealDevice;
    NSObject<OS_dispatch_semaphore> *serverConnectionDiedSemaphore;
    id serverConnectionDiedNotificationToken;
    struct ct_green_tea_logger_s { } *greenTeaLogger;
    BOOL videoInputDeviceUsed;
}

@end

@class AVWeakReference, NSString, NSHashTable, NSError, FigCaptureSessionConfiguration, NSObject, NSMutableArray, AVRunLoopCondition, AVCaptureSessionConfiguration;
@protocol OS_dispatch_semaphore, OS_tcc_identity;

@interface AVCaptureSessionInternal : NSObject {
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    NSObject<OS_tcc_identity> *tccIdentity;
    int beginConfigRefCount;
    int graphRebuildFromCommitConfigRefCount;
    FigCaptureSessionConfiguration *sessionConfig;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    BOOL figCaptureSessionRunning;
    BOOL figCaptureSessionStarted;
    BOOL isCameraOrDerivative;
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
    long long graphRebuildSignalCount;
    float hardwareCost;
    struct OpaqueCMClock { } *synchronizationClock;
    BOOL notifiesOnMainThread;
    NSMutableArray *devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
    BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
    BOOL xctestAuthorizedToStealDevice;
    BOOL continuityCameraIsWired;
    NSObject<OS_dispatch_semaphore> *serverConnectionDiedSemaphore;
    id serverConnectionDiedNotificationToken;
    struct ct_green_tea_logger_s { } *greenTeaLogger;
    BOOL videoInputDeviceUsed;
    struct OpaqueFigReentrantMutex { } *figCaptureSourceConfigChangeCacheMutex;
    NSMutableArray *_devicesObservingVideoZoomFactor;
}

@end

@class CAMPersistenceController, CAMNebulaKeepAliveController, NSString, BKSApplicationStateMonitor, NSMutableDictionary, CAMTimelapseState, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CAMTimelapseMovieWriterProtocol;

@interface CAMTimelapseBackendController : NSObject <CAMVideoCaptureRequestDelegate, CAMNebulaDaemonTimelapseProtocol, CAMPersistenceResultDelegate>

@property (readonly, nonatomic) NSMutableArray *_sessionContexts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_workQueue;
@property (readonly, nonatomic) BOOL _writingMovie;
@property (readonly, nonatomic) id<CAMTimelapseMovieWriterProtocol> _movieWriter;
@property (retain, nonatomic, setter=_setCurrentState:) CAMTimelapseState *_currentState;
@property (nonatomic, getter=_isCapturing, setter=_setCapturing:) BOOL _capturing;
@property (readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController;
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController;
@property (readonly, nonatomic) BOOL _oldMovieWriterEnabled;
@property (readonly, nonatomic) NSMutableDictionary *_transactionForPersistenceUUID;
@property (readonly, nonatomic) int _notifyRegisterTokenSuspendIO;
@property (readonly, nonatomic) int _notifyRegisterTokenResumeIO;
@property (readonly, nonatomic) BKSApplicationStateMonitor *_applicationStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoRequestDidCompleteRemotePersistence:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void)stopTimelapseWithUUID:(id)a0;
- (void)resumeTimelapseWithUUID:(id)a0;
- (void)handleClientConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)finishCaptureForTimelapseWithUUID:(id)a0;
- (void)updateTimelapseWithUUID:(id)a0;
- (BOOL)_isCameraRunning;
- (void)startTimelapseWithUUID:(id)a0;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)a0;
- (void)dealloc;
- (void)persistenceController:(id)a0 didGenerateVideoLocalPersistenceResult:(id)a1 forCaptureResult:(id)a2 fromRequest:(id)a3;
- (id)initWithPersistenceController:(id)a0 keepAliveController:(id)a1;
- (void)_dispatchToMainQueueWithBlock:(id /* block */)a0;
- (void)handleClientDisconnection;
- (void)_workQueue_setupCameraProcessMonitoringIfNecessary;
- (void)_workQueue_destroyApplicationStateMonitor;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)a0;
- (void)_updateSessionContext:(id)a0 withState:(id)a1;
- (void)_performPendingWork;
- (void)_dispatchToWorkQueueWithBlock:(id /* block */)a0;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(BOOL)a0;
- (void)_permanentlyFailTimelapseUUID:(id)a0 withState:(id)a1;
- (void)_dispatchToWorkQueueAfterDelay:(double)a0 withBlock:(id /* block */)a1;
- (BOOL)_deleteItemAtPath:(id)a0;
- (BOOL)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)a0;
- (void)_writeMovieForSessionContext:(id)a0;
- (BOOL)_shouldSaveLastTimelapseDataForDebugging;
- (void)_saveTimelapseDirectoryForDebuggingTimelapseUUID:(id)a0;
- (void)_createPlaceholderAssetForState:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_frameTransformForState:(id)a0;
- (void)_movieWrittenToFilePath:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 metadata:(id)a2 state:(id)a3;
- (void)_reserveDummyFileForTimelapseUUID:(id)a0 firstImageFilePath:(id)a1 useHEVC:(BOOL)a2;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 metadata:(id)a2 state:(id)a3;
- (int)_pidForApplication:(id)a0;

@end

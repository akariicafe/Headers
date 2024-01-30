@class CAMPersistenceController, CAMNebulaKeepAliveController, NSHashTable, AVAssetExportSession, BKSApplicationStateMonitor, NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CAMNebulaIrisBackendController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonIrisProtocol, CAMPersistenceResultDelegate> {
    BOOL __IOWorkSuspended;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_coordinationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_linkWorkQueue;
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController;
@property (readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController;
@property (nonatomic, getter=_coordinationQueue_isIOWorkSuspended, setter=_coordinationQueue_setIOWorkSuspended:) BOOL _IOWorkSuspended;
@property (readonly, nonatomic) int _notifyRegisterTokenSuspendIO;
@property (readonly, nonatomic) int _notifyRegisterTokenResumeIO;
@property (nonatomic, getter=_coordinationQueue_shouldCheckMarkerFileForIOWorkSuspension, setter=_coordinationQueue_setShouldCheckMarkerFileForIOWorkSuspension:) BOOL _shouldCheckMarkerFileForIOWorkSuspension;
@property (readonly, nonatomic) NSMutableDictionary *_transactionForPersistenceUUID;
@property (readonly, nonatomic) NSMutableDictionary *_pendingOrInFlightJobsByUniqueIdentifier;
@property (readonly, nonatomic) NSMutableArray *_pendingExportVideoJobs;
@property (retain, nonatomic, setter=_setActiveExportSession:) AVAssetExportSession *_activeExportSession;
@property (readonly, nonatomic) NSMutableDictionary *_bundleIdentifiersByVideoPersistenceUUID;
@property (nonatomic, getter=_coordinationQueue_isCrashRecoveryNeeded, setter=_coordinationQueue_setCrashRecoveryNeeded:) BOOL _crashRecoveryNeeded;
@property (readonly, nonatomic) BKSApplicationStateMonitor *_applicationStateMonitor;
@property (readonly, nonatomic) NSHashTable *_clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performIrisCrashRecovery;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enqueueIrisVideoJobs:(id)a0;
- (BOOL)_removeItemAtURL:(id)a0;
- (void)stillImageRequestDidCompleteVideoRemotePersistence:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void)persistenceController:(id)a0 didGenerateVideoLocalPersistenceResult:(id)a1 forCaptureResult:(id)a2 fromRequest:(id)a3;
- (id)initWithPersistenceController:(id)a0 keepAliveController:(id)a1;
- (void)_coordinationQueue_destroyApplicationStateMonitor;
- (void)_dispatchToQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)_dispatchToQueue:(id)a0 afterDelay:(double)a1 withBlock:(id /* block */)a2;
- (void)_coordinationQueue_createJobsForCrashRecoveryIfNeeded;
- (void)_dispatchToCoordinationQueueWithBlock:(id /* block */)a0;
- (void)performIrisCrashRecoveryForceFileSystemCheck:(BOOL)a0;
- (void)_coordinationQueue_setupCameraProcessingMonitoringIfNecessary;
- (void)_coordinationQueue_enqueuePendingExportJobIfPossible;
- (void)_coordinationQueue_enqueueJobs:(id)a0;
- (void)_coordinationQueue_enqueueAndTrackNewJob:(id)a0;
- (id)_uniqueIdentifierForJob:(id)a0;
- (void)_linkWorkQueue_linkAndPersistSelfContainedVideo:(id)a0;
- (void)_dispatchToLinkWorkQueueWithBlock:(id /* block */)a0;
- (BOOL)_removeItemAtURL:(id)a0 maxAttempts:(long long)a1;
- (void)_dispatchToMainQueueWithBlock:(id /* block */)a0;
- (void)_coordinationQueue_didPermanentlyFinishJob:(id)a0;
- (unsigned long long)_coordinationQueue_failureCountForVideoURL:(id)a0;
- (void)_coordinationQueue_setFailureCount:(unsigned long long)a0 forVideoURL:(id)a1;
- (void)_dispatchToLinkWorkQueueAfterDelay:(double)a0 withBlock:(id /* block */)a1;
- (void)_coordinationQueue_didCompleteExportJob:(id)a0;
- (void)_dispatchToCoordinationQueueAfterDelay:(double)a0 withBlock:(id /* block */)a1;
- (id)_videoJobFromURL:(id)a0;
- (BOOL)_extractIrisPropertiesFromAVAsset:(id)a0 stillImageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 irisIdentifier:(id *)a2;
- (void)handleClientConnection:(id)a0;
- (void)handleClientDisconnection:(id)a0;

@end

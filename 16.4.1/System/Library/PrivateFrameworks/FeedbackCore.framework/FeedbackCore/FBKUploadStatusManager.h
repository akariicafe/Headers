@class DEDController, FBKDeviceManager, FBKData, NSMutableSet, NSMutableDictionary, NSString;

@interface FBKUploadStatusManager : NSObject <DEDUploadStatusDelegate>

@property (weak) FBKData *data;
@property (retain) DEDController *ded;
@property (retain) FBKDeviceManager *deviceManager;
@property (retain) NSMutableSet *trackedTasks;
@property (retain) NSMutableDictionary *submissionTimers;
@property (nonatomic) BOOL shouldLogProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)uploadProgress:(unsigned long long)a0 total:(long long)a1 session:(id)a2;
- (BOOL)isTrackingTask:(id)a0;
- (void)reloadFilerFormForFinishedTask:(id)a0;
- (id)initWithData:(id)a0 ded:(id)a1 deviceManager:(id)a2;
- (id)configureSubmissionTimerForTask:(id)a0 timeout:(double)a1;
- (void)deleteAndNotifyUploadTaskWithTask:(id)a0;
- (void)didFailToConnectToSessionsOnTask:(id)a0;
- (void)didFailToGetUploadUpdatesForUploadTask:(id)a0;
- (void)didFailToGetUploadUpdatesForUploadTask:(id)a0 shouldTryServerUpdates:(BOOL)a1;
- (void)didGetSessionStateUpdate:(id)a0 uploadTask:(id)a1 newState:(long long)a2 sessionInfo:(id)a3;
- (void)didLogOutWithCompletion:(id /* block */)a0;
- (void)fallbackToServerSideUploadUpdatesForTask:(id)a0;
- (void)fallbackToServerSideUploadUpdatesForTask:(id)a0 attempts:(unsigned long long)a1;
- (void)getAllBugSessionsForTask:(id)a0 completion:(id /* block */)a1;
- (void)pollDEDForSessionsStateOnActiveSession:(id)a0 uploadTask:(id)a1 isCurrentDeviceSession:(BOOL)a2;
- (void)pollDEDForSessionsStateOnActiveSession:(id)a0 uploadTask:(id)a1 isCurrentDeviceSession:(BOOL)a2 totalQueryCount:(unsigned long long)a3 lastState:(long long)a4 lastInfo:(id)a5;
- (void)pollDEDForSessionsStateOnTask:(id)a0 sessions:(id)a1;
- (BOOL)shouldGiveUpOnUploadWithPromises:(id)a0;
- (BOOL)shouldGiveUpOnUploadWithPromises:(id)a0 stalenessDate:(id)a1;
- (void)stopTrackingAllTasks;
- (void)stopTrackingTaskIfDeleted:(id)a0;
- (void)stopTrackingUploadTask:(id)a0;
- (void)timer:(id)a0 didTimeoutForTask:(id)a1;
- (void)trackUploadIfNeeded:(id)a0;
- (void)trackUploadTask:(id)a0;
- (void)trackUploadTask:(id)a0 attempt:(long long)a1;
- (void)updateUploadTask:(id)a0 withUploadProgress:(unsigned long long)a1 uploadSize:(unsigned long long)a2 onBugSession:(id)a3 state:(long long)a4;
- (void)waitOnUpdatesForTask:(id)a0 withSessions:(id)a1;
- (id)workingFilePromisesFromSet:(id)a0 stalenessDate:(id)a1;

@end

@class CPLEngineLibrary, CPLSyncSession, CPLEngineStore, NSString, NSError, CPLEngineSyncManager;

@interface CPLSyncStep : NSObject <CPLEngineSyncTaskDelegate>

@property (readonly, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly, nonatomic) CPLEngineStore *engineStore;
@property (readonly, nonatomic) CPLEngineSyncManager *syncManager;
@property (readonly, nonatomic) CPLSyncSession *syncSession;
@property (readonly, nonatomic) NSString *descriptionForTasks;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1;
- (float)progressForTask:(id)a0 progress:(float)a1;
- (BOOL)launchNecessaryTasks;
- (void)cancelAllTasks:(BOOL)a0;
- (BOOL)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(BOOL *)a2;
- (void)moveTasksToBackground;
- (BOOL)prepareAndLaunchSyncTask:(id *)a0;
- (void)setErrorForSyncSession:(id)a0;

@end

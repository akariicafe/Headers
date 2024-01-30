@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep

@property (readonly, nonatomic) Class taskClass;
@property (readonly, nonatomic) CPLEngineSyncTask *currentTask;

- (void)moveTasksToBackground;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1 taskClass:(Class)a2;
- (id)descriptionForTasks;
- (void).cxx_destruct;
- (BOOL)launchNecessaryTasks;
- (id)newTask;
- (BOOL)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(BOOL *)a2;
- (void)cancelAllTasks:(BOOL)a0;

@end

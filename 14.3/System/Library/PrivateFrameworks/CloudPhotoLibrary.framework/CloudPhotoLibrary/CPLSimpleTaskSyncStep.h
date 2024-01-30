@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep

@property (readonly, nonatomic) Class taskClass;
@property (readonly, nonatomic) CPLEngineSyncTask *currentTask;

- (void).cxx_destruct;
- (id)newTask;
- (id)descriptionForTasks;
- (BOOL)launchNecessaryTasks;
- (void)cancelAllTasks:(BOOL)a0;
- (BOOL)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(BOOL *)a2;
- (void)moveTasksToBackground;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1 taskClass:(Class)a2;

@end

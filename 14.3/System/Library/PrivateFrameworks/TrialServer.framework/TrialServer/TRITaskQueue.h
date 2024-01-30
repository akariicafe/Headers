@class TRIClient, TRIServerContext, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TRITaskQueue : NSObject <TRITaskQueuing, TRITaskQueueStateProviding> {
    _PASLock *_lock;
    TRIServerContext *_serverContext;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSObject<OS_dispatch_group> *_opGroup;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    TRIClient *_client;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)cancelTask:(id)a0;
- (unsigned long long)count;
- (id)debugDescription;
- (BOOL)cancelTasksWithTag:(id)a0;
- (BOOL)addTask:(id)a0 options:(id)a1;
- (BOOL)resumeWithXPCActivityDescriptor:(id)a0 executeWhenSuspended:(id /* block */)a1;
- (id)activeActivityGrantingCapability:(unsigned long long)a0;
- (BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)a0 block:(id /* block */)a1;
- (void)_scheduleFutureActivitiesWithGuardedData:(id)a0;
- (void)_partitionTaskGroup:(id)a0 byRunnabilityGivenCapabilities:(unsigned long long)a1 runnableAtDate:(id)a2 topoSortedCurrentlyRunnable:(id *)a3 blocked:(id *)a4 allowOnlyRootTasksRunnable:(BOOL)a5;
- (void)_registerTaskQueueActivityForDate:(id)a0;
- (void)_registerRetryActivityForDate:(id)a0;
- (void)_startImmediateTasksIfNotAlreadyQueued:(id)a0 guardedData:(id)a1 didStartNewWork:(BOOL *)a2;
- (BOOL)_cancelTaskWithId:(id)a0 guardedData:(id)a1 persistCancel:(BOOL)a2;
- (BOOL)_removeTaskWithId:(id)a0 guardedData:(id)a1 persistRemove:(BOOL)a2;
- (BOOL)_addTask:(id)a0 options:(id)a1 guardedData:(id)a2;
- (void)_startRunnableTasksIfNecessaryWithGuardedData:(id)a0;
- (id)_runTask:(id)a0;
- (void)_finalizeTask:(id)a0 withId:(id)a1 runResult:(id)a2;
- (void)_evaluateRunConditionsWithGuardedData:(id)a0 shouldContinueWork:(BOOL *)a1;
- (id)_createOperationWithTask:(id)a0 withId:(id)a1 dependencies:(id)a2 taskMap:(id)a3;
- (BOOL)finishXPCActivitiesWithGuardedData:(id)a0;
- (id)_addTask:(id)a0 options:(id)a1 guardedData:(id)a2 accumulatedNewTaskRecords:(id)a3;
- (BOOL)_isTaskWithId:(id)a0 inTaskGroup:(id)a1 runnableGivenCapabilities:(unsigned long long)a2 atDate:(id)a3 cachedRunnability:(id)a4 visitedPath:(id)a5 topoSortedRunnable:(id)a6 allowOnlyRootTasksRunnable:(BOOL)a7;
- (BOOL)_cancelDependenciesAndTaskWithId:(id)a0 guardedData:(id)a1;
- (id)_addTask:(id)a0 withDependencies:(id)a1 guardedData:(id)a2;
- (BOOL)_cancelTask:(id)a0 guardedData:(id)a1;
- (BOOL)updateActivity:(id)a0 withStartDate:(id)a1;
- (BOOL)cancelTasksWithTag:(id)a0 excludingTasks:(id)a1;
- (id)initWithServerContext:(id)a0 operationQueue:(id)a1 operationGroup:(id)a2 asyncQueue:(id)a3;
- (void)waitForAsyncQueue;
- (BOOL)ifNotPresentAddTask:(id)a0;

@end

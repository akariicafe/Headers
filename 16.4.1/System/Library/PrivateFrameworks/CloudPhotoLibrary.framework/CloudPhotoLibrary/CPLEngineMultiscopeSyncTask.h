@class CPLScopeFilter, NSString, NSMutableDictionary, CPLEngineScopedTask, CPLEngineScopeStorage, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask <CPLEngineSyncTaskDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_currentTaskQueue;
    CPLEngineScopedTask *_currentTask;
    NSMutableArray *_coveredScopes;
    NSMutableArray *_excludedScopes;
    NSMutableDictionary *_transportScopes;
    NSString *_clientCacheIdentifier;
    CPLScopeFilter *_baseScopeFilter;
    CPLScopeFilter *_additionalScopeFilter;
}

@property (readonly, nonatomic) CPLEngineScopeStorage *scopes;
@property (readonly, nonatomic) BOOL shouldSkipScopesWithMissingTransportScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setForeground:(BOOL)a0;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;
- (void)cancel;
- (void)launch;
- (void).cxx_destruct;
- (void)setForceSync:(BOOL)a0;
- (id)_currentTask;
- (id)phaseDescriptionLastChangeDate:(id *)a0;
- (id)_currentScope;
- (void)_launchTaskForNextScope;
- (void)_setCurrentTask:(id)a0;
- (void)dispatchAsyncWithCurrentSubtask:(id /* block */)a0;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (id)phaseDescription;
- (id)scopeFilterInTransaction:(id)a0;
- (BOOL)shouldContinueAfterError:(id)a0 fromTask:(id)a1;
- (BOOL)shouldProcessScope:(id)a0 inTransaction:(id)a1;
- (BOOL)shouldStartTaskInTransaction:(id)a0;

@end

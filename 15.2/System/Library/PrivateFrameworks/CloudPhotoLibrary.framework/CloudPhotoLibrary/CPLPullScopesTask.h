@class NSString, CPLEngineStore, CPLEngineScopeStorage, NSError;
@protocol CPLEngineTransportFetchScopeListChangesTask;

@interface CPLPullScopesTask : CPLEngineSyncTask {
    BOOL _ignoreNewChanges;
    CPLEngineStore *_store;
    CPLEngineScopeStorage *_scopes;
    NSString *_clientCacheIdentifier;
    id<CPLEngineTransportFetchScopeListChangesTask> _fetchChangesTask;
    NSError *_badError;
    unsigned long long _deletedScopeCount;
    unsigned long long _newScopeCount;
    unsigned long long _modifiedScopeCount;
}

- (id)initWithEngineLibrary:(id)a0 session:(id)a1;
- (id)taskIdentifier;
- (void)_handleChangedOrNewScopes:(id)a0 deletedScopeIdentifiers:(id)a1 newScopeListSyncAnchor:(id)a2;
- (void).cxx_destruct;
- (void)_handleFinalScopeListSyncAnchor:(id)a0 error:(id)a1;
- (void)launch;
- (void)cancel;
- (BOOL)_checkShouldHandleBatchInTransaction:(id)a0;

@end

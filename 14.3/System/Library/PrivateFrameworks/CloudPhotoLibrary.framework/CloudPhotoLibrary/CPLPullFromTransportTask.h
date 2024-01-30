@class CPLScopeFilter;

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask {
    CPLScopeFilter *_additionalScopeFilter;
}

- (id)taskIdentifier;
- (void).cxx_destruct;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (BOOL)shouldProcessScope:(id)a0 inTransaction:(id)a1;

@end

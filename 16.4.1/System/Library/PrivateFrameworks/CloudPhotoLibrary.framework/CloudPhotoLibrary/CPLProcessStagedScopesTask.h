@interface CPLProcessStagedScopesTask : CPLEngineMultiscopeSyncTask {
    BOOL _hasProcessedStagedScopes;
}

- (id)taskIdentifier;
- (void)didProcessStagedScope:(id)a0;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:(id)a0;

@end

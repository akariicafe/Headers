@interface CPLMingleChangesTask : CPLEngineMultiscopeSyncTask

- (id)taskIdentifier;
- (void)launch;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (id)scopeFilterInTransaction:(id)a0;
- (BOOL)shouldProcessScope:(id)a0 inTransaction:(id)a1;
- (void)taskDidFinishWithError:(id)a0;

@end

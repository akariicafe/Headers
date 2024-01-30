@interface CPLCleanupTask : CPLEngineSyncTask

- (void)_doOneIteration;
- (id)taskIdentifier;
- (void)taskDidFinishWithError:(id)a0;
- (void)launch;

@end

@interface CPLCleanupTask : CPLEngineSyncTask

- (void)launch;
- (id)taskIdentifier;
- (void)taskDidFinishWithError:(id)a0;
- (void)_doOneIteration;

@end

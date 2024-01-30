@interface HDCloudSyncManagerSyncTask : HDCloudSyncManagerPipelineTask

- (void)didFinishWithSuccess;
- (void)didFailWithErrors:(id)a0;
- (id)pipelineForRepository:(id)a0;
- (BOOL)combineWithTask:(id)a0;

@end

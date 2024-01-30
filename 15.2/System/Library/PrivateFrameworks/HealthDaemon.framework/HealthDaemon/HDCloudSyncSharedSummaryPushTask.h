@interface HDCloudSyncSharedSummaryPushTask : HDCloudSyncManagerPipelineTask

- (id)pipelineForRepository:(id)a0;
- (BOOL)combineWithTask:(id)a0;
- (void)didFinishWithSuccess;
- (void)didFailWithErrors:(id)a0;

@end

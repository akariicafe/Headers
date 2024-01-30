@interface HDCloudSyncManagerMedicalIDSyncTask : HDCloudSyncManagerPipelineTask {
    id /* block */ _completion;
}

- (void).cxx_destruct;
- (BOOL)combineWithTask:(id)a0;
- (void)didFailWithErrors:(id)a0;
- (void)didFinishWithSuccess;
- (id)pipelineForRepository:(id)a0;

@end

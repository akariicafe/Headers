@interface HDCloudSyncManagerMedicalIDSyncTask : HDCloudSyncManagerPipelineTask {
    id /* block */ _completion;
}

- (id)pipelineForRepository:(id)a0;
- (BOOL)combineWithTask:(id)a0;
- (void)didFinishWithSuccess;
- (void).cxx_destruct;
- (void)didFailWithErrors:(id)a0;

@end

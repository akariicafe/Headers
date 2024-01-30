@class NSArray, HDCloudSyncShareSetupMetadata, HDCloudSyncPipelineStageAcceptShares;

@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {
    HDCloudSyncShareSetupMetadata *_shareSetupMetadata;
    HDCloudSyncPipelineStageAcceptShares *_acceptSharesPipelineStage;
}

@property (readonly, copy, nonatomic) NSArray *acceptedShares;

- (void).cxx_destruct;
- (id)pipelineForRepository:(id)a0;
- (id)initWithManager:(id)a0 context:(id)a1 shareSetupMetadata:(id)a2 completion:(id /* block */)a3;
- (BOOL)requiresExistingShareOwnerParticipant;

@end

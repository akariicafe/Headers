@class NSArray, HDCloudSyncShareSetupMetadata, HDCloudSyncPipelineStageAcceptShares;

@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {
    HDCloudSyncShareSetupMetadata *_shareSetupMetadata;
    HDCloudSyncPipelineStageAcceptShares *_acceptSharesPipelineStage;
}

@property (readonly, copy, nonatomic) NSArray *acceptedShares;

- (id)pipelineForRepository:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 shareSetupMetadata:(id)a2 accessibilityAssertion:(id)a3 completion:(id /* block */)a4;
- (BOOL)requiresExistingShareOwnerParticipant;

@end

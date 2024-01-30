@interface HDCloudSyncPipelineStagePrepareForSync : HDCloudSyncPipelineStage

- (void)main;
- (id)allOwnerIdentifiersWithError:(id *)a0;
- (id)_computeAndValidateTargetsOperationWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)_validateSubscriptionsOperationForPrimaryContainerWithConfiguration:(id)a0 cloudState:(id)a1;

@end

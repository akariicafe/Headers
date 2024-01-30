@interface HDCloudSyncPipelineStagePush : HDCloudSyncPipelineStage

- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)_pushStores;
- (id)_pushOperationWithStore:(id)a0;
- (id)_pushStoreIdentifier;

@end

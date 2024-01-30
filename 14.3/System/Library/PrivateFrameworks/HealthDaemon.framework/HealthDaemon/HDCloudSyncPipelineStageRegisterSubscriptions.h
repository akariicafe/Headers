@class NSDictionary;

@interface HDCloudSyncPipelineStageRegisterSubscriptions : HDCloudSyncPipelineStage

@property (readonly, copy, nonatomic) NSDictionary *subscriptions;
@property (nonatomic) BOOL includeSecondaryContainers;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)_operationForContainer:(id)a0 configuration:(id)a1 cloudState:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 subscriptions:(id)a2;

@end

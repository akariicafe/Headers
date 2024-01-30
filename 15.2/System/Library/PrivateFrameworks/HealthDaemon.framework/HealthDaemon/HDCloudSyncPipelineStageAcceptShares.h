@class HDCloudSyncShareSetupMetadata, NSArray;

@interface HDCloudSyncPipelineStageAcceptShares : HDCloudSyncPipelineStage

@property (readonly, copy, nonatomic) HDCloudSyncShareSetupMetadata *share;
@property (readonly, copy, nonatomic) NSArray *acceptedShares;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 sharingResult:(id)a2;

@end

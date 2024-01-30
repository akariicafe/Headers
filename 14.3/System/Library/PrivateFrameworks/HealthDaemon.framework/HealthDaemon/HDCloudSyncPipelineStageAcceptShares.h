@class HDCloudSyncShareSetupMetadata, NSArray;

@interface HDCloudSyncPipelineStageAcceptShares : HDCloudSyncPipelineStage

@property (readonly, copy, nonatomic) HDCloudSyncShareSetupMetadata *share;
@property (readonly, copy, nonatomic) NSArray *acceptedShares;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 sharingResult:(id)a2;

@end

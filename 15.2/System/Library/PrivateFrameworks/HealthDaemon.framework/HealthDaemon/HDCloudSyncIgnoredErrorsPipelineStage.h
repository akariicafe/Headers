@class HDCloudSyncPipelineStage;

@interface HDCloudSyncIgnoredErrorsPipelineStage : HDCloudSyncPipelineStage

@property (retain) HDCloudSyncPipelineStage *stage;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)description;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 stage:(id)a2;

@end

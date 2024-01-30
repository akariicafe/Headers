@class NSError;

@interface HDCloudSyncPipelineStagePull : HDCloudSyncPipelineStage {
    long long _queue_pullOperationFailureCount;
    NSError *_queue_firstPullOperationError;
}

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end

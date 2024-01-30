@interface HDCloudSyncPipelineStage : HDCloudSyncOperation

@property (nonatomic) BOOL criticalFailureOnError;
@property (nonatomic) long long expectedSendSize;
@property (nonatomic) long long expectedReceiveSize;

+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationEnd;
+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)pipelineStageIgnoringErrors;

@end

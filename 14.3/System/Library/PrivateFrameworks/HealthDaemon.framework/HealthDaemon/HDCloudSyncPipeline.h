@class NSUUID, HDAssertion, NSString, HDCloudSyncRepository, HDPowerAssertion, CKOperationGroup, HDCloudSyncContext, NSObject, NSProgress, NSMutableArray, HDCloudSyncCloudState, HDCloudSyncOperationConfiguration;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPipeline : NSObject {
    NSMutableArray *_stages;
    NSString *_shortPipelineIdentifier;
    HDCloudSyncCloudState *_cloudState;
    long long _pipelineResult;
    NSString *_analyticsCloudKitIdentifier;
    HDPowerAssertion *_powerAssertion;
}

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) HDCloudSyncContext *context;
@property (readonly, nonatomic) HDCloudSyncRepository *repository;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HDAssertion *accessibilityAssertion;
@property (retain, nonatomic) CKOperationGroup *operationGroup;
@property (readonly, nonatomic) HDCloudSyncOperationConfiguration *operationConfiguration;
@property (readonly, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL continueWhenSyncDisabled;
@property (copy, nonatomic) id /* block */ pipelineCompletionHandler;

+ (id)operationGroupForContext:(id)a0 syncCircleIdentifier:(id)a1;
+ (BOOL)_allowCellularForContext:(id)a0;
+ (long long)_qualityOfServiceForContext:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initForContext:(id)a0 repository:(id)a1 accessibilityAssertion:(id)a2 queue:(id)a3;
- (void)addStage:(id)a0;
- (id)analyticsDictionary;
- (void)_powerAssertionDidTimeout;
- (void)_queue_computeConfigurationWithTaskTree:(id)a0;
- (void)_queue_runStagesWithTaskTree:(id)a0;
- (void)_queue_reportFinalAnalyticsWithTaskTree:(id)a0;
- (id)beginWithTaskTree:(id)a0;
- (void)_queue_computeStageTransferSizes;
- (void)_queue_runStage:(id)a0 taskTree:(id)a1;
- (id)beginWithCompletion:(id /* block */)a0;

@end

@class NSUUID, HDAssertion, NSString, HDCloudSyncRepository, HDPowerAssertion, CKOperationGroup, HDCloudSyncContext, NSObject, NSProgress, NSMutableArray, HDCloudSyncCloudState, HDCloudSyncOperationConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDCloudSyncPipeline : NSObject {
    NSMutableArray *_stages;
    NSString *_shortPipelineIdentifier;
    BOOL _cancelRequested;
    NSObject<OS_dispatch_source> *_cloudKitOperationDelayTimer;
    id /* block */ _delayTimerCompletionBlock;
    HDCloudSyncCloudState *_cloudState;
    long long _pipelineResult;
    NSString *_analyticsCloudKitIdentifier;
    HDPowerAssertion *_powerAssertion;
    HDAssertion *_inProgressDownloadDirAssertion;
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
@property (nonatomic) BOOL ignoreCloudKitOperationDelay;
@property (copy, nonatomic) id /* block */ pipelineCompletionHandler;

+ (id)operationGroupForContext:(id)a0 syncCircleIdentifier:(id)a1 assetDownloadStagingManager:(id)a2;

- (void)cancel;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)analyticsDictionary;
- (void)addStage:(id)a0;
- (id)beginWithCompletion:(id /* block */)a0;
- (id)beginWithTaskTree:(id)a0;
- (id)initForContext:(id)a0 repository:(id)a1 accessibilityAssertion:(id)a2 queue:(id)a3;

@end

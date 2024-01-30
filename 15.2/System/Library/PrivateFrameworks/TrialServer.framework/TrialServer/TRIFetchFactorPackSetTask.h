@class _PASLock, NSString, NSArray, NSDictionary, TRIRolloutDeployment, NSDate, TRIRolloutTaskSupport;
@protocol TRITaskAttributing, TRITaskQueueStateProviding, TRIFactorPackSetId;

@interface TRIFetchFactorPackSetTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    id<TRITaskAttributing> _taskAttribution;
    TRIRolloutTaskSupport *_support;
    NSDictionary *_factorRecordsByAssetId;
    _PASLock *_guardedDownloadableRecord;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL wasDeferred;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithFactorPackSetId:(id)a0 taskAttribution:(id)a1 rolloutDeployment:(id)a2;
+ (id)parseFromData:(id)a0;

- (unsigned long long)requiredCapabilities;
- (void)_logOnDemandFactor:(id)a0 metricName:(id)a1 namespaceName:(id)a2 client:(id)a3 error:(id)a4;
- (BOOL)_downloadAndSaveAssetsWithMetadata:(id)a0 forFactorPackSet:(id)a1 artifactProvider:(id)a2 options:(id)a3 downloadNotificationKey:(id)a4 context:(id)a5 assetsDownloadSize:(unsigned long long *)a6 errorResult:(id *)a7 fetchError:(id *)a8;
- (id)initWithFactorPackSetId:(id)a0 taskAttribution:(id)a1 rolloutDeployment:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)trialSystemTelemetry;
- (BOOL)_saveFactorPackSet:(id)a0 context:(id)a1;
- (id)_asPersistedTask;
- (id)_subscribedOnDemandFactorsForAssetIds:(id)a0 factorPackSet:(id)a1 context:(id)a2;
- (id)serialize;
- (void)_removeDownloadableRecord:(id)a0;
- (id)_requiredAssetIdsForFactorPackSet:(id)a0 context:(id)a1;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_aliasesInFactorPack:(id)a0 context:(id)a1;
- (id)dimensions;
- (id)_downloadSetArtifactWithProvider:(id)a0 downloadOptions:(id)a1 downloadNotificationKey:(id)a2 downloadSize:(unsigned long long *)a3 errorResult:(id *)a4 setArtifactFetchError:(id *)a5;

@end

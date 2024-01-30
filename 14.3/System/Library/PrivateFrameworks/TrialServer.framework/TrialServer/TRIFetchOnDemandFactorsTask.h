@class NSString, NSArray, NSDictionary, NSDate, NSMutableArray;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchOnDemandFactorsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    NSDictionary *_assetIndexesByTreatment;
    NSString *_namespaceName;
    id<TRITaskAttributing> _taskAttributing;
    int _retryCount;
    NSString *_notificationKey;
    NSMutableArray *_metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int retryCount;
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

+ (id)parseFromData:(id)a0;
+ (id)taskWithAssetIndexesByTreatment:(id)a0 namespaceName:(id)a1 taskAttributing:(id)a2 notificationKey:(id)a3;

- (id)serialize;
- (void).cxx_destruct;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (id)dimensions;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)requiredCapabilities;
- (void)encodeWithCoder:(id)a0;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)initWithAssetIndexesByTreatment:(id)a0 namespaceName:(id)a1 taskAttributing:(id)a2 notificationKey:(id)a3;
- (int)_processTreatmentArtifact:(id)a0 treatmentId:(id)a1 paths:(id)a2;
- (void)_addMetric:(id)a0;

@end

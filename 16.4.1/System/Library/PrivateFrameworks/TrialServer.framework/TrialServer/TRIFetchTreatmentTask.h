@class NSString, NSArray, NSDate, TRITaskCapabilityModifier;
@protocol TRITaskQueueStateProviding;

@interface TRIFetchTreatmentTask : TRITreatmentBaseTask <TRIRetryableTask> {
    TRITaskCapabilityModifier *_capabilityModifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
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
+ (id)taskWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 capabilityModifier:(id)a3;

- (unsigned long long)requiredCapabilities;
- (id)_asPersistedTask;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)serialize;
- (void).cxx_destruct;
- (void)_addMetricForFetchTreatmentTaskError:(int)a0;
- (BOOL)_downloadAndSaveMAAssets:(id)a0 options:(id)a1 downloadNotificationKey:(id)a2 context:(id)a3 errorResult:(id *)a4 fetchError:(id *)a5;
- (id)_fetchAssetsWithArtifactProvider:(id)a0 recordId:(id)a1 experimentRecord:(id)a2 assetIndexes:(id)a3 downloadOptions:(id)a4 context:(id)a5 assetURLs:(id *)a6 treatmentFetchError:(id *)a7;
- (id)_fetchTreatmentWithArtifactProvider:(id)a0 experimentRecord:(id)a1 downloadOptions:(id)a2 context:(id)a3 treatment:(id *)a4 recordId:(id *)a5 treatmentFetchError:(id *)a6;
- (id)_namespaceDescriptorForNamespaceName:(id)a0 fromExperimentRecord:(id)a1 referencingFactorsURL:(id)a2;
- (unsigned int)_ncvForNamespaceName:(id)a0 inExperimentRecord:(id)a1;
- (id)_nextTasksForRunStatus:(int)a0;
- (id)_nextTasksForRunStatusFailureWithDeactivationReason:(unsigned long long)a0;
- (id)_saveTreatment:(id)a0 experimentRecord:(id)a1 assetURLs:(id)a2 assetMetadata:(id)a3 context:(id)a4 paths:(id)a5 downloadOptions:(id)a6;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 capabilityModifier:(id)a3;

@end

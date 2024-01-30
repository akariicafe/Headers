@class NSString, NSArray, NSDate, TRIMetric, TRITaskCapabilityModifier;
@protocol TRITaskQueueStateProviding;

@interface TRIMakeDefaultTask : TRIActivateTreatmentBaseTask <TRIRetryableTask> {
    TRIMetric *_treatmentMetric;
    TRITaskCapabilityModifier *_capabilityModifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL testingIgnoreDependencies;
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
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metrics;
- (id)serialize;
- (void).cxx_destruct;
- (id)runTaskUsingContext:(id)a0 experiment:(id)a1;
- (id)_nextTasksForRunStatus:(int)a0;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 capabilityModifier:(id)a3;
- (int)makeDefaultForNamespace:(id)a0 experiment:(id)a1 context:(id)a2;

@end

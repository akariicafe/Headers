@class NSString, NSArray, NSDate, TRIMetric;
@protocol TRITaskQueueStateProviding;

@interface TRIActivateTreatmentTask : TRIActivateTreatmentBaseTask <TRIRetryableTask> {
    TRIMetric *_treatmentMetric;
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
+ (id)taskWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 requiresTreatmentInstallation:(BOOL)a3 startTime:(id)a4;
+ (id)taskWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 requiresTreatmentInstallation:(BOOL)a3;

- (id)serialize;
- (void).cxx_destruct;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (unsigned long long)requiredCapabilities;
- (void)encodeWithCoder:(id)a0;
- (id)_asPersistedTask;
- (id)_nextTasksForRunStatus:(int)a0;
- (id)runTaskUsingContext:(id)a0 experiment:(id)a1;

@end

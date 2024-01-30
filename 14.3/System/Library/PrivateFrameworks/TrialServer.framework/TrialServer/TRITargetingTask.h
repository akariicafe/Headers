@class NSString, NSArray, NSDate, NSMutableArray;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRITargetingTask : TRIExperimentBaseTask <TRIRetryableTask> {
    NSMutableArray *_targetingMetrics;
    NSMutableArray *_targetingDimensions;
    BOOL _includeDependencies;
    id<TRITaskAttributing> _taskAttributing;
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
+ (id)taskWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;
+ (id)taskWithExperiment:(id)a0 taskAttribution:(id)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (id)dimensions;
- (void)encodeWithCoder:(id)a0;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)initWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1 details:(id)a2;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1;
- (id)systemCovariatesWithPaths:(id)a0;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 systemCovariates:(id)a2 userCovariates:(id)a3 error:(id *)a4;
- (BOOL)validateSystemCovariates:(id)a0 experiment:(id)a1 error:(id *)a2;
- (id)runTaskUsingContext:(id)a0 withTaskQueue:(id)a1 systemCovariates:(id)a2 userCovariates:(id)a3 error:(id *)a4;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 paths:(id)a2 error:(id *)a3;

@end

@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIFetchTreatmentTask : TRITreatmentBaseTask <TRIRetryableTask>

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
+ (id)taskWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2;

- (id)serialize;
- (id)initWithCoder:(id)a0;
- (unsigned long long)requiredCapabilities;
- (void)encodeWithCoder:(id)a0;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)_nextTasksForRunStatus:(int)a0;
- (int)_processTreatment:(id)a0 context:(id)a1 paths:(id)a2;

@end

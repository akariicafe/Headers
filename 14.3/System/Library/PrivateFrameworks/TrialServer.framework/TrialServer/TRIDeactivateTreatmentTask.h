@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask <TRIRetryableTask>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL failOnUnrecognizedExperiment;
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
+ (id)taskWithExperimentId:(id)a0 failOnUnrecognizedExperiment:(BOOL)a1;
+ (id)taskWithExperimentId:(id)a0 startTime:(id)a1 failOnUnrecognizedExperiment:(BOOL)a2;

@end

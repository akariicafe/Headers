@class NSString, NSArray, NSDate;
@protocol TRITask, TRITaskQueueStateProviding;

@interface TRISequenceTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    id<TRITask> _task;
    id<TRITask> _dependentTask;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<TRITask> lastTask;
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

+ (id)task;
+ (id)parseFromData:(id)a0;
+ (BOOL)_isTask:(id)a0 equalTo:(id)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (id)dimensions;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void)addTaskToEndOfSequence:(id)a0;
- (id)initWithTask:(id)a0 dependency:(id)a1;

@end

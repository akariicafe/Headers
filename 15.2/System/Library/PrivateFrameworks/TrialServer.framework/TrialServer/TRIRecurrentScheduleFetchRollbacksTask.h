@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIRecurrentScheduleFetchRollbacksTask : TRIBaseTask <TRITask> {
    id<TRITaskAttributing> _taskAttribution;
    BOOL _isRepeatedInstance;
}

@property (class, readonly) BOOL supportsSecureCoding;

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

+ (id)taskWithAttribution:(id)a0;
+ (id)parseFromData:(id)a0;

- (unsigned long long)requiredCapabilities;
- (BOOL)_experimentsExistUsingContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_nextRecurrentTaskUsingContext:(id)a0;
- (id)_asPersistedTask;
- (id)serialize;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)initWithTaskAttribution:(id)a0 isRepeatedInstance:(BOOL)a1;
- (BOOL)_shouldScheduleUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_fetchRollbacksTaskUsingContext:(id)a0;
- (id)initWithCoder:(id)a0;

@end

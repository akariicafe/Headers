@class NSArray, NSString, NSDate;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIRetargetAllTask : TRIBaseTask <TRITask> {
    id<TRITaskAttributing> _taskAttribution;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *nextTasks;
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
+ (id)taskWithTaskAttribution:(id)a0;
+ (id)parseFromData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_asPersistedTask;
- (id)serialize;
- (id)initWithTaskAttribution:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

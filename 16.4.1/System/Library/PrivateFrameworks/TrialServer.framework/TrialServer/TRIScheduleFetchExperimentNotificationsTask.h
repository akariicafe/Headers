@class TRIDownloadOptions, NSString, NSArray, NSDate, NSMutableArray;
@protocol TRITaskQueueStateProviding;

@interface TRIScheduleFetchExperimentNotificationsTask : TRIBaseTask <TRITask> {
    BOOL _rollbacksOnly;
    NSMutableArray *_nextTasks;
    TRIDownloadOptions *_options;
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

+ (id)parseFromData:(id)a0;
+ (id)taskWithRollbacksOnly:(BOOL)a0 downloadOptions:(id)a1;

- (id)_asPersistedTask;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithRollbacksOnly:(BOOL)a0 downloadOptions:(id)a1;
- (id)nextTasksForRunStatus:(int)a0;

@end

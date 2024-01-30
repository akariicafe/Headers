@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRISubscribeChannelTask : TRIBaseTask <TRITask>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
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
+ (id)taskWithExperimentId:(id)a0 startTime:(id)a1;

- (unsigned long long)requiredCapabilities;
- (id)_asPersistedTask;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExperiment:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void).cxx_destruct;

@end

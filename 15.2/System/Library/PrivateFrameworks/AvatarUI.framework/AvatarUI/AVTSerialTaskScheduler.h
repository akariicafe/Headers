@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVTSerialTaskScheduler : NSObject <AVTTaskScheduler>

@property (readonly, nonatomic) NSMutableArray *priorityTasks;
@property (readonly, nonatomic) NSMutableArray *backlogTasks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly, nonatomic) long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fifoScheduler;
+ (id)fifoSchedulerWithEnvironment:(id)a0;
+ (id)lifoSchedulerWithEnvironment:(id)a0;
+ (id /* block */)nextTaskToRunForPriorityTasks:(id)a0 backlogTasks:(id)a1 order:(long long)a2;
+ (id)lifoScheduler;

- (void)cancelTask:(id /* block */)a0;
- (void)scheduleTask:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancelAllTasks;
- (void)performStateWork:(id /* block */)a0;
- (void)lowerTaskPriority:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0 order:(long long)a1;
- (void)startTask:(id /* block */)a0;
- (void)didCompleteTask:(id /* block */)a0;

@end

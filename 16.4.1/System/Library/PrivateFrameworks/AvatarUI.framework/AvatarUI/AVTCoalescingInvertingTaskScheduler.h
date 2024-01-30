@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVTTaskScheduler;

@interface AVTCoalescingInvertingTaskScheduler : NSObject <AVTTaskScheduler>

@property (readonly, nonatomic) NSMutableArray *tasks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *coalescingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly, nonatomic) id<AVTTaskScheduler> backingScheduler;
@property (readonly, nonatomic) double coalesingDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTask:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scheduleTask:(id /* block */)a0;
- (void)cancelAllTasks;
- (void)startTasksFrom:(id /* block */)a0;
- (id)initWithBackingScheduler:(id)a0 coalescingQueue:(id)a1 delay:(double)a2 environment:(id)a3;
- (void)lowerTaskPriority:(id /* block */)a0;
- (void)performStateWork:(id /* block */)a0;

@end

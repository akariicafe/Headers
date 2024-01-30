@class CADisplayLink, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PXPreloadScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_pendingUtilityTasks;
    CADisplayLink *_displayLink;
    NSMutableArray *_pendingBlocks;
    struct __CFRunLoopObserver { } *_runloopObserver;
}

@property (class, readonly, nonatomic) PXPreloadScheduler *sharedScheduler;

@property (nonatomic, setter=_setActive:) BOOL _isActive;

- (void)_didExecuteTaskWithQoS:(unsigned long long)a0;
- (id)init;
- (void)_runLoopWillStartWaiting;
- (void).cxx_destruct;
- (void)_updateIsActive;
- (void)scheduleMainQueueTask:(id /* block */)a0;
- (void)dealloc;
- (void)scheduleDeferredTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;
- (void)_willScheduleTaskWithQoS:(unsigned long long)a0;
- (BOOL)_shouldExecutePendingBlock;
- (void)scheduleTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;
- (void)scheduleTaskAfterCATransactionCommits:(id /* block */)a0;
- (void)_displayLinkTick:(id)a0;
- (void)scheduleMainQueueTaskAndWait:(id /* block */)a0;

@end

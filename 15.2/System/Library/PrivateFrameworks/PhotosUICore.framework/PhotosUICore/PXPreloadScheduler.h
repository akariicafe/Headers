@class NSMutableArray, NSObject, PXDisplayLink;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PXPreloadScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_pendingUtilityTasks;
    PXDisplayLink *_displayLink;
    double _waitStartTime;
    BOOL _shouldIgnoreDisplayLinkTimestamps;
    NSMutableArray *_pendingBlocks;
    struct __CFRunLoopObserver { } *_runloopObserver;
}

@property (class, readonly, nonatomic) PXPreloadScheduler *sharedScheduler;

@property (nonatomic, setter=_setActive:) BOOL _isActive;

- (void)scheduleMainQueueTask:(id /* block */)a0;
- (void)scheduleMainQueueTaskAndWait:(id /* block */)a0;
- (void)scheduleTaskAfterCATransactionCommits:(id /* block */)a0;
- (void)scheduleDeferredTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;
- (void)_displayLinkTick:(id)a0;
- (void).cxx_destruct;
- (void)_runLoopWillStartWaiting;
- (id)init;
- (void)_didExecuteTaskWithQoS:(unsigned long long)a0;
- (void)_updateIsActive;
- (BOOL)_shouldExecutePendingBlock;
- (void)_willScheduleTaskWithQoS:(unsigned long long)a0;
- (void)dealloc;
- (void)scheduleTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;

@end

@class CNStack, NSString;
@protocol CNScheduler;

@interface CNCoalescingSchedulerDecorator : NSObject <CNScheduler>

@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly, nonatomic) double coalescingWindow;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) CNStack *delayedBlocks;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)flushDelayedBlock;
- (unsigned long long)getAndIncrementState;
- (void)removeDelayedBlock:(id /* block */)a0;
- (id)initWithScheduler:(id)a0 coalescingWindow:(double)a1;

@end

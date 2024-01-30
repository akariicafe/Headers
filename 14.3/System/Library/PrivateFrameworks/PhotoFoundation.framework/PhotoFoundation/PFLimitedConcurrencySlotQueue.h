@class PFLimitedConcurrencyQueueClass, NSObject;
@protocol OS_dispatch_queue;

@interface PFLimitedConcurrencySlotQueue : NSObject {
    _Atomic unsigned long long _blockCount;
    NSObject<OS_dispatch_queue> *_slotQueue;
}

@property (readonly, weak) PFLimitedConcurrencyQueueClass *concurrentQueue;
@property (readonly) unsigned long long slotIndex;

+ (id)currentSlotQueue;

- (void).cxx_destruct;
- (void)dispatchAsync:(id /* block */)a0;
- (id)initWithConcurrentQueue:(id)a0 targetQueue:(id)a1 slotIndex:(unsigned long long)a2;
- (unsigned long long)incrementSlotUseCount;
- (unsigned long long)decrementSlotUseCount;
- (unsigned long long)slotUseCount;
- (const char *)label;
- (void)resume;
- (void)suspend;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;

@end

@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {
    NSMutableArray *_slotQueues;
    unsigned long long _concurrencyLimit;
    PFSerialQueue *_serializer;
    NSMutableArray *_availableSlots;
    BOOL _usesBarrierBlocks;
    unsigned long long _suspendCount;
}

- (void)dispatchBarrierSync:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (id)_extensionsForTargetingQueue;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (void)dispatchAsync:(id /* block */)a0;
- (unsigned long long)concurrencyLimit;
- (void)_setupConcurrencyLimit:(unsigned long long)a0;
- (id)_allocateOneSlotQueue;
- (void)_allocateAllSlotQueues;
- (id)checkoutAvailableSlot;
- (void)slotQueueMightBeUnused:(id)a0;
- (void)enqueueDelayedDrop;
- (void)dropOneSlotQueue;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)resume;
- (void)dispatchSync:(id /* block */)a0;
- (void)suspend;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;

@end

@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {
    NSMutableArray *_slotQueues;
    unsigned long long _concurrencyLimit;
    PFSerialQueue *_serializer;
    NSMutableArray *_availableSlots;
    BOOL _usesBarrierBlocks;
    unsigned long long _suspendCount;
}

- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (id)_extensionsForTargetingQueue;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (unsigned long long)concurrencyLimit;
- (void)_setupConcurrencyLimit:(unsigned long long)a0;
- (id)_allocateOneSlotQueue;
- (void)_allocateAllSlotQueues;
- (void)enqueueDelayedDrop;
- (id)checkoutAvailableSlot;
- (void)slotQueueMightBeUnused:(id)a0;
- (void)dropOneSlotQueue;
- (void).cxx_destruct;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)suspend;
- (void)resume;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;

@end

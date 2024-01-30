@class NSObject;
@protocol OS_dispatch_queue;

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (BOOL)assertQueueBarrier;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (void)setTargetQueue:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)dispatchCancellable:(id /* block */)a0;
- (id)_extensionsForTargetingQueue;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)setSpecific:(void *)a0 forKey:(void *)a1;
- (id)_dispatchQueueForSetTargetQueue;
- (id)extensionMatching:(id /* block */)a0;
- (void *)getSpecific:(void *)a0;
- (id)dispatchCancellableAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (id)description;
- (id)dispatchCancellableAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (const char *)label;
- (unsigned int)qualityOfService;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (id)dispatchCancellableGroup:(id)a0 notify:(id /* block */)a1;
- (void)dispatchAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (BOOL)assertOnQueue;
- (BOOL)assertNotOnQueue;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (id)_extensionManager;
- (void)dispatchAfterInterval:(double)a0 block:(id /* block */)a1;

@end

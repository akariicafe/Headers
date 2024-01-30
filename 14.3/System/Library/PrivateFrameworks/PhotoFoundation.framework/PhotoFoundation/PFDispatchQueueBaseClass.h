@class NSObject;
@protocol OS_dispatch_queue;

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setTargetQueue:(id)a0;
- (id)extensionMatching:(id /* block */)a0;
- (BOOL)assertOnQueue;
- (void *)getSpecific:(void *)a0;
- (void)dispatchAfterInterval:(double)a0 block:(id /* block */)a1;
- (id)initWithQueue:(id)a0;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_dispatchQueueForSetTargetQueue;
- (id)dispatchCancellable:(id /* block */)a0;
- (unsigned int)qualityOfService;
- (id)dispatchCancellableAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)assertQueueBarrier;
- (BOOL)assertNotOnQueue;
- (void)dispatchAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (id)_extensionsForTargetingQueue;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (id)description;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (const char *)label;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (id)dispatchCancellableGroup:(id)a0 notify:(id /* block */)a1;
- (id)dispatchCancellableAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)resume;
- (id)_extensionManager;
- (void)dispatchSync:(id /* block */)a0;
- (void)suspend;
- (void)setSpecific:(void *)a0 forKey:(void *)a1;

@end

@class PFDispatchQueueExtensionManager, PFSerialQueue, PFDispatchQueue;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    unsigned long long _suspendCount;
}

- (void)setTargetQueue:(id)a0;
- (id)extensionMatching:(id /* block */)a0;
- (BOOL)assertOnQueue;
- (void *)getSpecific:(void *)a0;
- (void)_invoke:(id /* block */)a0 extensionDataArray:(id)a1;
- (void)runBlock:(id /* block */)a0;
- (void)dispatchAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)_performAsyncNotify:(id)a0 enqueueBlock:(id /* block */)a1;
- (id)initWithQueue:(id)a0;
- (void)suspendRequests;
- (void)disableExtension:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)wrappedQueue;
- (id)_dispatchQueueForSetTargetQueue;
- (id)dispatchCancellable:(id /* block */)a0;
- (unsigned int)qualityOfService;
- (void)removeAllQueuedBlocks;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (id)dispatchCancellableAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)addExtensions:(id)a0;
- (BOOL)assertQueueBarrier;
- (BOOL)assertNotOnQueue;
- (void)dispatchAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (id)_extensionsForTargetingQueue;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (id)description;
- (void)dispatchAsync:(id /* block */)a0;
- (void)enableExtension:(id)a0;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (const char *)label;
- (void)removeAllQueuedBlocksAndWait;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (id)dispatchCancellableGroup:(id)a0 notify:(id /* block */)a1;
- (id)dispatchCancellableAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)resume;
- (id)_extensionManager;
- (BOOL)onQueue;
- (void)dispatchSync:(id /* block */)a0;
- (void)suspend;
- (void)resumeRequests;
- (void)setSpecific:(void *)a0 forKey:(void *)a1;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;

@end

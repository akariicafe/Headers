@class PFDispatchQueueExtensionManager, PFSerialQueue, PFDispatchQueue;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    unsigned long long _suspendCount;
}

- (void)dispatchSync:(id /* block */)a0;
- (BOOL)onQueue;
- (void)dispatchAsync:(id /* block */)a0;
- (BOOL)assertQueueBarrier;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (void)setTargetQueue:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)dispatchCancellable:(id /* block */)a0;
- (id)_extensionsForTargetingQueue;
- (void)disableExtension:(id)a0;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)setSpecific:(void *)a0 forKey:(void *)a1;
- (id)_dispatchQueueForSetTargetQueue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)extensionMatching:(id /* block */)a0;
- (void *)getSpecific:(void *)a0;
- (void)_performAsyncNotify:(id)a0 enqueueBlock:(id /* block */)a1;
- (id)dispatchCancellableAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (id)description;
- (void)removeAllQueuedBlocks;
- (id)dispatchCancellableAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)enableExtension:(id)a0;
- (void)suspendRequests;
- (const char *)label;
- (unsigned int)qualityOfService;
- (void)addExtensions:(id)a0;
- (void).cxx_destruct;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)suspend;
- (void)_invoke:(id /* block */)a0 extensionDataArray:(id)a1;
- (void)resume;
- (id)dispatchCancellableGroup:(id)a0 notify:(id /* block */)a1;
- (void)resumeRequests;
- (void)removeAllQueuedBlocksAndWait;
- (void)runBlock:(id /* block */)a0;
- (void)dispatchAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (id)wrappedQueue;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (BOOL)assertOnQueue;
- (BOOL)assertNotOnQueue;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (id)_extensionManager;
- (void)dispatchAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;

@end

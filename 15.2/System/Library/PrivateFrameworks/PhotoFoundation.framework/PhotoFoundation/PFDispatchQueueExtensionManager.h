@class NSString, PFDispatchQueueExtension;

@interface PFDispatchQueueExtensionManager : NSObject <PFDispatchQueueExtending> {
    _Atomic unsigned long long _enabledExtensionCount;
    PFDispatchQueueExtension *_extensions[4];
    _Atomic BOOL _extensionEnabled[4];
    unsigned long long _suspendCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)queue:(id)a0 willEnqueueAsync:(id)a1 when:(id /* block */)a2;
- (void)disableExtension:(id)a0;
- (id)queue:(id)a0 receivedDispatchAsync:(id /* block */)a1;
- (void)addExtensions:(id)a0 queue:(id)a1;
- (id)announce:(id /* block */)a0;
- (id)extensionMatching:(id /* block */)a0;
- (id)queue:(id)a0 willTargetQueue:(id)a1;
- (void)messageExtensions:(id)a0 messageBlock:(id /* block */)a1;
- (id)queue:(id)a0 receivedDispatchBarrierSync:(id /* block */)a1;
- (id)queue:(id)a0 receivedDispatchBarrierAsync:(id /* block */)a1;
- (void)queue:(id)a0 didDequeue:(id)a1 skipExecution:(id /* block */)a2;
- (void)queue:(id)a0 willEnqueueSync:(id)a1;
- (void)enableExtension:(id)a0;
- (void)queueWillResume:(id)a0;
- (id)extensions;
- (void)installOnQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)queue:(id)a0 receivedDispatchSync:(id /* block */)a1;
- (void)queue:(id)a0 skippedExecuting:(id)a1;
- (void)queue:(id)a0 willExecute:(id)a1;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 async:(id /* block */)a2;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 notify:(id /* block */)a2;
- (void)queueDidSuspend:(id)a0;
- (void)queue:(id)a0 didExecute:(id)a1;
- (id)queue:(id)a0 receivedDispatchAfter:(id /* block */)a1;

@end

@class NSString;

@interface PFDispatchQueueExtension : NSObject <PFDispatchQueueExtending>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionOnQueue:(id)a0;
+ (id)newSerialQueueWithLabel:(id)a0 qos:(unsigned int)a1;
+ (id)newSerialQueueWithLabel:(id)a0;
+ (id)newSerialQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2;
+ (id)newConcurrentQueueWithLabel:(id)a0;
+ (id)newConcurrentQueueWithLabel:(id)a0 qos:(unsigned int)a1;
+ (id)newConcurrentQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2;
+ (id)extensionOnQueue:(id)a0 matching:(id /* block */)a1;
+ (id)extendedQueue:(id)a0;

- (id)queue:(id)a0 receivedDispatchAfter:(id /* block */)a1;
- (void)queue:(id)a0 willExecute:(id)a1;
- (void)queue:(id)a0 didExecute:(id)a1;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 async:(id /* block */)a2;
- (id)queue:(id)a0 receivedDispatchBarrierAsync:(id /* block */)a1;
- (id)queue:(id)a0 willTargetQueue:(id)a1;
- (void)installOnQueue:(id)a0;
- (id)queue:(id)a0 receivedDispatchAsync:(id /* block */)a1;
- (void)queueWillResume:(id)a0;
- (void)queue:(id)a0 willEnqueueAsync:(id)a1 when:(id /* block */)a2;
- (void)queueDidSuspend:(id)a0;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 notify:(id /* block */)a2;
- (id)newBlockInfo;
- (id)queue:(id)a0 receivedDispatchSync:(id /* block */)a1;
- (void)queue:(id)a0 skippedExecuting:(id)a1;
- (void)queue:(id)a0 didDequeue:(id)a1 skipExecution:(id /* block */)a2;
- (id)queue:(id)a0 receivedDispatchBarrierSync:(id /* block */)a1;
- (void)queue:(id)a0 willEnqueueSync:(id)a1;

@end

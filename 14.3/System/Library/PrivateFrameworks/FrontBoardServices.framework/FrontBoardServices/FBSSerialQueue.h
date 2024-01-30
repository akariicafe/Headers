@class NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    unsigned long long _enqueueID;
    unsigned long long _dequeueID;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _callingOut;
    NSObject<OS_dispatch_semaphore> *_synchronizingEnqueueSemaphore;
    unsigned long long _lastSynchronizingWorkspaceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queueWithDispatchQueue:(id)a0;
+ (id)queueWithMainRunLoopModes:(id)a0;

- (void)assertOnQueue;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_performAsync:(id /* block */)a0;
- (void)dealloc;
- (id)_initWithDispatchQueue:(id)a0 mainRunLoopModes:(id)a1;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (BOOL)_performNext;
- (id)backingQueueIfExists;
- (BOOL)isEqual:(id)a0;
- (BOOL)_hasNext;
- (BOOL)_targetQueue_performNextIfPossible;
- (void)assertBarrierOnQueue;
- (void)_performNextFromRunLoopSource;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (void)_setSynchronizingEnqueueSemaphore:(id)a0 forWorkspaceWithName:(unsigned long long)a1;
- (void)performAsync:(id /* block */)a0;

@end

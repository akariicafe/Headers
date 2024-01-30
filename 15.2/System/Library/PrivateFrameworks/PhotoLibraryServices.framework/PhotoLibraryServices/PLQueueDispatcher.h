@class PLQueueDispatcherContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLQueueDispatcher : NSObject {
    PLQueueDispatcherContext *_userInitiatedContext;
    PLQueueDispatcherContext *_utilityContext;
    PLQueueDispatcherContext *_backgroundContext;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}

+ (void)reportBlockEnqueued:(id /* block */)a0 onContext:(id)a1 forLibrary:(id)a2;
+ (id)debugDescriptionOfEnqueuedBlocksOnContext:(id)a0;
+ (void)reportBlockDequeuedOnContext:(id)a0;
+ (id)sharedQueueDispatcher;

- (id)sharedUtilityQueue;
- (void)_syncPerformBlockNotOnAnyContext:(id /* block */)a0;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (id)contextForCurrentQoS;
- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void).cxx_destruct;
- (id)sharedBackgroundQueue;
- (id)init;
- (id)_contextsTrackingBlocks;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (id)debugDescription;
- (void /* function */ *)callOutForCurrentQoS;

@end

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLConcurrencyLimiter : NSObject {
    NSObject<OS_dispatch_queue> *_userInitiatedQueueA;
    NSObject<OS_dispatch_queue> *_userInitiatedQueueB;
    NSObject<OS_dispatch_queue> *_backgroundAndUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
    _Atomic int _chooseQueueA;
}

+ (BOOL)isRunningUnderLimiter;
+ (id)sharedLimiter;
+ (void)reportBlockEnqueued:(id /* block */)a0 onQueue:(id)a1 forLibrary:(id)a2;
+ (void)reportBlockDequeuedOnQueue:(id)a0;
+ (void)configureListTrackingForDispatchQueue:(id)a0;
+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)a0;

- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)asyncPerformOnContext:(id)a0 identifyingBlock:(id /* block */)a1 block:(id /* block */)a2;
- (id)_nextDispatchQueueForCurrentQoS;
- (id)debugDescription;
- (void /* function */ *)callOutForCurrentQoS;
- (id)_queuesTrackingBlocks;
- (id)sharedUtilityQueue;
- (id)init;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)a0;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void).cxx_destruct;
- (void)dispatchAsync:(id)a0 block:(id /* block */)a1;
- (id)sharedBackgroundQueue;

@end

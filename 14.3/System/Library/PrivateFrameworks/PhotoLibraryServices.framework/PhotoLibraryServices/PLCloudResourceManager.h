@class PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (id)init;
- (id)statusForDebug:(BOOL)a0;
- (void).cxx_destruct;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)updateCacheDeletePurgeableAmount;
- (void)handleOptimizeModeChange;
- (id)initWithCPLManager:(id)a0 library:(id)a1;
- (void)stop;
- (double)_minimumIntervalBetweenOperations;
- (void)clearPrefetchState;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)invalidate;

@end

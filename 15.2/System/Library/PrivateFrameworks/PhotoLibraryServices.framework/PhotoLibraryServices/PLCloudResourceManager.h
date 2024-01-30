@class PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (void)updateCacheDeletePurgeableAmount;
- (double)_minimumIntervalBetweenOperations;
- (void)clearPrefetchState;
- (void)handleOptimizeModeChange;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)handleCPLConfigurationChange;
- (id)statusForDebug:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)initWithCPLManager:(id)a0 library:(id)a1;
- (void)stop;
- (void)handleCPLStatusChange;

@end

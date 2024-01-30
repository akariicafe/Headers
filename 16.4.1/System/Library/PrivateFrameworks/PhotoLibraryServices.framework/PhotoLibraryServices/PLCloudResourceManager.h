@class PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (double)_minimumIntervalBetweenOperations;
- (void)handleOptimizeModeChange;
- (void)handleCPLConfigurationChange;
- (id)statusForDebug:(BOOL)a0;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)handleCPLStatusChange;
- (void)clearPrefetchState;
- (void)updateCacheDeletePurgeableAmount;
- (void)stop;
- (id)init;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)invalidate;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (void).cxx_destruct;

@end

@class NSObject, PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    BOOL _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void)updateCacheDeletePurgeableAmount;
- (id)_identifierForResource:(id)a0;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (long long)pruneResources:(id)a0 inPhotoLibrary:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)_totalPurgeableAmountForUrgency:(long long)a0;
- (long long)_purgeableAmountWithBudget:(long long)a0 debugString:(id)a1;
- (struct __CFDictionary { } *)_handleCacheDeletePurge:(int)a0 info:(struct __CFDictionary { } *)a1;
- (struct __CFDictionary { } *)_handleCacheDeletePurgeable:(int)a0 info:(struct __CFDictionary { } *)a1;
- (void)_handleCacheDeleteRegistration;
- (long long)diskSpaceToPrune;
- (id)initWithCPLManager:(id)a0 library:(id)a1;
- (void)startAutomaticPruneWithBudget:(long long)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;
- (long long)_fetchResourcesForPruningWithBudget:(long long)a0 urgency:(long long)a1 batchHandler:(id /* block */)a2;
- (id)pruneStatusForDebug:(BOOL)a0;
- (void)_updateLocalStateForPrunedResources:(id)a0 inPhotoLibrary:(id)a1;
- (long long)_localResourcesSize;
- (id)_predicateForPruneWithUrgency:(long long)a0;
- (void)dealloc;
- (void)stop;

@end

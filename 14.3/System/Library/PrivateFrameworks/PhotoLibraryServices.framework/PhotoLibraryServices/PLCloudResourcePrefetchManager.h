@class PLVolumeInfo, PLPhotoLibrary, NSDictionary, PLCloudResourcePruneManager, NSDate, PLCloudPhotoLibraryManager, NSObject;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDictionary *_inflightResources;
    long long _defaultPrefetchMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    BOOL _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
    PLVolumeInfo *_volumeInfo;
}

+ (id)descriptionForPrefetchPhase:(unsigned long long)a0;
+ (id)_identifierForResourceDownload:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)handleOptimizeModeChange;
- (void)stop;
- (BOOL)_canPrefetch;
- (void)startAutomaticPrefetch;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)a0 withReason:(id)a1;
- (void)_cleanupInflightResources;
- (id)prefetchStatusForDebug:(BOOL)a0;
- (void)_reloadDownloadOriginalsSetting;
- (void)_reloadDefaultDownload;
- (unsigned long long)_countOfAllInflightResources;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)a0;
- (id)_allInflightResourceIdentifiers;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)a0;
- (BOOL)_isInflightResourceIdentifier:(id)a0;
- (void)_removeAllInflightResourceIdentifiers;
- (void)_addInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (void)_removeInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)_startPrefetchNextBatch;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)a0;
- (void)_prefetchResources:(id)a0 prefetchPhase:(unsigned long long)a1 shouldAutoPefetchNextBatch:(BOOL)a2;
- (void)_incrementPrefetchCountForPLCloudResources:(id)a0;
- (void)_handlePrefetchError:(id)a0 forPLCloudResourceWithObjectID:(id)a1;
- (long long)diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0;
- (id)_lastCompletePrefetchDate;
- (void)_resourcesWithPredicate:(id)a0 limit:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0;
- (void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithCPLManager:(id)a0 pruneManager:(id)a1 library:(id)a2;
- (void)clearPrefetchState;
- (void)prefetchResourcesWithPredicates:(id)a0 prefetchPhase:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (id)_volumeInfo;
- (void)invalidate;

@end

@class PLCloudResourcePruneManager, NSDate, PLVolumeInfo, NSDictionary, PLCloudPhotoLibraryManager, NSObject, PLPhotoLibrary, PLPrefetchConfiguration;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDictionary *_inflightResources;
    long long _prefetchMode;
    long long _prefetchOptimizeMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    BOOL _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
    PLVolumeInfo *_volumeInfo;
    NSDate *_initialSyncDate;
    NSDate *_lastCompletePrefetchDate;
    PLPrefetchConfiguration *_prefetchConfiguration;
}

+ (id)_descriptionForPrefetchMode:(long long)a0;
+ (id)_identifierForResourceDownload:(id)a0;
+ (id)descriptionForPrefetchPhase:(unsigned long long)a0;
+ (id)_overridePrefetchMode;

- (void)_addInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (long long)_totalSizeOfOriginalResources;
- (void)_resourcesWithPredicate:(id)a0 limit:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)clearPrefetchState;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0;
- (void)handleOptimizeModeChange;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)a0;
- (BOOL)_isInflightResourceIdentifier:(id)a0;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)_cleanupInflightResources;
- (BOOL)_canPrefetch;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)a0;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)a0;
- (void)handleCPLConfigurationChange;
- (void)_checkCPLBackgroundDownloadOperations;
- (id)_allInflightResourceIdentifiers;
- (void)_setLastCompletePrefetchDate:(id)a0;
- (void)_handlePrefetchError:(id)a0 forPLCloudResourceWithObjectID:(id)a1;
- (void)_startPrefetchNextBatch;
- (id)_volumeInfo;
- (void).cxx_destruct;
- (void)prefetchResourcesWithPredicates:(id)a0 prefetchPhase:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (id)_prefetchStatusForDebug:(BOOL)a0;
- (id)prefetchStatusForDebug:(BOOL)a0;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)a0;
- (id)initWithCPLManager:(id)a0 pruneManager:(id)a1 library:(id)a2;
- (void)invalidate;
- (void)_removeInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (void)_incrementPrefetchCountForPrefetchPhase:(unsigned long long)a0 resources:(id)a1;
- (BOOL)_isPrefetchDisabled;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)a0;
- (void)_removeAllInflightResourceIdentifiers;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (void)startAutomaticPrefetch;
- (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0;
- (void)_reloadDownloadOriginalsSetting;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (unsigned long long)_countOfAllInflightResources;
- (void)_prefetchResources:(id)a0 prefetchPhase:(unsigned long long)a1 shouldAutoPefetchNextBatch:(BOOL)a2;
- (void)_reloadDefaultDownload;
- (void)_startAutomaticPrefetch;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0 prefetchOptimizeMode:(long long)a1;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)a0 withReason:(id)a1;
- (void)stop;
- (void)handleCPLStatusChange;
- (void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 applyPerPrefetchLimit:(BOOL)a1 completionHandler:(id /* block */)a2;

@end

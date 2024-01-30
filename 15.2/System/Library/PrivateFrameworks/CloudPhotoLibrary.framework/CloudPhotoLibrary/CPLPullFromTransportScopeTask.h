@class CPLEngineTransport, CPLScopeChange, CPLEngineCloudCache, NSData, CPLEngineTransientRepository, NSObject, CPLFeatureVersionHistory;
@protocol CPLEngineTransportGetCurrentSyncAnchorTask, CPLEngineTransportDownloadBatchTask, CPLEngineTransportGroup, OS_dispatch_queue, CPLEngineTransportQueryTask;

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineCloudCache *_cloudCache;
    CPLEngineTransientRepository *_transientPullRepository;
    CPLEngineTransport *_transport;
    id<CPLEngineTransportDownloadBatchTask> _downloadTask;
    id<CPLEngineTransportQueryTask> _queryTask;
    CPLScopeChange *_currentScopeChange;
    Class _currentQueryClass;
    BOOL _ignoreNewBatches;
    BOOL _useCourtesyMingling;
    unsigned long long _rewindFeatureVersion;
    NSData *_rewindSyncAnchor;
    CPLFeatureVersionHistory *_versionHistory;
    id<CPLEngineTransportGroup> _transportGroup;
    unsigned long long _totalAssetCountForScope;
    BOOL _hasCachedTotalAssetCountForScope;
    long long _taskItem;
    BOOL _hasFetchedInitialSyncAnchor;
    BOOL _shouldStoreInitialSyncAnchor;
    NSData *_initialSyncAnchor;
    CPLScopeChange *_initialScopeChange;
    id<CPLEngineTransportGetCurrentSyncAnchorTask> _fetchInitialSyncAnchorTask;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
}

- (void)_launch;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)a0;
- (void)_launchPullTasksAndDisableQueries:(BOOL)a0;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (void)_launchQueryForClass:(Class)a0 cursor:(id)a1;
- (id)_cloudCacheInStore:(id)a0;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (id)taskIdentifier;
- (void)taskDidFinishWithError:(id)a0;
- (void)_extractAndMinglePersonsIfPossibleFromBatch:(id)a0 inTransaction:(id)a1;
- (void)_cancelAllTasks;
- (void)_launchFetchChangesFromSyncAnchor:(id)a0;
- (void)_handleNewBatchFromQuery:(id)a0 queryClass:(Class)a1 newCursor:(id)a2;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(id)a0;
- (id)_transientPullRepositoryInStore:(id)a0;
- (unsigned long long)_totalAssetCountForScope;
- (void).cxx_destruct;
- (void)_handleNewBatchFromQuery:(id)a0 newCursor:(id)a1 inTransaction:(id)a2;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)a0 inTransaction:(id)a1;
- (void)_launchNextQueryTask;
- (void)launch;
- (void)_handleNewBatchFromChanges:(id)a0 newSyncAnchor:(id)a1 inTransaction:(id)a2;
- (void)_handleNewBatchFromChanges:(id)a0 updatedFlags:(id)a1 newSyncAnchor:(id)a2;
- (void)_checkServerFeatureVersionWithCompletionHandler:(id /* block */)a0;
- (void)_fetchInitialSyncAnchor;
- (void)cancel;
- (void)_notifySchedulerPullQueueIsFull;

@end

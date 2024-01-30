@class NSString, NSMutableDictionary, ATThroughputCalculator, NSDictionary, NSMutableSet, NSObject, ATAssetLinkController, NSMutableOrderedSet, NSMapTable;
@protocol ATAssetClient, OS_dispatch_queue;

@interface ATDeviceSyncSessionAssetTask : ATDeviceSyncSessionTask <ATAssetLinkControllerObserver> {
    id<ATAssetClient> _assetClient;
    NSMutableOrderedSet *_clientAssetsRemaining;
    NSMutableOrderedSet *_clientAssetsInProgress;
    NSMutableOrderedSet *_serverAssetsInProgress;
    ATAssetLinkController *_assetController;
    NSMutableDictionary *_detailedProgress;
    NSMutableDictionary *_syncProgresByAssetType;
    NSDictionary *_installedAssetMetrics;
    NSDictionary *_itemsWithEstimatedFileSize;
    NSMutableSet *_assetStreams;
    BOOL _addedTransportUpgradeException;
    double _taskStartTime;
    unsigned long long _totalAssetSize;
    ATThroughputCalculator *_throughputCalculator;
    NSMapTable *_assetToBytesMap;
    int _retrySendingAssetMetricsCount;
    BOOL _requestsComplete;
    BOOL _peerRequestsComplete;
    BOOL _deviceShouldReportSyncProgress;
    NSMutableDictionary *_progressMap;
    unsigned long long _successfullyCompletedItemCount;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)assetLinkController:(id)a0 didFinishAsset:(id)a1;
- (void).cxx_destruct;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (id)sessionGroupingKey;
- (void)_updateProperties;
- (void)assetLinkController:(id)a0 didUpdateAsset:(id)a1;
- (void)start;
- (id)initWithDataClass:(id)a0 onMessageLink:(id)a1;
- (void)updateProgressWithCount:(unsigned long long)a0 totalItemCount:(unsigned long long)a1;
- (void)_finishTaskWithError:(id)a0;
- (void)_shouldDeviceReportSyncProgress;
- (void)_assetRequestsCompletedWithError:(id)a0;
- (id)_serializedAssetRequestsFromRequestDictionary:(id)a0;
- (void)_handleBeginAssetTaskRequest:(id)a0 onMessagLink:(id)a1;
- (void)_handleEndAssetTaskRequest:(id)a0 onMessagLink:(id)a1;
- (void)_handleAssetRequest:(id)a0 onMessagLink:(id)a1;
- (void)_handleUpdateSessionTaskRequest:(id)a0 onMessageLink:(id)a1;
- (void)_handleInstalledAssetMetricsChanged:(id)a0 onMessageLink:(id)a1;
- (void)_handleAssetDownloadProgressed:(id)a0 onMessageLink:(id)a1;
- (void)_updateDetailedProgressForCompletedAsset:(id)a0;
- (void)_updateTaskDescription;
- (void)_updateProgressWithBytesTransferred:(unsigned long long)a0 forAsset:(id)a1;
- (id)_serializedAssetSyncProgressFromAssetCacheDictionary:(id)a0;
- (id)_getRawInstalledAssetMetricsFromAssetClient;
- (void)_updateCachedInstalledAssetMetricsWithNewMetrics:(id)a0;
- (id)_prepareInstalledAssetMetricsWithSerializedOutputFromClientMetrics:(id)a0;
- (id)_serializedAssetsToDownloadDictionaryWithUpdatedProgressFromDownloadDictionary:(id)a0;
- (id)_serializedDownloadedAssetsDictionaryFromDownloadedAssetsDictionary:(id)a0;
- (id)_getMetricsWithCurrentProgressForInflightAssetsFromAssetMetrics:(id)a0;
- (void)_sendUpdatedInstallMetrics;
- (void)_loadInstalledAssetMetricsFromSyncClient;
- (unsigned long long)_bytesDownloadedForAsset:(id)a0;
- (void)_removeAssetFromProgressMap:(id)a0;
- (id)_updateProgressAndGetFileProgressParamsForAsset:(id)a0;

@end

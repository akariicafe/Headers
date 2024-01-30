@class NSString, ATStoreDownloadService, NSMutableSet, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue, ATAssetLinkDelegate;

@interface ATStoreMediaAssetLink : NSObject <ATStoreDownloadObserver, ICEnvironmentMonitorObserver, ATAssetLink> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_resumeQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableSet *_enqueuedDownloadAssets;
    NSMutableSet *_enqueuedRestoreAssets;
    NSMutableSet *_cancelledAssets;
    NSMutableSet *_resumableAssets;
    NSMutableOrderedSet *_downloadsPendingEnqueue;
    ATStoreDownloadService *_downloadService;
    BOOL _resumeAssetDownloadsActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (void)prioritizeAsset:(id)a0;
- (BOOL)linkIsReady;
- (void)cancelAssets:(id)a0;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)canEnqueueAsset:(id)a0;
- (unsigned long long)maximumBatchSize;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (BOOL)_canEnqueueAssetUnderCurrentEnvironmentConditions:(id)a0 didUpdatePauseReason:(BOOL *)a1;
- (long long)_ATAssetStateForStoreDownloadState:(long long)a0;
- (void)_setupActivityToResumeDownloads;
- (unsigned long long)priority;
- (BOOL)open;
- (void)ATStoreDownloadService:(id)a0 didFinishAsset:(id)a1 withError:(id)a2 cancelPendingAssetsInBatch:(BOOL)a3;
- (void)ATStoreDownloadService:(id)a0 didResumeAsset:(id)a1;
- (void)ATStoreDownloadService:(id)a0 didUpdateProgressForAsset:(id)a1 progress:(float)a2;
- (void)ATStoreDownloadService:(id)a0 didChangeStateForAsset:(id)a1 oldState:(long long)a2 newState:(long long)a3;
- (void)_finishAsset:(id)a0 error:(id)a1 cancelPendingAssetsInBatch:(BOOL)a2;
- (void)close;
- (id)init;
- (void)ATStoreDownloadService:(id)a0 didEnqueueAsset:(id)a1;
- (void).cxx_destruct;

@end

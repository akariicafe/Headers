@class NSString, NSMutableDictionary, NSMapTable, SSDownloadManager, NSObject;
@protocol OS_dispatch_queue, ATAssetLinkDelegate;

@interface ATStoreAssetLink : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate, ATAssetLink> {
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_assetsByStoreID;
    NSMapTable *_downloadsByAsset;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (id)_dataClassForStoreKind:(id)a0;
- (unsigned long long)maximumBatchSize;
- (void)_enqueueAssets:(id)a0;
- (unsigned long long)priority;
- (id)_downloadForAsset:(id)a0 error:(id *)a1;
- (BOOL)linkIsReady;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (id)_assetForDownload:(id)a0;
- (id)_storeKindForAssetType:(id)a0;
- (void)cancelAssets:(id)a0;
- (BOOL)open;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (BOOL)canEnqueueAsset:(id)a0;
- (void)prioritizeAsset:(id)a0;
- (void)_updateInstallProgress:(double)a0 forAsset:(id)a1;
- (id)downloadManager;
- (id)_assetTypeForStoreKind:(id)a0;
- (void)_finishAsset:(id)a0 error:(id)a1 retryable:(BOOL)a2;

@end

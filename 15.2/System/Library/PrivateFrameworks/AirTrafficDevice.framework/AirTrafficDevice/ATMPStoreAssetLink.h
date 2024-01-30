@class NSString, NSMutableDictionary, MPStoreDownloadManager, NSObject;
@protocol OS_dispatch_queue, ATAssetLinkDelegate;

@interface ATMPStoreAssetLink : NSObject <MPStoreDownloadManagerObserver, ATAssetLink> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MPStoreDownloadManager *_downloadManager;
    NSMutableDictionary *_assetMap;
    NSMutableDictionary *_downloadsMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (void)prioritizeAsset:(id)a0;
- (unsigned long long)maximumBatchSize;
- (void)close;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;
- (BOOL)open;
- (BOOL)linkIsReady;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void)_finishAsset:(id)a0 error:(id)a1 retryable:(BOOL)a2;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)init;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (void)_enqueueAssets:(id)a0;
- (id)_dataClassForStoreKind:(id)a0;
- (id)_assetTypeForStoreKind:(id)a0;
- (BOOL)canEnqueueAsset:(id)a0;
- (void)downloadManager:(id)a0 didAddActiveDownloads:(id)a1 removeActiveDownloads:(id)a2;
- (void)cancelAssets:(id)a0;
- (id)_errorForFinishedDownload:(id)a0;

@end

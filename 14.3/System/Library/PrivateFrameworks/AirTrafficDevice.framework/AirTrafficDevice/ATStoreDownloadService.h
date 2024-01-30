@class NSString, NSMutableDictionary, NSOperationQueue, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATStoreDownloadService : NSObject {
    NSOperationQueue *_downloadQueue;
    NSOperationQueue *_restoreQueue;
    NSMutableDictionary *_downloadOperations;
    NSMutableDictionary *_restoreOperations;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly) NSString *downloadDirectoryPath;

+ (id)sharedService;

- (void)_updateProgressForAsset:(id)a0 progress:(float)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_enqueueAssetDownload:(id)a0;
- (void)_updateStateForAsset:(id)a0 oldState:(long long)a1 newState:(long long)a2;
- (void)_prioritizeAssetRestore:(id)a0;
- (void)_cancelAssetRestore:(id)a0;
- (void)addDownloadObserver:(id)a0;
- (void)_finishAsset:(id)a0 withError:(id)a1 cancelPendingDownloads:(BOOL)a2;
- (void)_enqueueAssetRestore:(id)a0;
- (BOOL)_isSourcePurchasesForAsset:(id)a0;
- (void)cancelAsset:(id)a0;
- (void)removeDownloadObserver:(id)a0;
- (void)_cancelAssetDownload:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_prioritizeAssetDownload:(id)a0;
- (id)_newDownloadOperationForAsset:(id)a0;
- (void)prioritizeAsset:(id)a0;
- (void)enqueueAsset:(id)a0;

@end

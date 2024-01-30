@class NSString, NSMutableDictionary, NSOperationQueue, NSMutableSet, NSObject, ICUnfairLock;
@protocol OS_dispatch_queue;

@interface ATStoreDownloadService : NSObject {
    NSOperationQueue *_prepareOperationQueue;
    NSOperationQueue *_downloadOperationQueue;
    NSOperationQueue *_processAssetsOperationQueue;
    NSMutableDictionary *_downloadOperations;
    NSMutableDictionary *_progressForAsset;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICUnfairLock *_lock;
}

@property (class, readonly, nonatomic) NSString *downloadDirectoryPath;

+ (id)sharedService;

- (void)prioritizeAsset:(id)a0;
- (void)cancelAsset:(id)a0;
- (void)_updateProgressForAsset:(id)a0 progress:(float)a1;
- (id)_newProcessAssetOperationForasset:(id)a0 assetsOperationResult:(id)a1;
- (void)_updateStateForAsset:(id)a0 oldState:(long long)a1 newState:(long long)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_newAssetOperationForAsset:(id)a0 prepareOperationResult:(id)a1;
- (void)_finishAsset:(id)a0 withError:(id)a1 cancelPendingDownloads:(BOOL)a2;
- (void)addDownloadObserver:(id)a0;
- (id)init;
- (void)enqueueAsset:(id)a0;
- (void)removeDownloadObserver:(id)a0;
- (void).cxx_destruct;
- (id)_newPrepareOperationForAsset:(id)a0;

@end

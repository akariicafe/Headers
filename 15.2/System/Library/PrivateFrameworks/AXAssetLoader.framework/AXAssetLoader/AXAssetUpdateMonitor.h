@class AXAssetController, NSString, AXAssetPolicy, NSHashTable, NSArray, AXDispatchTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AXAssetUpdateMonitor : NSObject <AXAssetControllerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assetsLock;
    NSHashTable *_updateObservers;
    NSArray *_cachedInstalledAssets;
    AXDispatchTimer *_refreshDispatchTimer;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property (retain, nonatomic) AXAssetController *assetController;
@property (readonly, nonatomic) AXAssetPolicy *assetPolicy;
@property (nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) BOOL hasInProgressDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetMonitorWithPolicy:(id)a0;
+ (id)assetMonitorWithPolicy:(id)a0 qosClass:(unsigned int)a1;
+ (id)assetMonitorWithPolicy:(id)a0 qosClass:(unsigned int)a1 targetQueue:(id)a2;

- (void).cxx_destruct;
- (void)logInfo:(id)a0;
- (void)stop;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)removeUpdateObserver:(id)a0;
- (void)addUpdateObserver:(id)a0;
- (id)_initWithAssetPolicy:(id)a0 qosClass:(unsigned int)a1 targetQueue:(id)a2;
- (void)_workerQueue_refreshAssetsAfterDelay:(double)a0 canRefreshCatalog:(BOOL)a1;
- (void)_performWithinLock:(id /* block */)a0;
- (void)refreshAssetsAfterDelay:(double)a0;
- (id)_purgeUnneededAssetsFromInstalledAssets:(id)a0;
- (void)_updateCachedInstalledAssets:(id)a0;

@end

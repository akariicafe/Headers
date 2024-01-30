@class NSArray, AXAssetPolicy, NSHashTable, NSMutableSet, NSObject, AXDispatchTimer;
@protocol OS_dispatch_queue;

@interface AXAssetController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assetsLock;
    NSHashTable *_observers;
    NSArray *_cachedAvailableAssets;
    NSMutableSet *_cachedInProgressAssets;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    AXDispatchTimer *_refreshDispatchTimer;
    int _notifyToken;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mobileAssetQueue;
@property (readonly, nonatomic) AXAssetPolicy *assetPolicy;
@property (nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) BOOL hasInProgressDownloads;

+ (id)assetControllerWithPolicy:(id)a0;
+ (id)assetControllerWithPolicy:(id)a0 qosClass:(unsigned int)a1;

- (void)registerForNotifications;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)refreshAssetsByForceUpdatingCatalog:(BOOL)a0 updatingCatalogIfNeeded:(BOOL)a1;
- (id)description;
- (void)logDebug:(id)a0;
- (void)logInfo:(id)a0;
- (void)purgeAssets:(id)a0;
- (void)downloadAssets:(id)a0 successStartBlock:(id /* block */)a1;
- (id)_initWithAssetPolicy:(id)a0 qosClass:(unsigned int)a1;
- (void)_refreshQueue_refreshAssets:(BOOL)a0;
- (void)deregisterForNotifications;
- (void)refreshAssetsByForceUpdatingCatalog:(BOOL)a0 updatingCatalogIfNeeded:(BOOL)a1 catalogRefreshOverrideTimeout:(id)a2;
- (void)logError:(id)a0;
- (void)_updateCatalogWithOverrideTimeout:(id)a0 completion:(id /* block */)a1;
- (void)_queue_refreshAssets:(BOOL)a0;
- (void)performWithinLock:(id /* block */)a0;
- (void)_queue_downloadAssets:(id)a0 successStartBlock:(id /* block */)a1;
- (void)_queue_purgeAssets:(id)a0;
- (void)_queue_updateDownloadPriorityIfNecessary;
- (void)_handleAssetProgressUpdate:(id)a0 progressNotification:(id)a1;
- (void)performBlockOnAssetObservers:(id /* block */)a0;
- (void)addInProgressAsset:(id)a0;
- (void)removeInProgressAsset:(id)a0;
- (void)replaceCachedAssetsWithAssets:(id)a0 error:(id)a1;
- (void)_handleAssetDownloadStarted:(id)a0;
- (void)_handleAssetDownloadCompletion:(id)a0 downloadResult:(long long)a1;
- (void)getCachedAvailableAssets:(id /* block */)a0;
- (void)getCachedDownloadedAssets:(id /* block */)a0;

@end

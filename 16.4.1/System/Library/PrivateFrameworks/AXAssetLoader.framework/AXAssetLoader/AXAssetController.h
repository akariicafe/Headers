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
@property (nonatomic) BOOL shouldRefreshForAssetInstallNotifications;
@property (readonly, nonatomic) AXAssetPolicy *assetPolicy;
@property (nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) BOOL hasInProgressDownloads;

+ (id)assetControllerWithPolicy:(id)a0 qosClass:(unsigned int)a1;
+ (id)assetControllerWithPolicy:(id)a0 qosClass:(unsigned int)a1 shouldRefreshForAssetInstallNotifications:(BOOL)a2;
+ (id)assetControllerWithPolicy:(id)a0;

- (void)purgeAssets:(id)a0;
- (void)_registerForNotifications;
- (void)_handleAssetDownloadCompletion:(id)a0 downloadResult:(long long)a1;
- (void)purgeInMemoryCachedAssets;
- (void)refreshAssetsByForceUpdatingCatalog:(BOOL)a0 updatingCatalogIfNeeded:(BOOL)a1 catalogRefreshOverrideTimeout:(id)a2 completion:(id /* block */)a3;
- (void)addObserver:(id)a0;
- (void)downloadAssets:(id)a0 successStartBlock:(id /* block */)a1;
- (void)_handleAssetDownloadStarted:(id)a0;
- (void)performBlockOnAssetObservers:(id /* block */)a0;
- (void)getCachedDownloadedAssets:(id /* block */)a0;
- (void)purgeAssets:(id)a0 completion:(id /* block */)a1;
- (void)_queue_downloadAssets:(id)a0 successStartBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)refreshWithoutCatalogUpdateSynchronously;
- (void)refreshAssetsByForceUpdatingCatalog:(BOOL)a0 updatingCatalogIfNeeded:(BOOL)a1;
- (void)_updateCatalogWithOverrideTimeout:(id)a0 completion:(id /* block */)a1;
- (void)_queue_updateDownloadPriorityIfNecessary;
- (void)dealloc;
- (void)_queue_refreshAssets:(BOOL)a0 completion:(id /* block */)a1;
- (id)_initWithAssetPolicy:(id)a0 qosClass:(unsigned int)a1 shouldRefreshForAssetInstallNotifications:(BOOL)a2;
- (void)removeObserver:(id)a0;
- (void)downloadAssets:(id)a0 successStartBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)addInProgressAsset:(id)a0;
- (void)purgeAssetsSynchronously:(id)a0;
- (void)_replaceCachedAssetsWithAssets:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)performWithinLock:(id /* block */)a0;
- (id)refreshAssetsWithAttributesSynchronously:(id)a0 installedOnly:(BOOL)a1;
- (void)stopDownloadAsset:(id)a0 completion:(id /* block */)a1;
- (id)refreshInstalledAssetsSynchronously;
- (void)_queue_purgeAssets:(id)a0 completion:(id /* block */)a1;
- (id)description;
- (void)_handleAssetProgressUpdate:(id)a0 progressNotification:(id)a1;
- (void)removeInProgressAsset:(id)a0;
- (BOOL)isAssetCatalogInstalled;
- (void)_refreshQueue_refreshAssets:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshAssetsByForceUpdatingCatalog:(BOOL)a0 updatingCatalogIfNeeded:(BOOL)a1 catalogRefreshOverrideTimeout:(id)a2;
- (void)getCachedAvailableAssets:(id /* block */)a0;
- (void)_deregisterForNotifications;

@end

@class PLPersistentContainer, PLPersonInfoManager, PLConstraintsDirector, PLPhotoKitVariationCache, PLLazyObject, NSError, PLPhotoLibraryBundleController, PLClientSandboxExtensionCache, PLPhotoAnalysisServiceClient, NSArray, PLLibraryServicesManager, PLAssetsdClient, PFTimeZoneLookup, PLIndicatorFileCoordinator, PLAtomicObject, PLChangeHandlingContainer, PLFileSystemVolumeUnmountMonitor, PLEmailAddressManager, NSURL, PLPhotoLibraryPathManager, NSNumber;

@interface PLPhotoLibraryBundle : NSObject <PLFileSystemVolumeUnmountObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSError *_shutdownReason;
    PLAtomicObject *_atomicPhotoLibraries;
    PLLazyObject *_lazyPersistentContainer;
    PLLazyObject *_lazyIndicatorFileCoordinator;
    PLLazyObject *_lazyChangeHandlingContainer;
    PLLazyObject *_lazyAssetsdClient;
    PLLazyObject *_lazyLibraryServicesManager;
    PLLazyObject *_lazyVariationCache;
    PLLazyObject *_lazyPersonInfoManager;
    PLLazyObject *_lazyEmailAddressManager;
    PLLazyObject *_lazyBoundAssetsdServicesTable;
    PLLazyObject *_lazyPhotoAnalysisServiceClient;
    PLLazyObject *_lazyConstraintsDirector;
    PLLazyObject *_lazyTimeZoneLookup;
    NSNumber *_sqliteErrorIndicatorFileExists;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sqliteErrorIndicatorLock;
    PLFileSystemVolumeUnmountMonitor *_volumeUnmountMonitor;
}

@property (readonly, copy) NSURL *libraryURL;
@property (readonly, copy) NSError *shutdownReason;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) PLIndicatorFileCoordinator *indicatorFileCoordinator;
@property (readonly) PLPersistentContainer *persistentContainer;
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;
@property (readonly) PLPhotoKitVariationCache *variationCache;
@property (readonly) PLPersonInfoManager *personInfoManager;
@property (readonly) PLEmailAddressManager *emailAddressManager;
@property (readonly, weak, nonatomic) PLPhotoLibraryBundleController *bundleController;
@property (readonly) PLPhotoAnalysisServiceClient *photoAnalysisServiceClient;
@property (readonly) PLConstraintsDirector *constraintsDirector;
@property (readonly) PFTimeZoneLookup *timeZoneLookup;
@property (readonly) PLClientSandboxExtensionCache *clientSandboxExtensionCache;
@property (readonly) PLAssetsdClient *assetsdClient;
@property (readonly) PLLibraryServicesManager *libraryServicesManager;
@property (readonly) NSArray *boundAssetsdServices;

- (void)resetClientSandboxExtensionCache;
- (BOOL)sqliteErrorIndicatorFileExists;
- (id)boundAssetsdServicesTable;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (BOOL)bindAssetsdService:(id)a0 error:(id *)a1;
- (void)volumeWillUnmount:(id)a0;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (id)newChangeHandlingContainer;
- (void)pauseChangeHandling;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (void)touch;
- (BOOL)isSystemPhotoLibrary;
- (id)newAssetsdClient;
- (id)newLibraryServicesManager;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_invalidateClientSandboxExtensionCache;
- (id)newChangePublisher;
- (BOOL)registerPLPhotoLibrary:(id)a0;
- (void)shutdownWithReason:(id)a0;
- (void)_invalidatePhotoAnalysisServiceClient;
- (void)_invalidateChangeHandlingContainer;
- (void)resumeChangeHandling;
- (void)initializeChangeHandling;
- (void)close;
- (void)distributeChangesSinceLastCheckpoint;
- (id)newBoundAssetsdServicesTable;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (void)_invalidatePersistentContainer;
- (void)unbindAssetsdService:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end

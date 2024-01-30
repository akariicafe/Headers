@class PLPersistentContainer, PLPersonInfoManager, PLConstraintsDirector, PLPhotoKitVariationCache, PLLazyObject, NSError, PLPhotoLibraryBundleController, PLClientSandboxExtensionCache, PLPhotoAnalysisServiceClient, NSArray, PLLibraryServicesManager, PLAssetsdClient, PFTimeZoneLookup, PLManagedObjectLookupItemCache, PLIndicatorFileCoordinator, PLAtomicObject, PLChangeHandlingContainer, PLFileSystemVolumeUnmountMonitor, PLEmailAddressManager, NSURL, PLPhotoLibraryPathManager, NSNumber;

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
    PLLazyObject *_lazyUniformTypeIdentiferCache;
    PLLazyObject *_lazyCodecCache;
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
@property (readonly) PLManagedObjectLookupItemCache *uniformTypeIdentiferCache;
@property (readonly) PLManagedObjectLookupItemCache *codecCache;
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

- (void)close;
- (void).cxx_destruct;
- (BOOL)sqliteErrorIndicatorFileExists;
- (void)touch;
- (void)dealloc;
- (void)_invalidatePersistentContainer;
- (void)unbindAssetsdService:(id)a0;
- (void)shutdownWithReason:(id)a0;
- (id)newBoundAssetsdServicesTable;
- (void)volumeWillUnmount:(id)a0;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (void)_invalidateClientSandboxExtensionCache;
- (id)description;
- (id)newLibraryServicesManager;
- (BOOL)registerPLPhotoLibrary:(id)a0;
- (BOOL)bindAssetsdService:(id)a0 error:(id *)a1;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (id)boundAssetsdServicesTable;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (void)initializeChangeHandling;
- (BOOL)isSystemPhotoLibrary;
- (void)_invalidateChangeHandlingContainer;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (id)newAssetsdClient;
- (void)_invalidatePhotoAnalysisServiceClient;
- (id)newChangePublisher;
- (void)distributeChangesSinceLastCheckpoint;
- (id)newChangeHandlingContainer;
- (void)resetClientSandboxExtensionCache;

@end

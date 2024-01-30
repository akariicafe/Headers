@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (id)newAssetsdClient;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (void)_initClientSandboxExtensionCache;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)newLibraryServicesManager;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (BOOL)calculateTotalSizeWithResult:(id /* block */)a0;
- (void)close;
- (id)clientSandboxExtensionCache;
- (id)newChangePublisher;
- (void)resetClientSandboxExtensionCache;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)newBoundAssetsdServicesTable;
- (void)_invalidateClientSandboxExtensionCache;
- (void).cxx_destruct;

@end

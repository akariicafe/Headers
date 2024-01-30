@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void)resetClientSandboxExtensionCache;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (id)newAssetsdClient;
- (id)newLibraryServicesManager;
- (id)clientSandboxExtensionCache;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_invalidateClientSandboxExtensionCache;
- (id)newChangePublisher;
- (void)close;
- (id)newBoundAssetsdServicesTable;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (void)_initClientSandboxExtensionCache;
- (void).cxx_destruct;

@end

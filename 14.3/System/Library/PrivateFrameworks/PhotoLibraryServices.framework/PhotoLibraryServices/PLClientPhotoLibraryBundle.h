@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void)close;
- (void).cxx_destruct;
- (id)newBoundAssetsdServicesTable;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (void)_invalidateClientSandboxExtensionCache;
- (void)_initClientSandboxExtensionCache;
- (id)newLibraryServicesManager;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (id)newAssetsdClient;
- (id)newChangePublisher;
- (id)clientSandboxExtensionCache;
- (void)resetClientSandboxExtensionCache;

@end

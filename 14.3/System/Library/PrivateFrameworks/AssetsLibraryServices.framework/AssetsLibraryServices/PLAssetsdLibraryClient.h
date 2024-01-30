@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 proxyGetter:(SEL)a2 sandboxExtensions:(id)a3;
- (BOOL)synchronouslyImportFileSystemAssetsForce:(BOOL)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (BOOL)repairSingletonObjectsWithError:(id *)a0;
- (void)pendingEventsForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 options:(id)a1 error:(id *)a2;
- (void)recoverFromCrashIfNeeded;
- (long long)getCurrentModelVersion;
- (BOOL)_consumeSandboxExtensions:(id)a0;
- (void)launchAssetsd;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 error:(id *)a3;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 error:(id *)a1;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)importFileSystemAssetsForce:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)_assetURIStringsForPhotos:(id)a0;
- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)a0 error:(id *)a1;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 completion:(id /* block */)a1;

@end

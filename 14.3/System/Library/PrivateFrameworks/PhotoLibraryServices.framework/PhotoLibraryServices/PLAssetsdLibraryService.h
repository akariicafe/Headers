@class PLPhotoLibraryBundleController, NSString, PLAssetsdService, PLAssetsdConnectionAuthorization, PLXPCPhotoLibraryStoreContainer, NSMutableArray;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol> {
    PLXPCPhotoLibraryStoreContainer *_xpcPhotoLibraryStoreContainer;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSMutableArray *_preRunningProgressFollowers;
    NSMutableArray *_postRunningProgressFollowers;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLAssetsdService *_assetsdService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)requiredLibraryServicesStateForURL:(id)a0;

- (void)_sendClientReply:(id /* block */)a0 sandboxExtensionsByPath:(id)a1 error:(id)a2;
- (void)pendingEventsForRequest:(id)a0 reply:(id /* block */)a1;
- (void)getCurrentModelVersionWithReply:(id /* block */)a0;
- (void)repairSingletonObjectsWithReply:(id /* block */)a0;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(id /* block */)a0;
- (id)libraryBundle;
- (void).cxx_destruct;
- (id)_preRunningProgress;
- (void)recoverFromCrashIfNeeded;
- (void)createPhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)openPhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 reply:(id /* block */)a3;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (void)launchAssetsd;
- (id)newLibraryOpener;
- (id)importFileSystemAssetsWithReason:(id)a0 force:(BOOL)a1 reply:(id /* block */)a2;
- (id)_postRunningProgress;
- (id)postOpenProgressWithReply:(id /* block */)a0;
- (id)_returnValueForProgress:(id)a0 addTo:(id)a1;
- (id)sandboxExtensionsByPath;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (id)initWithLibraryServicesManager:(id)a0 bundleController:(id)a1 connectionAuthorization:(id)a2 assetsdService:(id)a3;

@end

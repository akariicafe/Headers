@class NSString, PLAssetsdConnectionAuthorization, NSPersistentStoreCoordinator;

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (void)getUUIDsForCloudIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (void)applyChangesRequest:(id)a0 reply:(id /* block */)a1;
- (id)clientDescription;
- (void)commitRequest:(id)a0 reply:(id /* block */)a1;

@end

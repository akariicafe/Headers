@class NSString, NSPersistentStoreCoordinator, PLCameraCaptureTaskConstraintCoordinator, PLAssetsdConnectionAuthorization;

@interface PLAssetsdPhotoKitAddService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitAddServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCameraCaptureTaskConstraintCoordinator *_cameraTaskConstraintCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientBundleID;
- (void)commitRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)validatePhotosAccessScopeForChangesRequest:(id)a0;
- (void)applyChangesRequest:(id)a0 reply:(id /* block */)a1;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (id)clientDescription;
- (id)clientDisplayName;

@end

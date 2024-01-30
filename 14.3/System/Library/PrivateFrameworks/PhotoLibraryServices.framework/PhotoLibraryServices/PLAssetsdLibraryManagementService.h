@class NSString, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController;

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLPhotoLibraryBundleController *_bundleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setSystemPhotoLibraryURL:(id)a0 sandboxExtension:(id)a1 options:(unsigned short)a2 reply:(id /* block */)a3;
- (void)getActivePhotoLibrariesWithReply:(id /* block */)a0;
- (void)getPhotoLibraryURLsWithReply:(id /* block */)a0;
- (void)closeAndDeletePhotoLibraryAtURL:(id)a0 reply:(id /* block */)a1;
- (id)initWithConnectionAuthorization:(id)a0 bundleController:(id)a1;

@end

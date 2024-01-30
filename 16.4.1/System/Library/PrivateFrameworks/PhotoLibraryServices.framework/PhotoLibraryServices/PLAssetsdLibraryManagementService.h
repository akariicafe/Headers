@class NSString, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController;

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLPhotoLibraryBundleController *_bundleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPhotosXPCEndpoint:(id)a0;

- (void).cxx_destruct;
- (void)_closePhotoLibraryAtURL:(id)a0 delete:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)_deleteLibraryFromFilesystemAtURL:(id)a0 error:(id *)a1;
- (void)closeAndDeletePhotoLibraryAtURL:(id)a0 reply:(id /* block */)a1;
- (void)closePhotoLibraryAtURL:(id)a0 reply:(id /* block */)a1;
- (void)filesystemSizeForLibraryURL:(id)a0 reply:(id /* block */)a1;
- (void)getActivePhotoLibrariesWithReply:(id /* block */)a0;
- (void)getPhotoLibraryURLsWithLibraryURL:(id)a0 reply:(id /* block */)a1;
- (void)getPhotosXPCEndpointWithReply:(id /* block */)a0;
- (id)initWithConnectionAuthorization:(id)a0 bundleController:(id)a1;
- (void)resetSyndicationLibraryWithReply:(id /* block */)a0;
- (void)setSystemPhotoLibraryURL:(id)a0 sandboxExtension:(id)a1 options:(unsigned short)a2 reply:(id /* block */)a3;

@end

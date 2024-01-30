@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient

- (BOOL)setSystemPhotoLibraryURL:(id)a0 error:(id *)a1;
- (void)getPhotoLibraryURLsWithReply:(id /* block */)a0;
- (BOOL)removePhotoLibraryURL:(id)a0 error:(id *)a1;
- (BOOL)closeAndDeletePhotoLibraryAtURL:(id)a0 error:(id *)a1;
- (BOOL)overrideSystemPhotoLibraryURL:(id)a0 error:(id *)a1;
- (id)activePhotoLibraries:(id *)a0;

@end

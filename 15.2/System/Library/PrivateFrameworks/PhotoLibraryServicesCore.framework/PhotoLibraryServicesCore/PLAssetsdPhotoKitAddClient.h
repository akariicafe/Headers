@interface PLAssetsdPhotoKitAddClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>

- (id)clientName;
- (void)sendChangesRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)sendChangesRequest:(id)a0 error:(id *)a1;

@end

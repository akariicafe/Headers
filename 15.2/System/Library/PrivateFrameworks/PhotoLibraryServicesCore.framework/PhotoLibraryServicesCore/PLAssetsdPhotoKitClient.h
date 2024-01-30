@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>

+ (BOOL)inTransactionProxy;
+ (void)sendChangesRequest:(id)a0 usingProxyFactory:(id)a1 reply:(id /* block */)a2;
+ (BOOL)sendChangesRequest:(id)a0 usingProxyFactory:(id)a1 error:(id *)a2;
+ (void)setInTransactionProxy:(BOOL)a0 queue:(id)a1;

- (id)clientName;
- (void)sendChangesRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)sendChangesRequest:(id)a0 error:(id *)a1;
- (id)getUUIDsForCloudIdentifiers:(id)a0 error:(id *)a1;

@end

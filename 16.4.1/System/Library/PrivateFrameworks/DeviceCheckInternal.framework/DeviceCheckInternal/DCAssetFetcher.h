@interface DCAssetFetcher : NSObject

+ (id)sharedFetcher;

- (id)_assetQuery;
- (void)_fetchAssetWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleMissingMetadataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_handleSuccessForQuery:(id)a0 completion:(id /* block */)a1;
- (void)_queryMetadataWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_validateAsset:(id)a0 error:(id *)a1;
- (void)fetchPublicKeyAssetWithCompletion:(id /* block */)a0;
- (void)initiateMetadataFetchIgnoringCachesWithCompletion:(id /* block */)a0;

@end

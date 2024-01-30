@class NSString, NSMutableDictionary, DDSAssetQueryResultCache;
@protocol DDSAssetProvidingDelegate;

@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding>

@property (readonly, nonatomic) NSMutableDictionary *remainingAssetsByQueryId;
@property (readonly, nonatomic) DDSAssetQueryResultCache *assetQueryResultsCache;
@property (readonly, nonatomic) NSMutableDictionary *downloadStateByAssetID;
@property (nonatomic) BOOL encounteredAssertionUpdateError;
@property (retain, nonatomic) id<DDSAssetProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)supportedCompatibilityVersion;
+ (id)latestAssetsOnlyFromAssets:(id)a0;
+ (id)platformVersion;
+ (id)latestBetweenAssetA:(id)a0 AssetB:(id)a1;

- (void)didChangeDownloadState:(unsigned long long)a0 forAsset:(id)a1;
- (void)didUpdateCatalogWithError:(id)a0;
- (id)performAssetsForQuery:(id)a0 errorPtr:(id *)a1;
- (id)allContentItemsMatchingQuery:(id)a0 error:(id *)a1;
- (void)removeAssets:(id)a0;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (id)downloadOptionsForCatalogWithType:(id)a0 discretionaryDownload:(BOOL)a1;
- (void)removeAssetsForAssertions:(id)a0;
- (BOOL)shouldMatchAttributeValue:(id)a0 givenValue:(id)a1;
- (id)downloadOptionsForPolicy:(id)a0 discretionaryDownload:(BOOL)a1;
- (void)beginDownloadForAssets:(id)a0 withPolicy:(id)a1 discretionaryDownload:(BOOL)a2 error:(id *)a3 handler:(id /* block */)a4;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;
- (id)init;
- (void)didCompleteDownloadForAssertion:(id)a0 error:(id)a1;
- (id)assetsForQuery:(id)a0 errorPtr:(id *)a1;
- (void)removeOldAssetsForAssertions:(id)a0;
- (void)updateCatalogForAssetTypes:(id)a0 discretionaryDownload:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)beginDownloadForAssertions:(id)a0 discretionaryDownload:(BOOL)a1;
- (void).cxx_destruct;
- (void)beginDownloadForAssertion:(id)a0 discretionaryDownload:(BOOL)a1 handler:(id /* block */)a2;

@end

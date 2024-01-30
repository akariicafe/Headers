@class NSString, NSMutableDictionary;
@protocol DDSAssetQueryResultCaching, DDSAssetProvidingDelegate;

@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding>

@property (readonly, nonatomic) NSMutableDictionary *remainingAssetsByQueryId;
@property (nonatomic) BOOL encounteredAssertionUpdateError;
@property (retain, nonatomic) id<DDSAssetQueryResultCaching> assetQueryResultsCache;
@property (retain, nonatomic) NSMutableDictionary *downloadStateByAssetID;
@property (retain, nonatomic) id<DDSAssetProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)supportedCompatibilityVersion;
+ (id)latestBetweenAssetA:(id)a0 AssetB:(id)a1;
+ (id)latestAssetsOnlyFromAssets:(id)a0;

- (void)didChangeDownloadState:(unsigned long long)a0 forAsset:(id)a1;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (BOOL)shouldMatchAttributeValue:(id)a0 givenValue:(id)a1;
- (void)didUpdateCatalogWithError:(id)a0;
- (void)updateCatalogForAssetTypes:(id)a0 discretionaryDownload:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)downloadOptionsForCatalogWithType:(id)a0 discretionaryDownload:(BOOL)a1;
- (void)removeAssets:(id)a0;
- (id)assetsForQuery:(id)a0 errorPtr:(id *)a1;
- (void)removeAssetsForAssertions:(id)a0;
- (id)downloadOptionsForPolicy:(id)a0 discretionaryDownload:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeOldAssetsForAssertions:(id)a0;
- (void)beginDownloadForAssets:(id)a0 withPolicy:(id)a1 discretionaryDownload:(BOOL)a2 error:(id *)a3 handler:(id /* block */)a4;
- (id)performAssetsForQuery:(id)a0 errorPtr:(id *)a1;
- (id)allContentItemsMatchingQuery:(id)a0 error:(id *)a1;
- (void)beginDownloadForAssertions:(id)a0 discretionaryDownload:(BOOL)a1;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;
- (void)didCompleteDownloadForAssertion:(id)a0 error:(id)a1;
- (void)beginDownloadForAssertion:(id)a0 discretionaryDownload:(BOOL)a1 handler:(id /* block */)a2;

@end

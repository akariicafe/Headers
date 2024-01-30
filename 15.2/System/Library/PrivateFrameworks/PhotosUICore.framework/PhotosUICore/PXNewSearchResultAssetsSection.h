@class NSArray, PHFetchResult;

@interface PXNewSearchResultAssetsSection : PXNewSearchResultsSection

@property (copy, nonatomic) PHFetchResult *curatedAssetFetchResult;
@property (copy, nonatomic) NSArray *allAssetResultUUIDs;
@property (readonly, copy, nonatomic) NSArray *allAssetResults;

- (id)title;
- (void).cxx_destruct;
- (id)initWithCuratedAssetSearchResults:(id)a0 curatedAssetSearchResultsFetchResult:(id)a1 allAssetSearchResults:(id)a2;
- (id)assetForSearchResultIdentifier:(id)a0;
- (id)searchResultForAsset:(id)a0;

@end

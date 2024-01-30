@interface PXSearchResultModelTranslator : NSObject

+ (unsigned long long)_assetAggregationTypeForPLAssetSearchResult:(id)a0;
+ (unsigned long long)_collectionTypeForPLCollectionSearchResult:(id)a0;
+ (id)_dateFromPSIDate:(id)a0;
+ (BOOL)_isSinglePersonSearchResult:(id)a0;
+ (id)assetAggregationSearchResultForPLAssetSearchResult:(id)a0;
+ (id)assetSearchResultsForPLTopAssetsSearchResult:(id)a0;
+ (id)collectionSearchResultForPLCollectionSearchResult:(id)a0;
+ (id)personSearchResultForPLAssetSearchResult:(id)a0;
+ (id)searchResultsForAssetResults:(id)a0;
+ (id)searchResultsForCollectionResults:(id)a0;
+ (id)searchResultsForTopAssetsResult:(id)a0;

- (id)init;

@end

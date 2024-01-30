@interface PXSearchResultViewControllerDataFetching : NSObject

+ (id)_fetchAssetCollectionsForCollectionSearchResult:(id)a0;
+ (id)assetCollectionForAlbumSearchResult:(id)a0;
+ (id)assetCollectionForAssetAggregationSearchResult:(id)a0;
+ (id)assetCollectionForAssetUUIDs:(id)a0 title:(id)a1;
+ (id)personForPersonSearchResult:(id)a0;
+ (id)photosDetailsContextForCollectionSearchResult:(id)a0;
+ (id)photosViewConfigurationForAlbumSearchResult:(id)a0;
+ (id)photosViewConfigurationForAssetAggregationSearchResult:(id)a0;
+ (id)storyConfigurationForCollectionSearchResult:(id)a0;

@end

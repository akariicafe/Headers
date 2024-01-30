@interface PUAssetPickerSectionDataItems : NSObject

+ (id)createAssetCollectionSectionDataItemsForCollection:(id)a0 filterOptions:(id)a1;
+ (id)fetchResultForAssets:(id)a0;
+ (id)createAllAssetsSectionDataWithFilterOptions:(id)a0 showTitles:(BOOL)a1;
+ (id)createAssetCollectionSectionDataForFetchResult:(id)a0;
+ (id)createAllLocalAlbumsSectionDataWithFilterOptions:(id)a0;
+ (id)createAllSharedAlbumsSectionDataWithFilterOptions:(id)a0;
+ (id)createTitleOnlySectionData:(id)a0;
+ (id)allAssestsFetchOptionsWithFilterOptions:(id)a0;
+ (id)standardFetchOptions;
+ (id)standardFetchOptionsWithReverseSort;
+ (id)standardFetchOptionsWithCreationDateSort;
+ (id)allAssetsCollectionFetchResult;
+ (id)createAllAlbumsSectionDataItemsWithFilterOptions:(id)a0;
+ (id)createAllAssetsSectionDataItemsWithFilterOptions:(id)a0 showTitles:(BOOL)a1;

- (id)init;

@end

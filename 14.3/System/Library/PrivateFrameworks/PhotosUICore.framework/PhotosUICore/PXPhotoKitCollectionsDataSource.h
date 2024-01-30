@class NSArray, NSDictionary, PHFetchResult, PXPhotoKitCollectionsDataSourceManagerConfiguration;

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource

@property (readonly, nonatomic) NSArray *_collectionListBySection;
@property (readonly, nonatomic) NSArray *_collectionsFetchResultBySection;
@property (readonly, nonatomic) NSDictionary *_keyAssetsFetchResultsByCollection;
@property (readonly, nonatomic) NSDictionary *_collectionsIndexPathsByCollection;
@property (readonly, nonatomic) NSDictionary *itemFetchResultByCollection;
@property (readonly, nonatomic) NSArray *_virtualCollections;
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration;

+ (long long)estimatedCountForAssetCollection:(id)a0 withConfiguration:(id)a1;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCollectionListBySection:(id)a0 collectionsFetchResultBySection:(id)a1 keyAssetsFetchResultsByCollection:(id)a2 collectionsIndexPathsByCollection:(id)a3 itemFetchResultByCollection:(id)a4 virtualCollections:(id)a5 collectionsFetchResult:(id)a6 dataSourceConfiguration:(id)a7;
- (long long)assetCollectionsCountForSection:(long long)a0;
- (id)indexPathForCollection:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)collectionListForSection:(long long)a0;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)countForCollection:(id)a0;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)enumerateCollectionsUsingBlock:(id /* block */)a0;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)assetCollectionsCountForFetchResult:(id)a0;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)content;
- (long long)collectionsListCountForFetchResult:(id)a0;
- (id)collectionAtIndexPath:(id)a0;
- (long long)collectionsListCountForSection:(long long)a0;
- (id)keyAssetsForCollection:(id)a0;

@end

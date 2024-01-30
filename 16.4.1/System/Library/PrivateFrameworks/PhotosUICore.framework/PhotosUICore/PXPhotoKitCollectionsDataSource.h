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
@property (readonly, nonatomic) unsigned short sharingFilter;

+ (long long)estimatedCountForAssetCollection:(id)a0 withConfiguration:(id)a1;

- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithCollectionListBySection:(id)a0 collectionsFetchResultBySection:(id)a1 keyAssetsFetchResultsByCollection:(id)a2 collectionsIndexPathsByCollection:(id)a3 itemFetchResultByCollection:(id)a4 virtualCollections:(id)a5 collectionsFetchResult:(id)a6 sharingFilter:(unsigned short)a7 dataSourceConfiguration:(id)a8;
- (long long)collectionsListCountForFetchResult:(id)a0;
- (id)content;
- (id)keyAssetsForCollection:(id)a0;
- (long long)countForCollection:(id)a0;
- (long long)numberOfSections;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)enumerateCollectionsUsingBlock:(id /* block */)a0;
- (id)indexPathForCollection:(id)a0;
- (long long)collectionsListCountForSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)collectionAtIndexPath:(id)a0;
- (long long)assetCollectionsCountForFetchResult:(id)a0;
- (id)collectionListForSection:(long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)init;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)description;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)assetCollectionsCountForSection:(long long)a0;

@end

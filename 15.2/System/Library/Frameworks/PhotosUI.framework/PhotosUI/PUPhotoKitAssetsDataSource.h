@class PXPhotosDataSource, NSString, PXPhotosDataSourceChange, NSCache;

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PXPhotosDataSourceChange *change;
@property (readonly, nonatomic) NSString *changeFromDataSourceIdentifier;
@property (readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;

- (id)assetAtIndexPath:(id)a0;
- (id)assetCollectionAtIndexPath:(id)a0;
- (id)assetReferenceAtIndexPath:(id)a0;
- (id)indexPathForAssetReference:(id)a0;
- (id)indexPathForAssetCollection:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)startingAssetReference;
- (BOOL)isEmpty;
- (BOOL)couldAssetReferenceAppear:(id)a0;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (id)initWithImmutablePhotosDataSource:(id)a0 withChange:(id)a1 fromDataSourceIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (long long)numberOfAssetsWithMaximum:(long long)a0;

@end

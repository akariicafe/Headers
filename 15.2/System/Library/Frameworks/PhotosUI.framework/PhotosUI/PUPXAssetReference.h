@class PXAssetReference;

@interface PUPXAssetReference : PUAssetReference

@property (readonly, nonatomic) PXAssetReference *underlyingAssetReference;

- (void).cxx_destruct;
- (id)pxAssetReference;
- (id)initWithAsset:(id)a0 assetCollection:(id)a1 indexPath:(id)a2 dataSourceIdentifier:(id)a3;
- (id)initWithPXAssetReference:(id)a0 dataSourceIdentifier:(id)a1;

@end

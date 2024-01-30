@class PUAssetReference;

@interface PUJoiningAssetReference : PUAssetReference

@property (readonly, nonatomic) long long hintDataSourceIndex;
@property (readonly, nonatomic) PUAssetReference *containedAssetReference;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 assetCollection:(id)a1 indexPath:(id)a2 dataSourceIdentifier:(id)a3;
- (id)initWithContainedAssetReference:(id)a0 hintDataSourceIndex:(long long)a1 indexPath:(id)a2 dataSourceIdentifier:(id)a3;
- (id)description;

@end

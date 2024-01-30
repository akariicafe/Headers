@class PUAssetReference;

@interface PUAssetExplorerReviewScreenAssetsDataSourceAssetReference : PUAssetReference

@property (readonly, nonatomic) PUAssetReference *originalAssetReference;

- (void).cxx_destruct;
- (id)initWithOriginalAssetReference:(id)a0 asset:(id)a1 dataSourceIdentifier:(id)a2;
- (id)description;

@end

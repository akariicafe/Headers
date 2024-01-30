@class PXAssetsDataSource;

@interface PUPXAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PXAssetsDataSource *underlyingDataSource;

- (id)assetReferenceAtIndexPath:(id)a0;
- (id)indexPathForAssetReference:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)initWithUnderlyingDataSource:(id)a0;

@end

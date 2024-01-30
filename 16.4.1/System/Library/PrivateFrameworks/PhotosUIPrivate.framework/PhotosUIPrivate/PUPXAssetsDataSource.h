@class PXAssetsDataSource;

@interface PUPXAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PXAssetsDataSource *underlyingDataSource;

- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)assetReferenceAtIndexPath:(id)a0;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)indexPathForAssetReference:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUnderlyingDataSource:(id)a0;

@end

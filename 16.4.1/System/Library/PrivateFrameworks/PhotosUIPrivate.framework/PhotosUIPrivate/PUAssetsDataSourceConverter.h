@class PUTilingDataSourceConverter;

@interface PUAssetsDataSourceConverter : PUTilingDataSourceConverter

@property (class, readonly, nonatomic) PUTilingDataSourceConverter *defaultConverter;

- (BOOL)convertIndexPath:(id *)a0 tileKind:(id *)a1 fromDataSource:(id)a2 toDataSource:(id)a3;
- (BOOL)shouldReloadTileControllerFromAsset:(id)a0 toAsset:(id)a1 tileKind:(id)a2;

@end

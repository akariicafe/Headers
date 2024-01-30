@class NSArray;

@interface PXStaticDisplayAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) long long sectionContent;
@property (readonly, nonatomic) NSArray *assetCollectionBySection;
@property (readonly, nonatomic) NSArray *assetsBySection;
@property (readonly, nonatomic) NSArray *curatedAssetsBySection;
@property (readonly, nonatomic) NSArray *keyAssetsBySection;
@property (readonly, nonatomic) NSArray *exposedAssetsBySection;

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)keyAssetsForAssetCollection:(id)a0;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)a0;
- (long long)numberOfCuratedItemsInAssetCollection:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)init;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)hasCurationForAssetCollection:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayAssetFetchResults:(id)a0;
- (id)initWithAssetCollectionBySection:(id)a0 assetsBySection:(id)a1 curatedAssetsBySection:(id)a2 keyAsssetsBySection:(id)a3 sectionContent:(long long)a4;

@end

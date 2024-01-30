@class NSDictionary;

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource {
    NSDictionary *_assetCollectionBySection;
}

@property (readonly, copy, nonatomic) NSDictionary *assetDescriptionsBySection;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)photosGraphSuggestedContributions;
- (id)inputForItem:(id)a0;
- (id)initWithFileURLsBySection:(id)a0;
- (id)initWithFileBackedAssetDescriptionsBySection:(id)a0;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end

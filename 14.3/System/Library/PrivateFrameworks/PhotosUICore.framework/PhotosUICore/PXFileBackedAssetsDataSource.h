@class NSDictionary, _PXFileBackedAssetCollection;

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource {
    _PXFileBackedAssetCollection *_assetCollection;
    NSDictionary *_assetCollectionBySection;
}

@property (readonly, copy, nonatomic) NSDictionary *assetDescriptionsBySection;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (id)initWithFileBackedAssetDescriptionsBySection:(id)a0;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)initWithFileURLsBySection:(id)a0;
- (id)inputForItem:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)photosGraphSuggestedContributions;

@end

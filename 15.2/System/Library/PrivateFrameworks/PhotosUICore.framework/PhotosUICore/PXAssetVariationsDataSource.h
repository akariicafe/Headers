@class NSArray, PHAsset;

@interface PXAssetVariationsDataSource : PXSectionedDataSource

@property (readonly, copy, nonatomic) NSArray *variations;
@property (readonly, nonatomic) PHAsset *asset;

+ (id)emptyDataSource;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithVariations:(id)a0 asset:(id)a1;

@end

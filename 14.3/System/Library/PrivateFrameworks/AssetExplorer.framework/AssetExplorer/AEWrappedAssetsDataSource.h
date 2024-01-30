@class PUAssetsDataSource;

@interface AEWrappedAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) PUAssetsDataSource *_reviewAssetsDataSource;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithReviewAssetsDataSource:(id)a0;

@end

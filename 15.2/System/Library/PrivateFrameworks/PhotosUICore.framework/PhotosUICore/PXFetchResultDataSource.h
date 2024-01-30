@class PHFetchResult;

@interface PXFetchResultDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PHFetchResult *fetchResult;

- (long long)numberOfSections;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithFetchResult:(id)a0;

@end

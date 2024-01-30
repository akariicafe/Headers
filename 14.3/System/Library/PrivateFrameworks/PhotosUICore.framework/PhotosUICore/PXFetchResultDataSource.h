@class PHFetchResult;

@interface PXFetchResultDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PHFetchResult *fetchResult;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithFetchResult:(id)a0;

@end

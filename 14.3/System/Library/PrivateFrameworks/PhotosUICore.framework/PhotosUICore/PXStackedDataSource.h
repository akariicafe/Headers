@class NSArray;

@interface PXStackedDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSArray *dataSections;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSections:(id)a0;
- (id)changeDetailsToDataSource:(id)a0 sectionChanges:(id)a1 itemChanges:(id)a2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;

@end

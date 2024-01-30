@class NSArray, NSDictionary;

@interface PXPersonsSectionedDataSource : PXSectionedDataSource

@property (readonly, copy, nonatomic) NSArray *personsSections;
@property (readonly, copy, nonatomic) NSDictionary *faceTiles;
@property (readonly, nonatomic) long long totalItemCount;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)initWithPersonsSections:(id)a0 faceTiles:(id)a1;
- (id)faceTileForIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end

@class NSArray;

@interface PXRelatedDataSource : PXSectionedDataSource

@property (readonly, copy, nonatomic) NSArray *relatedEntries;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, nonatomic) BOOL useItemIndexPaths;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)initWithRelatedEntries:(id)a0 isTransient:(BOOL)a1 useItemIndexPaths:(BOOL)a2;
- (id)relatedEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_relatedEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForRelatedEntry:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end

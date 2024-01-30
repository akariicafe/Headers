@class NSArray, NSString;

@interface PXMemoriesFeedDataSource : PXSectionedDataSource <PXSectionedLayoutEngineDataSourceSnapshot>

@property (nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } indexPathForFirstPastMemorySection;
@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)inputForItem:(id)a0;
- (id)initWithEntries:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_firstSectionIndexPath;
- (void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 reverseDirection:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0 withHintIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (id)sectionedObjectReferenceForMemoryUUID:(id)a0;

@end

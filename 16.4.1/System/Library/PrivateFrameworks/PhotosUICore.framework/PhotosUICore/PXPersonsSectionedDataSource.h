@class NSArray, NSDictionary, NSMutableDictionary;

@interface PXPersonsSectionedDataSource : PXSectionedDataSource {
    NSMutableDictionary *_cachedSortedPersonsByTypeAndSection;
}

@property (readonly, copy, nonatomic) NSArray *personsSections;
@property (readonly, copy, nonatomic) NSDictionary *faceTiles;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly, nonatomic) unsigned long long peopleHomeSortingType;

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)_personsInSection:(long long)a0;
- (id)faceTileForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithPersonsSections:(id)a0 faceTiles:(id)a1 peopleHomeSortingType:(unsigned long long)a2;
- (id)sortedObjectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end

@class NSMutableArray, NSMutableIndexSet;

@interface FPItemCollectionIndexPathBasedDiffs : FPItemCollectionDiffs

@property (retain) NSMutableArray *movedSourceIndexPaths;
@property (retain) NSMutableArray *movedDestinationIndexPaths;
@property (retain) NSMutableIndexSet *deletedIndexes;
@property (retain) NSMutableIndexSet *insertedIndexes;
@property (retain) NSMutableIndexSet *updatedIndexes;

- (void).cxx_destruct;
- (BOOL)containsChanges;

@end

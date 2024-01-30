@class NSIndexSet, NSArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

@interface MPChangeDetails : NSObject {
    NSMutableDictionary *_sectionMoves;
    NSMutableDictionary *_sectionUpdates;
    NSMutableIndexSet *_updatedSectionMoveFromIndexes;
    NSMutableDictionary *_itemMoves;
    NSMutableDictionary *_itemUpdates;
    NSMutableSet *_updatedItemMoveFromIndexPaths;
    BOOL _isFlatCollection;
    BOOL _isFinalized;
}

@property (class, readonly, nonatomic) MPChangeDetails *empty;

@property (copy, nonatomic) NSIndexSet *insertedSections;
@property (copy, nonatomic) NSIndexSet *deletedSections;
@property (copy, nonatomic) NSIndexSet *updatedSections;
@property (copy, nonatomic) NSArray *insertedItemIndexPaths;
@property (copy, nonatomic) NSArray *deletedItemIndexPaths;
@property (copy, nonatomic) NSArray *updatedItemIndexPaths;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *updatedIndexes;

+ (id)changeDetailsWithPreviousCount:(long long)a0 finalCount:(long long)a1 isEqualBlock:(id /* block */)a2 isUpdatedBlock:(id /* block */)a3;

- (void)removeSectionMoveFromIndex:(long long)a0;
- (void)enumerateUpdatesUsingBlock:(id /* block */)a0;
- (void)enumerateSectionMovesUsingBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void)appendItemUpdateForPreviousIndexPath:(id)a0 finalIndexPath:(id)a1;
- (void)removeSectionUpdateForPreviousIndex:(long long)a0;
- (void)enumerateMovesUsingBlock:(id /* block */)a0;
- (void)enumerateItemMovesUsingBlock:(id /* block */)a0;
- (void)enumerateItemUpdatesUsingBlock:(id /* block */)a0;
- (id)description;
- (void)enumerateSectionMovesWithBlock:(id /* block */)a0;
- (void)removeItemUpdateForPreviousIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidForPreviousCount:(long long)a0 finalCount:(long long)a1 reason:(id *)a2;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (void)enumerateSectionUpdatesUsingBlock:(id /* block */)a0;
- (void)appendItemMoveFromIndexPath:(id)a0 toIndexPath:(id)a1 updated:(BOOL)a2;
- (void)applyUIKitWorkarounds;
- (void)appendSectionUpdateForPreviousIndex:(long long)a0 finalIndex:(long long)a1;
- (void)removeItemMoveFromIndexPath:(id)a0;
- (void)appendSectionMoveFromIndex:(long long)a0 toIndex:(long long)a1 updated:(BOOL)a2;
- (id)debugDescription;
- (void)enumerateItemMovesWithBlock:(id /* block */)a0;

@end

@class NSIndexSet, NSArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

@interface MPChangeDetails : NSObject {
    NSMutableDictionary *_sectionMoves;
    NSMutableIndexSet *_updatedSectionMoveFromIndexes;
    NSMutableDictionary *_itemMoves;
    NSMutableSet *_updatedItemMoveFromIndexPaths;
    BOOL _isFlatCollection;
    BOOL _isFinalized;
}

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

- (void)enumerateSectionMovesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerateItemMovesWithBlock:(id /* block */)a0;
- (void)appendItemMoveFromIndexPath:(id)a0 toIndexPath:(id)a1 updated:(BOOL)a2;
- (id)initWithBlock:(id /* block */)a0;
- (void)removeSectionMoveFromIndex:(long long)a0;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (id)description;
- (void)enumerateItemMovesUsingBlock:(id /* block */)a0;
- (void)removeItemMoveFromIndexPath:(id)a0;
- (void)enumerateSectionMovesWithBlock:(id /* block */)a0;
- (void)applyUIKitWorkarounds;
- (void)enumerateMovesUsingBlock:(id /* block */)a0;
- (id)debugDescription;
- (void)appendSectionMoveFromIndex:(long long)a0 toIndex:(long long)a1 updated:(BOOL)a2;

@end

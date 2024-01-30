@class NSArray, NSOrderedSet, NSIndexSet, _NSDiffableDataSourceSectionSnapshotState, NSMutableArray;

@interface NSDiffableDataSourceSectionSnapshot : NSObject <NSCopying> {
    _NSDiffableDataSourceSectionSnapshotState *_state;
    NSMutableArray *_expandedItemsUpdates;
    NSMutableArray *_collapsedItemsUpdates;
}

@property (readonly, nonatomic) _NSDiffableDataSourceSectionSnapshotState *_state;
@property (readonly, nonatomic) NSArray *_rootItems;
@property (readonly, nonatomic) NSOrderedSet *_itemsOrderedSet;
@property (readonly, nonatomic) NSOrderedSet *_visibleItemsOrderedSet;
@property (readonly, nonatomic) NSIndexSet *_visibleIndexes;
@property (readonly, nonatomic) NSArray *expandedItemsUpdates;
@property (readonly, nonatomic) NSArray *collapsedItemsUpdates;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *rootItems;
@property (readonly, nonatomic) NSArray *visibleItems;

- (id)visualDescription;
- (id)initWithState:(id)a0;
- (long long)indexOfItem:(id)a0;
- (void)replaceChildrenOfParentItem:(id)a0 withSnapshot:(id)a1;
- (void)insertItems:(id)a0 afterItem:(id)a1 insertionMode:(long long)a2;
- (id)snapshotter;
- (id)_indexesOfItems:(id)a0;
- (void)appendItems:(id)a0 intoParentItem:(id)a1;
- (id)_indexesOfItems:(id)a0 ignoringItemsNotFound:(BOOL)a1;
- (id)snapshotOfParentItem:(id)a0;
- (void)insertSnapshot:(id)a0 beforeItem:(id)a1;
- (id)snapshotOfParentItem:(id)a0 includingParentItem:(BOOL)a1;
- (id)insertSnapshot:(id)a0 afterItem:(id)a1;
- (void)_replaceItem:(id)a0 withItem:(id)a1;
- (BOOL)_itemHasChildren:(id)a0;
- (id)_itemBeforeItem:(id)a0;
- (id)_itemAfterItem:(id)a0;
- (id)childSnapshotOfParent:(id)a0 includingParent:(BOOL)a1;
- (long long)levelOfItem:(id)a0;
- (void)expandItems:(id)a0;
- (id)description;
- (id)expandedItems;
- (void)deleteItems:(id)a0 orphanDisposition:(long long)a1;
- (BOOL)isExpanded:(id)a0;
- (id)parentOfChild:(id)a0;
- (void)appendItems:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)insertItems:(id)a0 afterItem:(id)a1;
- (BOOL)isVisible:(id)a0;
- (id)_indexesOfChildrenForParent:(id)a0 recursive:(BOOL)a1;
- (id)parentOfChildItem:(id)a0;
- (id)childSnapshotOfParent:(id)a0;
- (id)init;
- (void)setChildrenWithSnapshot:(id)a0 forParent:(id)a1;
- (id)initWithSnapshot:(id)a0;
- (void)insertItems:(id)a0 beforeItem:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)childrenOfParent:(id)a0;
- (void)appendItems:(id)a0 intoParent:(id)a1;
- (id)childrenOfParent:(id)a0 recursive:(BOOL)a1;
- (void)deleteItems:(id)a0;
- (void)collapseItems:(id)a0;
- (long long)levelForItem:(id)a0;
- (void)deleteAllItems;
- (BOOL)containsItem:(id)a0;

@end

@class NSArray, NSIndexSet, NSMutableSet, SFCapsuleCollectionView, NSMutableArray;

@interface SFCapsuleCollectionViewUpdate : NSObject {
    NSMutableSet *_deletedItems;
    NSMutableSet *_insertedItems;
}

@property (readonly, weak, nonatomic) SFCapsuleCollectionView *collectionView;
@property (readonly, nonatomic) NSArray *itemsBeforeUpdate;
@property (readonly, nonatomic) NSIndexSet *indexesOfVisibleItemsBeforeUpdate;
@property (readonly, nonatomic) long long selectedItemIndexBeforeUpdate;
@property (readonly, nonatomic) long long indexAfterUpdateOfSelectedItemBeforeUpdate;
@property (readonly, nonatomic) NSMutableArray *itemsAfterUpdate;
@property (readonly, nonatomic) long long selectedItemIndexAfterUpdate;
@property (readonly, nonatomic) long long indexBeforeUpdateOfSelectedItemAfterUpdate;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) NSIndexSet *indexesOfInsertedItems;
@property (readonly, nonatomic) NSIndexSet *indexesOfDeletedItems;

- (id)initWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)_calculateIndexesIfNeeded;
- (void)setSelectedItemIndex:(long long)a0 animated:(BOOL)a1;
- (void)insertItemsAtIndexes:(id)a0 animated:(BOOL)a1;
- (void)deleteItemsAtIndexes:(id)a0 animated:(BOOL)a1;

@end

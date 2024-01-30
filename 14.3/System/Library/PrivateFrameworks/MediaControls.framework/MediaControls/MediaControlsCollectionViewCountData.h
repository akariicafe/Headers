@class NSIndexSet, NSMutableIndexSet;

@interface MediaControlsCollectionViewCountData : NSObject <NSCopying> {
    NSMutableIndexSet *_insertedIndexes;
    NSMutableIndexSet *_deletedIndexes;
    NSMutableIndexSet *_updatedIndexes;
}

@property (nonatomic) long long numberOfItems;
@property (nonatomic) BOOL hasPendingChanges;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *updatedIndexes;

- (void)reloadItemAtIndex:(long long)a0;
- (void)reloadItemsAtIndexes:(id)a0;
- (void)deleteItemsAtIndexes:(id)a0;
- (void)moveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)insertItemAtIndex:(long long)a0;
- (void)insertItemsAtIndexes:(id)a0;
- (void)deleteItemAtIndex:(long long)a0;
- (id)init;
- (id)initWithNumberOfItems:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateCountForNumberOfItems:(long long)a0;
- (void)applyChanges;

@end

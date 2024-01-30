@class NSArray, NSMutableArray, NSDictionary;

@interface SUItemList : NSObject <NSCopying> {
    NSMutableArray *_groups;
    NSDictionary *_hintText;
}

@property (readonly, nonatomic) long long numberOfItems;
@property (nonatomic) BOOL ignoresEmptySections;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;

- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)setItems:(id)a0;
- (void)removeItemAtIndexPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyItems;
- (void)setItemsFromPropertyList:(id)a0;
- (void)setHintText:(id)a0;
- (long long)sectionIndexForIndexTitle:(id)a0 atIndex:(long long)a1;
- (id)indexPathOfItemWithIdentifier:(unsigned long long)a0;
- (id)indexPathOfItem:(id)a0;
- (void)replaceItemAtIndexPath:(id)a0 withItems:(id)a1;
- (id)itemsForSectionAtIndex:(long long)a0;
- (id)sectionItemForSectionAtIndex:(long long)a0;
- (id)_groupAtExternalIndex:(long long)a0;
- (void)insertItems:(id)a0 atIndexPath:(id)a1;
- (void)_removeHiddenItemsFromArray:(id)a0;
- (id)hintTextForKey:(id)a0;

@end

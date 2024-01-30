@class NSMutableOrderedSet;

@interface _DSKDataSourceSection : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *_items;
@property (retain, nonatomic) id sectionItem;
@property (readonly, nonatomic) long long numberOfItems;

- (void).cxx_destruct;
- (void)appendItems:(id)a0;
- (id)itemAtIndex:(long long)a0;
- (void)deleteAllItems;
- (BOOL)containsItem:(id)a0;
- (void)deleteItems:(id)a0;
- (void)insertItems:(id)a0 afterItem:(id)a1;
- (void)insertItems:(id)a0 beforeItem:(id)a1;
- (id)initWithSectionItem:(id)a0;

@end

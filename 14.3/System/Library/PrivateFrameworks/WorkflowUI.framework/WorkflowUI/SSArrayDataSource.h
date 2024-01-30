@class NSString, NSMutableArray;

@interface SSArrayDataSource : SSBaseDataSource

@property (retain, nonatomic) id target;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) NSMutableArray *items;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(long long)a0;
- (id)allItems;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)moveItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)clearItems;
- (void)appendItems:(id)a0;
- (void)appendItem:(id)a0;
- (void)removeItems:(id)a0;
- (void)removeAllItems;
- (id)itemAtIndexPath:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)insertItems:(id)a0 atIndexes:(id)a1;
- (void)removeItemsAtIndexes:(id)a0;
- (void)registerKVO;
- (void)unregisterKVO;
- (void)updateItems:(id)a0;
- (void)replaceItemAtIndex:(unsigned long long)a0 withItem:(id)a1;
- (id)initWithTarget:(id)a0 keyPath:(id)a1;
- (void)replaceItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withItemsFromArray:(id)a1;
- (void)replaceItemsAtIndexes:(id)a0 withItemsFromArray:(id)a1;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexPathForItemWithId:(id)a0;

@end

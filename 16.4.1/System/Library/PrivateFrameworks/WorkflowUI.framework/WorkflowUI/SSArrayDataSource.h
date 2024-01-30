@class NSString, NSMutableArray;

@interface SSArrayDataSource : SSBaseDataSource

@property (retain, nonatomic) id target;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) NSMutableArray *items;

- (id)itemAtIndexPath:(id)a0;
- (id)allItems;
- (unsigned long long)numberOfItemsInSection:(long long)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeItems:(id)a0;
- (unsigned long long)numberOfSections;
- (void)removeAllItems;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithItems:(id)a0;
- (void)appendItem:(id)a0;
- (void)clearItems;
- (void).cxx_destruct;
- (void)appendItems:(id)a0;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (void)updateItems:(id)a0;
- (void)removeItemsAtIndexes:(id)a0;
- (void)moveItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)insertItems:(id)a0 atIndexes:(id)a1;
- (void)registerKVO;
- (void)unregisterKVO;
- (void)replaceItemAtIndex:(unsigned long long)a0 withItem:(id)a1;
- (id)indexPathForItemWithId:(id)a0;
- (id)initWithTarget:(id)a0 keyPath:(id)a1;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceItemsAtIndexes:(id)a0 withItemsFromArray:(id)a1;
- (void)replaceItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withItemsFromArray:(id)a1;

@end

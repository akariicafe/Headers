@interface SSExpandingDataSource : SSSectionedDataSource

@property (copy, nonatomic) id /* block */ collapsedSectionCountBlock;

- (void)performBatchUpdates:(id /* block */)a0;
- (unsigned long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (void)removeItemAtIndexPath:(id)a0;
- (void)insertItem:(id)a0 atIndexPath:(id)a1;
- (BOOL)isSectionExpandedAtIndex:(long long)a0;
- (BOOL)isItemVisibleAtIndexPath:(id)a0;
- (id)expandedSectionIndexes;
- (unsigned long long)numberOfCollapsedRowsInSection:(long long)a0;
- (void)toggleSectionAtIndex:(long long)a0;
- (void)setSection:(id)a0 expanded:(BOOL)a1;
- (void)setSectionAtIndex:(long long)a0 expanded:(BOOL)a1;
- (void)appendItems:(id)a0 toSection:(long long)a1;
- (void)insertItems:(id)a0 atIndexes:(id)a1 inSection:(long long)a2;
- (void)replaceItemAtIndexPath:(id)a0 withItem:(id)a1;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inSection:(long long)a1;
- (void)removeItemsAtIndexes:(id)a0 inSection:(long long)a1;

@end

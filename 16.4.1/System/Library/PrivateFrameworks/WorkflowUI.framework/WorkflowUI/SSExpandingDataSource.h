@interface SSExpandingDataSource : SSSectionedDataSource

@property (copy, nonatomic) id /* block */ collapsedSectionCountBlock;

- (unsigned long long)numberOfItemsInSection:(long long)a0;
- (void)removeItemAtIndexPath:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0;
- (void)insertItem:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)removeItemsAtIndexes:(id)a0 inSection:(long long)a1;
- (unsigned long long)numberOfCollapsedRowsInSection:(long long)a0;
- (void)appendItems:(id)a0 toSection:(long long)a1;
- (id)expandedSectionIndexes;
- (void)insertItems:(id)a0 atIndexes:(id)a1 inSection:(long long)a2;
- (BOOL)isItemVisibleAtIndexPath:(id)a0;
- (BOOL)isSectionExpandedAtIndex:(long long)a0;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inSection:(long long)a1;
- (void)replaceItemAtIndexPath:(id)a0 withItem:(id)a1;
- (void)setSection:(id)a0 expanded:(BOOL)a1;
- (void)setSectionAtIndex:(long long)a0 expanded:(BOOL)a1;
- (void)toggleSectionAtIndex:(long long)a0;

@end

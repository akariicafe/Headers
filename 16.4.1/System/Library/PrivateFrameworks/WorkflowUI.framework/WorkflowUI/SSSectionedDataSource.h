@class NSMutableArray;

@interface SSSectionedDataSource : SSBaseDataSource

@property (nonatomic) BOOL shouldRemoveEmptySections;
@property (readonly, nonatomic) NSMutableArray *sections;

- (id)itemAtIndexPath:(id)a0;
- (id)sectionAtIndex:(long long)a0;
- (unsigned long long)numberOfItemsInSection:(long long)a0;
- (void)moveSectionAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)removeItemAtIndexPath:(id)a0;
- (unsigned long long)numberOfSections;
- (id)titleForHeaderInSection:(long long)a0;
- (void)removeSectionAtIndex:(long long)a0;
- (id)initWithSections:(id)a0;
- (void)appendSection:(id)a0;
- (id)initWithSection:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithItems:(id)a0;
- (void)clearSections;
- (void)insertSection:(id)a0 atIndex:(long long)a1;
- (id)init;
- (void)insertItem:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)heightForFooterInSection:(long long)a0;
- (double)heightForHeaderInSection:(long long)a0;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)titleForFooterInSection:(long long)a0;
- (id)viewForFooterInSection:(long long)a0;
- (id)viewForHeaderInSection:(long long)a0;
- (unsigned long long)indexOfSectionWithIdentifier:(id)a0;
- (void)removeAllSections;
- (void)removeSectionWithIdentifier:(id)a0;
- (id)sectionWithIdentifier:(id)a0;
- (void)removeItemsAtIndexes:(id)a0 inSection:(long long)a1;
- (BOOL)adjustSectionAtIndex:(unsigned long long)a0 toNumberOfItems:(unsigned long long)a1;
- (void)appendItems:(id)a0 toSection:(long long)a1;
- (id)headerFooterViewWithClass:(Class)a0;
- (void)insertItems:(id)a0 atIndexes:(id)a1 inSection:(long long)a2;
- (void)insertSections:(id)a0 atIndexes:(id)a1;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inSection:(long long)a1;
- (void)removeSectionsAtIndexes:(id)a0;
- (void)removeSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceItemAtIndexPath:(id)a0 withItem:(id)a1;

@end

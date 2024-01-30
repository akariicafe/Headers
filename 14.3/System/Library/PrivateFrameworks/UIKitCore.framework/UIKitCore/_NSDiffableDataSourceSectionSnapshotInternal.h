@interface _NSDiffableDataSourceSectionSnapshotInternal : _NSDiffableDataSourceSectionSnapshot

- (void)appendItems:(id)a0;
- (void)expandItems:(id)a0;
- (id)items;
- (BOOL)containsItem:(id)a0;
- (BOOL)isExpanded:(id)a0;
- (id)parentOfChild:(id)a0;
- (void)deleteItems:(id)a0;
- (id)visibleItems;
- (void)insertItems:(id)a0 afterItem:(id)a1;
- (void)insertItems:(id)a0 beforeItem:(id)a1;
- (void)appendItems:(id)a0 intoParent:(id)a1;
- (id)childrenOfParent:(id)a0 recursive:(BOOL)a1;
- (id)childrenOfParent:(id)a0;
- (void)collapseItems:(id)a0;

@end

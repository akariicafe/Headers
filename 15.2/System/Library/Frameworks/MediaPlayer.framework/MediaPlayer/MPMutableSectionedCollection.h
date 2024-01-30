@interface MPMutableSectionedCollection : MPSectionedCollection

- (void)removeSectionAtIndex:(long long)a0;
- (void)moveItemFromIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)replaceObjectAtIndexPath:(id)a0 withObject:(id)a1;
- (void)appendItem:(id)a0;
- (void)_initializeAsEmptySectionedCollection;
- (void)replaceSectionsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (void)appendSection:(id)a0;
- (void)appendItems:(id)a0;
- (void)removeItemAtIndexPath:(id)a0;
- (void)insertSection:(id)a0 atIndex:(long long)a1;
- (void)moveSectionFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)replaceItemsUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertItem:(id)a0 atIndexPath:(id)a1;
- (void)replaceSectionAtIndex:(long long)a0 withObject:(id)a1;

@end

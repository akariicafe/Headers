@interface SKUIMenuBarTemplateShelfPageSectionConfiguration : SKUIShelfPageSectionConfiguration {
    id _fixedElementsCollectionViewCell;
    unsigned long long _numberOfIterations;
    long long _focusedIndex;
}

- (unsigned long long)numberOfIterations;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (id)initWithNumberOfIterations:(unsigned long long)a0;
- (id)cellForShelfViewElement:(id)a0 indexPath:(id)a1;
- (struct CGSize { double x0; double x1; })cellSizeForShelfViewElement:(id)a0 indexPath:(id)a1 numberOfShelfItems:(long long)a2;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (long long)numberOfSectionCells;
- (void)registerReusableClassesForCollectionView:(id)a0;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)a0 withShelfItemViewElements:(id)a1 requestCellLayouts:(BOOL)a2 numberOfShelfItems:(long long)a3;
- (id)effectiveViewElementForShelfItemViewElement:(id)a0;
- (id)_focusedViewElement;

@end

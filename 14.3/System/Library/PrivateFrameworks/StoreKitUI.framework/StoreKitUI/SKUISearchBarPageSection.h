@class SKUISearchBarController;

@interface SKUISearchBarPageSection : SKUIStorePageSection {
    SKUISearchBarController *_searchBarController;
}

- (long long)numberOfCells;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (id)backgroundColorForIndexPath:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (id)_searchBarController;

@end

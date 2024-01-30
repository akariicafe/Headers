@class NSString, SKUIViewElementLayoutContext, SKUIInfoListViewElement, NSMutableArray;

@interface SKUIVerticalInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _columnHeight;
    NSMutableArray *_columns;
    double _columnWidth;
    SKUIInfoListViewElement *_infoList;
    long long _numberOfColumns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (id)backgroundColorForIndexPath:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (void)reloadCellWithIndexPath:(id)a0 reason:(long long)a1;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_requestCellLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForIndexPath:(id)a0;
- (id)_reloadColumnDataIfNecessary;
- (void)_enumerateVisibleIndexPathsUsingBlock:(id /* block */)a0;
- (long long)_numberOfColumnsForWidth:(double)a0;

@end

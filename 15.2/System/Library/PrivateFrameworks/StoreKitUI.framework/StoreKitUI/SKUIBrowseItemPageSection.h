@class SKUIViewElementLayoutContext, SKUIBrowseItemComponent;

@interface SKUIBrowseItemPageSection : SKUIStorePageSection {
    SKUIViewElementLayoutContext *_layoutContext;
}

@property (readonly, nonatomic) SKUIBrowseItemComponent *pageComponent;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (id)_imageForImageViewElement:(id)a0 styleColor:(id)a1;

@end

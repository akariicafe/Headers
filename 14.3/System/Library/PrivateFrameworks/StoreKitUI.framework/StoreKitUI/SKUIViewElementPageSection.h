@class NSString, SKUIViewElementLayoutContext, SKUICollectionViewCell;
@protocol SKUIViewElementView;

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    Class _cellClass;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;
    BOOL _rendersWithPerspective;
    NSString *_reuseIdentifier;
    double _sectionBottomInset;
}

@property (readonly, nonatomic) double defaultVerticalInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfCells;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)a0;
- (id)backgroundColorForIndexPath:(id)a0;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (void)prefetchResourcesWithReason:(long long)a0;
- (BOOL)updateCellWithIndexPath:(id)a0 itemState:(id)a1 animated:(BOOL)a2;
- (void)reloadCellWithIndexPath:(id)a0 reason:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pinningContentInsetForItemAtIndexPath:(id)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (void)expandEditorialForLabelElement:(id)a0 indexPath:(id)a1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)a0;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)contentInsetAdjustmentForCollectionView:(id)a0;
- (void)getModalSourceViewForViewElement:(id)a0 completionBlock:(id /* block */)a1;
- (long long)defaultItemPinningStyle;
- (void)_requestCellLayout;
- (BOOL)_showsImageReflection;
- (BOOL)_stretchesToFitCollectionViewBounds;

@end

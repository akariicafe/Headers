@class SKUIShelfPageSectionConfiguration, NSString, SKUIViewElementLayoutContext, SKUIShelfPageComponent, SKUIShelfViewElement, SKUIViewElementSlideshowController, NSArray;
@protocol SKUIScrollViewDelegateObserver;

@interface SKUIShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, SKUIViewElementSlideshowDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    long long _lastNeedsMoreCount;
    SKUIShelfViewElement *_shelfViewElement;
    SKUIViewElementSlideshowController *_slideshowController;
    NSArray *_viewElements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIScrollViewDelegateObserver> scrollViewDelegateObserver;
@property (readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration;
@property (readonly, nonatomic) SKUIShelfPageComponent *pageComponent;

- (void)_setContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)willPresentPreviewViewController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfCells;
- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)a0;
- (void)_performDefaultSelectActionForEffectiveViewElement:(id)a0;
- (void)_reloadViewElementProperties;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (long long)applyUpdateType:(long long)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionView:(id)a0 didConfirmButtonElement:(id)a1 withClickInfo:(id)a2 forItemAtIndexPath:(id)a3;
- (void)collectionView:(id)a0 layout:(id)a1 willApplyLayoutAttributes:(id)a2;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)deselectItemsAnimated:(BOOL)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (void)getModalSourceViewForViewElement:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithPageComponent:(id)a0;
- (id)initWithPageComponent:(id)a0 configuration:(id)a1;
- (void)invalidateCachedLayoutInformation;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)setTopSection:(BOOL)a0;
- (id)shelfPageSectionConfiguration:(id)a0 viewElementAtIndex:(long long)a1;
- (BOOL)updateCellWithIndexPath:(id)a0 itemState:(id)a1 animated:(BOOL)a2;
- (void)viewElementSlideshowWillDismiss:(id)a0;
- (void)willAppearInContext:(id)a0;

@end

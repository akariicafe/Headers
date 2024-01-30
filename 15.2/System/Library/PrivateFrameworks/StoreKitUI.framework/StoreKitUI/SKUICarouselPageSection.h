@class NSString, NSArray, SKUIViewElementLayoutContext, SKUIMissingItemLoader, SKUIProgressIndicatorViewElement, NSObject, UICollectionView, SKUICarouselPageComponent, NSIndexPath;
@protocol OS_dispatch_source;

@interface SKUICarouselPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_carouselCollectionView;
    long long _cellCount;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    struct CGSize { double width; double height; } _itemSize;
    double _itemSpacing;
    SKUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    BOOL _needsHeightCalculation;
    BOOL _needsReload;
    double _itemWidth;
    long long _progressIndicatorCellIndex;
    SKUIProgressIndicatorViewElement *_progressIndicatorElement;
    NSIndexPath *_reloadIndexPath;
}

@property (readonly, nonatomic) SKUICarouselPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)dealloc;
- (long long)_currentPageIndex;
- (id)_carouselCollectionView;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)a0;
- (id)backgroundColorForIndexPath:(id)a0;
- (void)invalidateCachedLayoutInformation;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)defaultItemPinningStyle;
- (void)collectionView:(id)a0 carouselLayout:(id)a1 willApplyLayoutAttributes:(id)a2;
- (BOOL)_indexPathIsProgressIndicator:(id)a0;
- (void)_scrollToItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (double)_actualContentWidth;
- (void)_startCycleTimerIfNecessary;
- (Class)_cellClassForViewElement:(id)a0;
- (void)_cancelCycleTimer;
- (void)_loadMissingItemsFromIndex:(long long)a0 withReason:(long long)a1;
- (void)_reloadLegacySizing;
- (id)_dequeueCellForViewElement:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (void)_addImpressionForIndex:(long long)a0 toSession:(id)a1;
- (BOOL)_isItemEnabledAtIndexPath:(id)a0;
- (Class)_cellClassForLockup:(id)a0;
- (id)_dequeueCellForLockup:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (id)_missingItemLoader;
- (struct CGSize { double x0; double x1; })_legacyItemSize;
- (double)_legacyItemSpacing;
- (void)_fireCycleTimer;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;

@end

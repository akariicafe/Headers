@class SKUITracklistPageComponent, NSString, SKUIViewElementLayoutContext, SKUITracklistColumnData;
@protocol SKUIEntityProviding;

@interface SKUITracklistPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUITracklistColumnData *_columnData;
    id<SKUIEntityProviding> _entityProvider;
    long long _lastNeedsMoreCount;
}

@property (readonly, nonatomic) SKUITracklistPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfCells;
- (void).cxx_destruct;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (long long)applyUpdateType:(long long)a0;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)relevantEntityProviders;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (void)prefetchResourcesWithReason:(long long)a0;
- (BOOL)requestLayoutWithReloadReason:(long long)a0;
- (BOOL)updateCellWithIndexPath:(id)a0 itemState:(id)a1 animated:(BOOL)a2;
- (void)reloadCellWithIndexPath:(id)a0 reason:(long long)a1;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { double x0; double x1; })a0 visibleRange:(struct SKUIIndexPathRange { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)firstAppearanceIndexPath;
- (void)getModalSourceViewForViewElement:(id)a0 completionBlock:(id /* block */)a1;
- (id)_columnData;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* block */)a0;
- (void)_reloadEntityProvider;
- (id)_viewElementForIndex:(long long)a0;
- (void)_requestCellLayoutWithColumnData:(id)a0;
- (double)_widthForButtonElements:(id)a0;
- (id)_representativeStringForViewElement:(id)a0;
- (BOOL)_isDynamicTracklist;

@end

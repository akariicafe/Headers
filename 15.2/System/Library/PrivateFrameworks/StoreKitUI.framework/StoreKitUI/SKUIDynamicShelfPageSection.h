@class SKUIShelfPageSectionConfiguration, NSString, SKUIViewElementLayoutContext, SKUIShelfPageComponent, SKUIDynamicPageSectionIndexMapper, SKUIShelfViewElement, SKUIViewElementTextLayoutCache;
@protocol SKUIDynamicShelfViewElement, SKUIEntityProviding, SKUIScrollViewDelegateObserver;

@interface SKUIDynamicShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    SKUIShelfViewElement<SKUIDynamicShelfViewElement> *_dynamicShelfViewElement;
    id<SKUIEntityProviding> _entityProvider;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIScrollViewDelegateObserver> scrollViewDelegateObserver;
@property (readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration;
@property (readonly, nonatomic) SKUIShelfPageComponent *pageComponent;

- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)setSectionIndex:(long long)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setContext:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)dealloc;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPageComponent:(id)a0 configuration:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)a0;
- (id)backgroundColorForIndexPath:(id)a0;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (void)deselectItemsAnimated:(BOOL)a0;
- (void)invalidateCachedLayoutInformation;
- (id)relevantEntityProviders;
- (void)setTopSection:(BOOL)a0;
- (void)willAppearInContext:(id)a0;
- (void)willHideInContext:(id)a0;
- (id)_viewElementForEntityAtGlobalIndex:(long long)a0;
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)a0;
- (id)shelfPageSectionConfiguration:(id)a0 viewElementAtIndex:(long long)a1;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)entityProvider:(id)a0 didInvalidateWithContext:(id)a1;
- (void)collectionView:(id)a0 didConfirmButtonElement:(id)a1 withClickInfo:(id)a2 forItemAtIndexPath:(id)a3;
- (void)collectionView:(id)a0 layout:(id)a1 willApplyLayoutAttributes:(id)a2;

@end

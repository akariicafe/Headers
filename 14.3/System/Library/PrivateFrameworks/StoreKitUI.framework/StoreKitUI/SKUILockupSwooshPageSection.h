@class SKUIProductPageOverlayController, NSString, SKUISwooshPageComponent, SKUIMissingItemLoader, SKUILockupSwooshViewController, SKUILockupSwooshArtworkLoader;

@interface SKUILockupSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate> {
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    long long _overlaySourceIndex;
    SKUILockupSwooshViewController *_swooshViewController;
}

@property (readonly, nonatomic) SKUISwooshPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfCells;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setImage:(id)a0 forRequest:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (id)productPageOverlay:(id)a0 flipSourceViewToDismissItem:(id)a1;
- (id)productPageOverlay:(id)a0 flipSourceViewToPresentItem:(id)a1;
- (void)productPageOverlayDidDismiss:(id)a0;
- (void)_loadMissingItemsFromIndex:(long long)a0 withReason:(long long)a1;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (id)_popSourceViewForOverlayController:(id)a0;
- (id)_swooshViewController;
- (id)_artworkLoader;
- (id)swoosh:(id)a0 imageForCellAtIndex:(long long)a1;
- (id)swoosh:(id)a0 videoThumbnailForCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 didSelectCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 willDisplayCellAtIndex:(long long)a1;
- (void)swooshDidSelectSeeAll:(id)a0;
- (void)_addImpressionForItemIndex:(long long)a0 toSession:(id)a1;
- (void)_showProductPageForItem:(id)a0 index:(long long)a1 animated:(BOOL)a2;

@end

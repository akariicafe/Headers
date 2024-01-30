@class NSString, SKUISwooshPageComponent, SKUIMissingItemLoader, SKUIBrickSwooshArtworkLoader, SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {
    SKUIBrickSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIBrickSwooshViewController *_swooshViewController;
}

@property (readonly, nonatomic) SKUISwooshPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfCells;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)_loadMissingItemsFromIndex:(long long)a0 withReason:(long long)a1;
- (void)_addImpressionForIndex:(long long)a0 toSession:(id)a1;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (id)_swooshViewController;
- (id)_artworkLoader;
- (id)swoosh:(id)a0 imageForCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 didSelectCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 willDisplayCellAtIndex:(long long)a1;

@end

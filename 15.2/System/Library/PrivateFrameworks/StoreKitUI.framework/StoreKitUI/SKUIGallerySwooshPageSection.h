@class NSString, NSMapTable, SKUISwooshPageComponent, SKUIGallerySwooshViewController;

@interface SKUIGallerySwooshPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate> {
    NSMapTable *_componentArtworkRequests;
    SKUIGallerySwooshViewController *_swooshViewController;
}

@property (readonly, nonatomic) SKUISwooshPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)dealloc;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)_addImpressionForIndex:(long long)a0 toSession:(id)a1;
- (id)_swooshViewController;
- (id)swoosh:(id)a0 imageForCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 didSelectCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 willDisplayCellAtIndex:(long long)a1;
- (id)_newArtworkRequestWithArtwork:(id)a0;
- (void)swoosh:(id)a0 didChangePlaybackState:(long long)a1 forItemAtIndex:(long long)a2;

@end

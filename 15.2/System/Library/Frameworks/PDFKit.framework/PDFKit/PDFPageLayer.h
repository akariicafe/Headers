@class NSString, PDFPageLayerPrivate;

@interface PDFPageLayer : CALayer <PDFPageLayerInterface> {
    PDFPageLayerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)page;
- (BOOL)isVisible;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearTiles;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)displayBox;
- (void)setEnableTileUpdates:(BOOL)a0;
- (id)renderingProperties;
- (void)setNeedsTilesUpdate;
- (id)initWithPage:(id)a0 geometryInterface:(id)a1 andRenderingProperties:(id)a2;
- (void)tileDrawingComplete:(id)a0;
- (id)geometryInterface;
- (unsigned long long)visibilityDelegateIndex;
- (void)_setEnablePageShadows:(BOOL)a0;
- (void)_renderingPropertyUpdate:(id)a0;
- (void)_pageDidRotate:(id)a0;
- (void)_pageChangedPageRef:(id)a0;
- (void)_forceTileUpdate;
- (void)_releaseTiles;
- (void)_releasePageLayerEffects;
- (void)_updateTiles;
- (void)_tileUpdateComplete;
- (void)updatePageLayerEffectForID:(id)a0;
- (id)pageLayerEffectForID:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layerEffectTransform;
- (void)_updateLayerEffect:(id)a0 withPageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)_pageLayerEffects;
- (BOOL)_isTile:(id)a0 occludedByTiles:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layerTileToRootViewBounds:(id)a0;
- (id)_subtractRectB:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRectA:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updatePageLayerEffects;
- (void)forceTileUpdate;
- (BOOL)_hasTileWithFrameInLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addPageLayerEffect:(id)a0;
- (void)removePageLayerEffectForID:(id)a0;
- (void)scalePageLayerEffects:(double)a0;
- (BOOL)enablesTileUpdates;
- (void)saveOriginalTileLayout;
- (void)restoreOriginalTileLayout;
- (void)applyTileLayoutScale:(double)a0;
- (void)willStartLiveResize;
- (void)willEndStartLiveResize;
- (void)setVisibilityDelegateIndex:(unsigned long long)a0;
- (void)_hideTileLayer:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageLayerVisibleRect;
- (void)_printRectsArray:(id)a0;

@end

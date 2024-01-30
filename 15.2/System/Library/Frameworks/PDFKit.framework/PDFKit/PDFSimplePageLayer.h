@class NSString, PDFRenderingProperties, NSMutableDictionary, CALayer, PDFPage, NSObject;
@protocol PDFPageLayerGeometryInterface;

@interface PDFSimplePageLayer : CALayer <CALayerDelegate, PDFPageLayerInterface> {
    PDFPage *_page;
    NSObject<PDFPageLayerGeometryInterface> *_geometryInterface;
    PDFRenderingProperties *_renderingProperties;
    NSMutableDictionary *_pageLayerEffects;
    CALayer *_effectsLayer;
    unsigned long long _visibilityDelegateIndex;
    double _contentsScale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)page;
- (BOOL)isVisible;
- (void)_updateGeometry;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)clearTiles;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)displayBox;
- (void)setEnableTileUpdates:(BOOL)a0;
- (id)renderingProperties;
- (void)setNeedsTilesUpdate;
- (id)initWithPage:(id)a0 geometryInterface:(id)a1 andRenderingProperties:(id)a2;
- (id)geometryInterface;
- (unsigned long long)visibilityDelegateIndex;
- (void)_pageDidRotate:(id)a0;
- (void)_pageChangedPageRef:(id)a0;
- (void)updatePageLayerEffectForID:(id)a0;
- (id)pageLayerEffectForID:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layerEffectTransform;
- (void)_updateLayerEffect:(id)a0 withPageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)_pageLayerEffects;
- (void)updatePageLayerEffects;
- (void)forceTileUpdate;
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

@end

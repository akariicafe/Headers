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

- (void)clearTiles;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)page;
- (BOOL)isVisible;
- (void)_updateGeometry;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_pageDidRotate:(id)a0;
- (void)forceTileUpdate;
- (void)_pageChangedPageRef:(id)a0;
- (id)_pageLayerEffects;
- (void)_updateLayerEffect:(id)a0 withPageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)addPageLayerEffect:(id)a0;
- (void)applyTileLayoutScale:(double)a0;
- (long long)displayBox;
- (BOOL)enablesTileUpdates;
- (id)geometryInterface;
- (id)initWithPage:(id)a0 geometryInterface:(id)a1 andRenderingProperties:(id)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layerEffectTransform;
- (id)pageLayerEffectForID:(id)a0;
- (void)removePageLayerEffectForID:(id)a0;
- (id)renderingProperties;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)scalePageLayerEffects:(double)a0;
- (void)setEnableTileUpdates:(BOOL)a0;
- (void)setNeedsTilesUpdate;
- (void)setVisibilityDelegateIndex:(unsigned long long)a0;
- (void)updatePageLayerEffectForID:(id)a0;
- (void)updatePageLayerEffects;
- (unsigned long long)visibilityDelegateIndex;
- (void)willEndStartLiveResize;
- (void)willStartLiveResize;

@end

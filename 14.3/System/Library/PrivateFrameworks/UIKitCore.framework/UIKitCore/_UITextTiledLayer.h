@class NSArray, NSString, UIBezierPath, CALayer, NSMutableArray;
@protocol _UITextTiledLayerDelegate;

@interface _UITextTiledLayer : CALayer <CALayerDelegate> {
    NSMutableArray *_visibleTiles;
    struct CGSize { double width; double height; } _tileSize;
    CALayer *_viewportLayer;
    double _viewportLayerExtraWidthFactor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleViewportBounds;
    UIBezierPath *_clip;
    struct { unsigned char disableTiling : 1; unsigned char ditchAllTiles : 1; unsigned char suspendLayout : 4; unsigned char delegateSupportsMaskedRects : 1; unsigned char delegateImplementsWillDraw : 1; } _tcTiledLayerFlags;
}

@property (weak) id<_UITextTiledLayerDelegate> delegate;
@property (nonatomic) BOOL usesTiledLayers;
@property (nonatomic) double maxTileHeight;
@property (nonatomic) double maxPrefetchedTiles;
@property (readonly, copy, nonatomic) NSArray *tiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentsMultiplyColor:(struct CGColor { } *)a0;
- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (void)resumeTiling;
- (void)_updateTilingViewportWindow:(id)a0;
- (void)setContentsFormat:(id)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layerWillDraw:(id)a0;
- (void)setRasterizationScale:(double)a0;
- (void)suspendTiling;
- (void)_didSetDelegate;
- (id)_preparedTileForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mask:(id)a1 opacity:(double)a2 deferred:(BOOL)a3;
- (id)_prepareNonTiledGhostLayersForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setDelegate:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)_prepareTilesForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setUnsafeUnretainedDelegate:(id)a0;
- (void)_drawInContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1 clip:(struct CGPath { } *)a2;

@end

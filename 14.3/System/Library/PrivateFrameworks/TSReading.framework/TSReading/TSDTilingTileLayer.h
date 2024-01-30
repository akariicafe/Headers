@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer

@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL needsTileDisplay;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; } location;

- (void)display;
- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)updateFrameWithTileSize:(struct CGSize { double x0; double x1; })a0 tilesWide:(unsigned long long)a1 tilesHigh:(unsigned long long)a2 geometryProvider:(id)a3;
- (void)setNeedsDisplayInRectIgnoringBackground:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tileContentsLayer;

@end

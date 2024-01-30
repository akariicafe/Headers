@protocol CATiledLayerDelegate, CALayerDelegate;

@interface CATiledLayer : CALayer

@property struct CGColor { } *fillColor;
@property double maximumTileScale;
@property (getter=isDrawingEnabled) BOOL drawingEnabled;
@property (weak) id<CATiledLayerDelegate, CALayerDelegate> delegate;
@property unsigned long long levelsOfDetail;
@property unsigned long long levelsOfDetailBias;
@property struct CGSize { double x0; double x1; } tileSize;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;
+ (double)fadeDuration;
+ (unsigned int)prefetchedTiles;
+ (BOOL)shouldDrawOnMainThread;

- (void)_display;
- (void)dealloc;
- (void)_colorSpaceDidChange;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeValueForKey:(id)a0;
- (void)setContents:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (BOOL)_canDisplayConcurrently;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1 options:(id)a2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1;
- (void)displayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1 options:(id)a2;
- (void)invalidateContents;
- (void)setUnsafeUnretainedDelegate:(id)a0;
- (void)_dealloc;

@end

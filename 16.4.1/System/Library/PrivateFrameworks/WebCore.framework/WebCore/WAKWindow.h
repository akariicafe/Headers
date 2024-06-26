@class CALayer, WAKView;

@interface WAKWindow : WAKResponder {
    CALayer *_hostLayer;
    void *_tileCache;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frozenVisibleRect;
    CALayer *_rootLayer;
    struct CGSize { double width; double height; } _screenSize;
    struct CGSize { double width; double height; } _availableScreenSize;
    double _screenScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    WAKView *_contentView;
    WAKView *_responderView;
    WAKView *_nextResponder;
    BOOL _visible;
    BOOL _isInSnapshottingPaint;
    BOOL _entireWindowVisibleForTesting;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } _exposedScrollViewRectLock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _exposedScrollViewRect;
}

@property (nonatomic) BOOL useOrientationDependentFontAntialiasing;
@property (nonatomic) struct CGImage { } *contentReplacementImage;

+ (id)currentEvent;
+ (void)setOrientationProvider:(id)a0;
+ (BOOL)hasLandscapeOrientation;

- (struct CGSize { double x0; double x1; })screenSize;
- (double)screenScale;
- (id)rootLayer;
- (void)setScreenScale:(double)a0;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sendEvent:(id)a0;
- (id).cxx_construct;
- (BOOL)isVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willRotate;
- (void)didRotate;
- (void)setVisible:(BOOL)a0;
- (id)recursiveDescription;
- (void)setNeedsDisplay;
- (id)firstResponder;
- (id)initWithLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)setRootLayer:(id)a0;
- (void)dealloc;
- (void)close;
- (BOOL)resignFirstResponder;
- (id)contentView;
- (void *)tileCache;
- (id)description;
- (void)setContentView:(id)a0;
- (void)setScreenSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTilesOpaque:(BOOL)a0;
- (void)displayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dumpTiles;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })exposedScrollViewRect;
- (BOOL)isKeyWindow;
- (BOOL)keepsZoomedOutTiles;
- (void)layoutTiles;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)makeFirstResponder:(id)a0;
- (void)makeKeyWindow;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (void)sendEventSynchronously:(id)a0;
- (void)sendMouseMoveEvent:(id)a0 contentChange:(int *)a1;
- (void)setAvailableScreenSize:(struct CGSize { double x0; double x1; })a0;
- (void)setCurrentTileScale:(float)a0;
- (void)setExposedScrollViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setKeepsZoomedOutTiles:(BOOL)a0;
- (void)setTilingDirection:(int)a0;
- (void)setTilingMode:(int)a0;
- (void)setZoomedOutTileScale:(float)a0;
- (BOOL)tilesOpaque;
- (int)tilingDirection;
- (id)_newFirstResponderAfterResigning;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleRectRespectingMasksToBounds:(BOOL)a0;
- (struct CGSize { double x0; double x1; })availableScreenSize;
- (struct CGPoint { double x0; double x1; })convertBaseToScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertScreenToBase:(struct CGPoint { double x0; double x1; })a0;
- (float)currentTileScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendedVisibleRect;
- (id)hostLayer;
- (BOOL)isInSnapshottingPaint;
- (unsigned long long)keyViewSelectionDirection;
- (void)setEntireWindowVisibleForTesting:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)setIsInSnapshottingPaint:(BOOL)a0;
- (int)tilingMode;
- (float)zoomedOutTileScale;

@end

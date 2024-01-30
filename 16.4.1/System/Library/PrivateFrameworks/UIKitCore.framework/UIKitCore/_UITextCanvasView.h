@class NSString, NSArray, NSMutableSet, _UITextTiledLayer, _UISceneDisplayLink;
@protocol _UITextKit1CanvasContext;

@interface _UITextCanvasView : UIView <_UITextTiledLayerDelegate, _UITextKit1Canvas> {
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSArray *_maskedRects;
    _UISceneDisplayLink *_sceneDisplayLink;
}

@property (readonly, nonatomic) _UITextTiledLayer *layer;
@property (nonatomic, getter=isTilingEnabled) BOOL tilingEnabled;
@property (nonatomic) double maxTileHeight;
@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UITextKit1CanvasContext> context;

+ (Class)layerClass;

- (void)setNeedsLayout;
- (void)resumeTiling;
- (void)updateContentSizeIfNeeded;
- (void)removeInvisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addInvisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)didMoveToWindow;
- (void)viewportBoundsDidChange;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)suspendTiling;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeAllGhostedRanges;
- (void).cxx_destruct;
- (BOOL)_enableAutoConstraining;
- (id)_textTiledLayer:(id)a0 maskedRectsInVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateTilingViewportBookkeeping;
- (void)_updateTilingViewportLayer;
- (void)_windowDidMoveToScreen;

@end

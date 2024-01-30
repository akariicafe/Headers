@class NSString, NSArray, NSMutableSet, _UITextTiledLayer, _UISceneDisplayLink;
@protocol _UITextCanvasViewContext;

@interface _UITextCanvasView : UIView <_UITextTiledLayerDelegate, _UIDrawsTextInRect> {
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSArray *_maskedRects;
    _UISceneDisplayLink *_sceneDisplayLink;
}

@property (readonly, nonatomic) _UITextTiledLayer *layer;
@property (weak, nonatomic) id<_UITextCanvasViewContext> context;
@property (nonatomic, getter=isTilingEnabled) BOOL tilingEnabled;
@property (nonatomic) double maxTileHeight;
@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)setNeedsLayout;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (BOOL)_enableAutoConstraining;
- (void)resumeTiling;
- (void)removeAllGhostedRanges;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_windowDidMoveToScreen;
- (void)_updateTilingViewportBookkeeping;
- (void)_updateTilingViewportLayer;
- (id)_textTiledLayer:(id)a0 maskedRectsInVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addInvisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeInvisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)didMoveToWindow;
- (void)suspendTiling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

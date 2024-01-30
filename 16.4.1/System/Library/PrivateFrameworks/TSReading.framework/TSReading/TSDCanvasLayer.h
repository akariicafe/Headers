@class TSDInteractiveCanvasController, NSString, TSDCanvasView;

@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer <TSKKeyboardObserver> {
    unsigned long long mViewScaleAnimationCount;
    unsigned long long mLayoutDisabledDepth;
}

@property (nonatomic) BOOL createdAsCopy;
@property (nonatomic) BOOL torndown;
@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (nonatomic) struct CGSize { double width; double height; } unscaledSize;
@property (nonatomic) double viewScale;
@property (nonatomic) BOOL allowsPinchZoom;
@property (nonatomic) double minimumPinchViewScale;
@property (nonatomic) double maximumPinchViewScale;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } unscaledContentCenter;
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (nonatomic) BOOL showsScaleFeedback;
@property (nonatomic, getter=isInfinite) BOOL infinite;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) BOOL centeredInScrollView;
@property (nonatomic) BOOL horizontallyCenteredInScrollView;
@property (nonatomic) BOOL verticallyCenteredInScrollView;
@property (nonatomic) BOOL avoidKeyboardWhenVerticallyCenteredInScrollView;
@property (readonly, nonatomic, getter=isLayoutDisabled) BOOL disableLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsLayout;
- (void)keyboardDidChangeFrame:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)dealloc;
- (void)teardown;
- (id)init;
- (void)layoutSublayers;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)p_commonInit;
- (void)_adjustContentInsetsForKeyboard;
- (struct CGPoint { double x0; double x1; })p_contentOffsetForUnscaledContentCenter:(struct CGPoint { double x0; double x1; })a0 viewScale:(double)a1 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)p_setViewScale:(double)a0;
- (void)adjustContentInsets;
- (void)animateToViewScale:(double)a0 contentCenter:(struct CGPoint { double x0; double x1; })a1 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 duration:(double)a3 animation:(id)a4 completionBlock:(id /* block */)a5;
- (void)animateToViewScale:(double)a0 contentCenter:(struct CGPoint { double x0; double x1; })a1 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 duration:(double)a3 completionBlock:(id /* block */)a4;
- (BOOL)centeredInScrollView;
- (struct CGPoint { double x0; double x1; })contentOffsetForUnscaledContentCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)fixFrameAndScrollView;
- (void)layoutIfNeededIgnoringDisabledLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_boundsRect;
- (void)p_fixFrameAndScrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_fixedBoundsForScrollViewSize:(struct CGSize { double x0; double x1; })a0 viewScale:(double)a1 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)p_reenableDrawingAfterResumingFromBackground;
- (void)p_scrollViewScrollerStyleDidChange:(id)a0;
- (void)p_setEnclosingScrollViewZoomParameters;
- (void)p_setViewScale:(double)a0 preservingScrollOffset:(BOOL)a1;
- (void)popLayoutDisabled;
- (void)pushLayoutDisabled;
- (void)setCenteredInScrollView:(BOOL)a0;
- (void)setNeedsDisplayForDirtyTiles:(id)a0;
- (void)setNeedsLayoutForTilingLayers;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)setUnscaledSizeOnLayer:(struct CGSize { double x0; double x1; })a0;
- (void)setViewScale:(double)a0 andScrollViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 maintainPosition:(BOOL)a2 animated:(BOOL)a3;
- (void)teardownWithoutClearingLayerDelegates;

@end

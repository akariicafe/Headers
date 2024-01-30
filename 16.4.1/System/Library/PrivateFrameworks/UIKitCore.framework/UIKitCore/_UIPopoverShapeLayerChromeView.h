@class UIVisualEffectView, _UIPopoverShapeLayerMaskView;

@interface _UIPopoverShapeLayerChromeView : _UIPopoverStandardChromeView {
    UIVisualEffectView *_blurView;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    BOOL _shapeLayerPathNeedsUpdate;
    _UIPopoverShapeLayerMaskView *_shapeLayerMaskView;
}

+ (double)cornerRadius;
+ (double)arrowHeight;
+ (double)arrowBase;

- (void)_addArrowCurveToPath:(id)a0 direction:(unsigned long long)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)_updateBackgroundStyle;
- (void)_generateBottomArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (void)setArrowOffset:(double)a0;
- (void)_generateRightArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (void)setBackgroundStyle:(long long)a0;
- (long long)backgroundStyle;
- (double)minNonPinnedOffset;
- (void)_updateShapeLayerPath;
- (void)_removeEffectView;
- (void)didMoveToWindow;
- (void)_configureEffectView;
- (id)_shadowPath;
- (double)maxNonPinnedOffset;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_shadowRadius;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_generateLeftArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)layoutSubviews;
- (id)backgroundEffect;
- (long long)_resolvedBackgroundStyle;
- (void)_updateShapeLayerPathIfNeeded;
- (void)_generateTopArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 leadingEdge:(BOOL)a3 isVertical:(BOOL)a4;
- (void)_loadNecessaryViews;
- (void).cxx_destruct;
- (void)setArrowDirection:(unsigned long long)a0;
- (double)_shadowOpacity;

@end

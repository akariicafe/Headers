@class UIVisualEffectView, UIView;

@interface _UIPopoverLegacyChromeView : _UIPopoverStandardChromeView {
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    BOOL _wasPinned;
}

@property (readonly, nonatomic) UIView *arrowView;
@property (readonly, nonatomic) UIView *leftCapView;
@property (readonly, nonatomic) UIView *rightCapView;
@property (readonly, nonatomic) BOOL hasComponentViews;

+ (double)arrowBase;
+ (double)arrowHeight;

- (void)setBackgroundStyle:(long long)a0;
- (long long)backgroundStyle;
- (void)layoutSubviews;
- (id)backgroundEffect;
- (BOOL)isPinned;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)_shadowPath;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (double)_shadowOpacity;
- (double)_shadowRadius;
- (BOOL)useShortMode;
- (void)_resetComponentViews;
- (void)_layoutArrowViewsUpOrDown;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (double)arrowOffset;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_configureEffectView;
- (void)_updateBackgroundStyle;
- (long long)_resolvedBackgroundStyle;
- (void)_removeEffectView;
- (void)_loadNecessaryViews;
- (double)minNonPinnedOffset;
- (double)maxNonPinnedOffset;
- (void)setArrowOffset:(double)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setPopoverBackgroundColor:(id)a0;
- (void)setArrowBackgroundColor:(id)a0;
- (void)_updateChrome;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;

@end

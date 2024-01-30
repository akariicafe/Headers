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

+ (double)arrowHeight;
+ (double)arrowBase;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_updateBackgroundStyle;
- (void)setArrowOffset:(double)a0;
- (void)setBackgroundStyle:(long long)a0;
- (long long)backgroundStyle;
- (double)minNonPinnedOffset;
- (void)_removeEffectView;
- (void)didMoveToWindow;
- (void)_configureEffectView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)_shadowPath;
- (double)maxNonPinnedOffset;
- (double)_shadowRadius;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)isPinned;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)layoutSubviews;
- (id)backgroundEffect;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (long long)_resolvedBackgroundStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)setPopoverBackgroundColor:(id)a0;
- (void)setArrowBackgroundColor:(id)a0;
- (double)arrowOffset;
- (void)_loadNecessaryViews;
- (void).cxx_destruct;
- (double)_shadowOpacity;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_resetComponentViews;
- (void)_updateChrome;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (BOOL)useShortMode;

@end

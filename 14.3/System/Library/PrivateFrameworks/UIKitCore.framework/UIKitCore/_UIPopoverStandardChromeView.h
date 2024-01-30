@class UIColor, UIVisualEffectView, UIView;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    UIColor *_popoverBackgroundColor;
    UIColor *_arrowBackgroundColor;
    BOOL _popoverBackgroundColorIsOpaque;
    double _arrowOffset;
    unsigned long long _arrowDirection;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _arrowVisible;
    BOOL _wasPinned;
}

@property (readonly, nonatomic) UIView *arrowView;
@property (readonly, nonatomic) UIView *leftCapView;
@property (readonly, nonatomic) UIView *rightCapView;
@property (readonly, nonatomic) BOOL hasComponentViews;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, getter=isArrowVisible) BOOL arrowVisible;
@property (nonatomic) BOOL useShortMode;
@property (nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (readonly, nonatomic) UIColor *contentBlendingColor;
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow;

+ (double)arrowBase;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (double)arrowHeight;

- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)backgroundEffect;
- (id)_shadowPath;
- (void)_updateChrome;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)setArrowDirection:(unsigned long long)a0;
- (BOOL)isPinned;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (double)arrowOffset;
- (double)_shadowRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)_shadowOpacity;
- (unsigned long long)arrowDirection;
- (void)_loadNecessaryViews;
- (double)minNonPinnedOffset;
- (double)maxNonPinnedOffset;
- (BOOL)wouldPinForOffset:(double)a0;
- (BOOL)isRightArrowPinnedToTop;
- (BOOL)isRightArrowPinnedToBottom;
- (void)_resetComponentViews;
- (void)_layoutArrowViewsUpOrDown;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_updateBackgroundStyle;
- (BOOL)_shouldUseEqualContentInsetsOnAllSides;
- (void)_configureEffectView;
- (long long)_resolvedBackgroundStyle;
- (void)_removeEffectView;
- (void)setArrowVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setArrowOffset:(double)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

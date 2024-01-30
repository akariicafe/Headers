@class UIVisualEffect, UIColor, UIVisualEffectView, NSString, CALayer, UIView, UIAccessibilityHUDItem;

@interface _UIStatusBarPillView : _UIStatusBarRoundedCornerView <_UIStatusBarDisplayable, _UIStatusBarPersistentAnimation>

@property (retain, nonatomic) CALayer *pulseLayer;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (nonatomic) BOOL pulsing;
@property (retain, nonatomic) UIVisualEffect *visualEffect;
@property (retain, nonatomic) UIColor *pillColor;
@property (weak, nonatomic) UIView *subviewForBaselineAlignment;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundColor;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (BOOL)isUserInteractionEnabled;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resumePersistentAnimation;
- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end

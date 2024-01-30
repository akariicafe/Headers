@class NSString, CAShapeLayer, UIView, _UIStatusBarImageView, UIAccessibilityHUDItem;

@interface _UIStatusBarVPNDisconnectView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>

@property (retain, nonatomic) _UIStatusBarImageView *iconView;
@property (retain, nonatomic) CAShapeLayer *iconSlashMaskShapeLayer;
@property (retain, nonatomic) UIView *slashView;
@property (retain, nonatomic) CAShapeLayer *slashShapeLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (void)applyStyleAttributes:(id)a0;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_setupForStyleAttributes:(id)a0;
- (void)updateFramesForStyleAttributes:(id)a0;
- (void)resetSlashForUpdate:(id)a0;
- (void)animateSlashForUpdate:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;

@end

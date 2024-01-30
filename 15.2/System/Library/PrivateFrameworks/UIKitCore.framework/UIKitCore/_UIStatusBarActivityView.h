@class CAGradientLayer, NSString, _UIStatusBarCycleAnimation, UIColor, CALayer, UIAccessibilityHUDItem;

@interface _UIStatusBarActivityView : UIView <_UIStatusBarDisplayable>

@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CALayer *mainLayer;
@property (retain, nonatomic) CAGradientLayer *barLayer;
@property (retain, nonatomic) CALayer *pointLayer;
@property (nonatomic) double thickness;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;
@property (nonatomic) BOOL isSlow;
@property (copy, nonatomic) UIColor *color;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)stopAnimatingWithCompletionHandler:(id /* block */)a0;
- (void)_commonInit;
- (void)applyStyleAttributes:(id)a0;
- (void)_stopAnimatingWithStoppingAnimations:(BOOL)a0 completionHandler:(id /* block */)a1;
- (double)_thicknessForTraitCollection:(id)a0;

@end

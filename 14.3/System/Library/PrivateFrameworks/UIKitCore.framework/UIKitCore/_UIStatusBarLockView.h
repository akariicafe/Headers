@class NSString, _UIStatusBarImageView, UIAccessibilityHUDItem;

@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>

@property (retain, nonatomic) _UIStatusBarImageView *bodyView;
@property (retain, nonatomic) _UIStatusBarImageView *shackleView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (void)applyStyleAttributes:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)animateUnlockWithCompletionBlock:(id /* block */)a0;
- (void)jiggleWithCompletionBlock:(id /* block */)a0;
- (void)resetLock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class HUShapeLayerView, NSString, UIVisualEffectView, HULockIconStateTransition, HUVisualEffectContainerView;

@interface HULockIconContentView : HUPrimaryStateIconContentView <CAAnimationDelegate>

@property (retain, nonatomic) HUShapeLayerView *lockBodyView;
@property (retain, nonatomic) HUVisualEffectContainerView *lockBodyContainerView;
@property (retain, nonatomic) HUShapeLayerView *lockKeyholeFillView;
@property (retain, nonatomic) HUVisualEffectContainerView *lockKeyholeContainerView;
@property (retain, nonatomic) HUShapeLayerView *lockShackleView;
@property (retain, nonatomic) UIVisualEffectView *lockShackleContainerView;
@property (retain, nonatomic) HULockIconStateTransition *activeTransition;
@property (nonatomic) unsigned long long lockState;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_lockKeyholePathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)_lockShacklePathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_performTransitionToLockState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_translateShackleForLockState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateIconFromState:(long long)a0 toState:(long long)a1 animated:(BOOL)a2;
- (void)_removePendingBounceAnimations;
- (void)_removeAllTransitionAnimations;
- (void)updateColorsForDisplayStyle:(unsigned long long)a0;
- (id)_viewsAnimatedForStateTransition;
- (void)_rotateShackleForLockState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_applyAnimation:(id)a0 ofType:(unsigned long long)a1 animated:(BOOL)a2;
- (id)_viewForTransitionAnimationType:(unsigned long long)a0;
- (BOOL)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;

@end

@class SBFluidSwitcherAnimationSettings, NSMutableSet;
@protocol SBHomeScreenBackdropViewBaseDelegate;

@interface SBHomeScreenBackdropViewBase : UIView {
    NSMutableSet *_backdropViewRequiringReasons;
    NSMutableSet *_liveBackdropViewRequiringReasons;
    SBFluidSwitcherAnimationSettings *_animationSettings;
}

@property (weak, nonatomic) id<SBHomeScreenBackdropViewBaseDelegate> delegate;

- (void)beginRequiringLiveBackdropViewForReason:(id)a0;
- (void)beginRequiringBackdropViewForReason:(id)a0;
- (id)backdropBlurSettings;
- (void)cancelInProcessAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endRequiringLiveBackdropViewForReason:(id)a0;
- (void)endRequiringBackdropViewForReason:(id)a0;
- (void).cxx_destruct;
- (void)setBlurProgress:(double)a0 behaviorMode:(long long)a1 completion:(id /* block */)a2;
- (BOOL)isOpaque;
- (BOOL)requiresBackdropView;
- (BOOL)requiresLiveBackdropView;

@end

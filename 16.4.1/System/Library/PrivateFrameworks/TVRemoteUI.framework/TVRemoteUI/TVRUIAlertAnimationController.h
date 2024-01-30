@class NSString, UIVisualEffectView, TVRMaterialView;
@protocol TVRemoteAlertVisualStyleProviding;

@interface TVRUIAlertAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIVisualEffectView *foregroundVisualEffectView;
@property (nonatomic) double foregroundBlurRadius;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } scaleTransform;
@property (readonly, nonatomic) long long animationType;
@property (readonly, nonatomic) id<TVRemoteAlertVisualStyleProviding> visualStyle;
@property (retain, nonatomic) TVRMaterialView *backgroundMaterialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)_runDismissalAnimationWithTransition:(id)a0;
- (void)_runPresentationAnimationWithTransition:(id)a0;
- (id)initWithAnimationType:(long long)a0 visualStyle:(id)a1;

@end

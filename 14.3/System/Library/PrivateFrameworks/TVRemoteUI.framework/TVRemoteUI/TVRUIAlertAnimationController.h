@class NSString, UIVisualEffectView, _TVRMaterialView;
@protocol _TVRemoteAlertVisualStyleProviding;

@interface TVRUIAlertAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIVisualEffectView *foregroundVisualEffectView;
@property (nonatomic) double foregroundBlurRadius;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } scaleTransform;
@property (readonly, nonatomic) long long animationType;
@property (readonly, nonatomic) id<_TVRemoteAlertVisualStyleProviding> visualStyle;
@property (retain, nonatomic) _TVRMaterialView *backgroundMaterialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)_runPresentationAnimationWithTransition:(id)a0;
- (void)_runDismissalAnimationWithTransition:(id)a0;
- (id)initWithAnimationType:(long long)a0 visualStyle:(id)a1;

@end

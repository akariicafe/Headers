@class NSString;
@protocol _TVRemoteAlertVisualStyleProviding;

@interface TVRUIAlertFadeAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) long long animationType;
@property (readonly, nonatomic) id<_TVRemoteAlertVisualStyleProviding> visualStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (void)_runPresentationAnimationWithTransition:(id)a0;
- (void)_runDismissalAnimationWithTransition:(id)a0;
- (id)initWithAnimationType:(long long)a0 visualStyle:(id)a1;

@end

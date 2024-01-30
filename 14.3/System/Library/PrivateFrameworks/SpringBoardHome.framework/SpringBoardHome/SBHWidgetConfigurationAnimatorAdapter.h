@class NSString;
@protocol SBHWidgetConfigurationAnimating;

@interface SBHWidgetConfigurationAnimatorAdapter : NSObject <SBViewControllerReversibleAnimatedTransitioning>

@property (nonatomic) unsigned long long transitionToken;
@property (readonly, nonatomic) id<SBHWidgetConfigurationAnimating> animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (BOOL)supportsRestarting;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithAnimator:(id)a0;

@end

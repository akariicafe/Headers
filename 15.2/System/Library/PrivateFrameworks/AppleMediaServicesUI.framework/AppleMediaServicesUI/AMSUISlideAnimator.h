@class CASpringAnimation, NSString;

@interface AMSUISlideAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) CASpringAnimation *animation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;

@end

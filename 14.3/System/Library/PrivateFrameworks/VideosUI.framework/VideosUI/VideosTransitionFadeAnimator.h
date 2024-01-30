@class NSString;

@interface VideosTransitionFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) long long transitionType;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithTransitionType:(long long)a0 andDuration:(double)a1;

@end

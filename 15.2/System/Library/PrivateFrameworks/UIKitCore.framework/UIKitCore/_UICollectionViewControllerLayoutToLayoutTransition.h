@class UIPercentDrivenInteractiveTransition, UICollectionViewLayout, NSString;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UICollectionViewLayout *toLayout;
@property (nonatomic) BOOL crossFadeNavigationBar;
@property (nonatomic) BOOL crossFadeBottomBars;
@property (nonatomic) UIPercentDrivenInteractiveTransition *interactionController;
@property (nonatomic) BOOL interactionAborted;
@property (nonatomic) long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionForOperation:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldCrossFadeNavigationBar;
- (BOOL)_shouldCrossFadeBottomBars;
- (void)animationEnded:(BOOL)a0;

@end

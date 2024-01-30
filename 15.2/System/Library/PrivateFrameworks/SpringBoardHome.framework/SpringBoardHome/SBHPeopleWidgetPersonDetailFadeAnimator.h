@class BSAnimationSettings;

@interface SBHPeopleWidgetPersonDetailFadeAnimator : NSObject <SBHViewControllerTransitionAnimating>

@property (readonly, copy, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic, getter=isAlreadyAnimating) BOOL alreadyAnimating;

- (void).cxx_destruct;
- (id)init;
- (void)finalizeAnimationAtEndpoint:(long long)a0 withContext:(id)a1;
- (void)prepareToAnimateFromEndpoint:(long long)a0 withContext:(id)a1;
- (void)animateToEndpoint:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_configureForEndpoint:(long long)a0 context:(id)a1;

@end

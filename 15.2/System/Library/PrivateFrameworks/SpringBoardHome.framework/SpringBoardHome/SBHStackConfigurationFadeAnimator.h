@class BSAnimationSettings, UIView;

@interface SBHStackConfigurationFadeAnimator : NSObject <SBHViewControllerTransitionAnimating>

@property (readonly, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic, getter=isAlreadyAnimating) BOOL alreadyAnimating;
@property (retain, nonatomic) UIView *sourceSnapshotView;

- (void).cxx_destruct;
- (id)init;
- (void)finalizeAnimationAtEndpoint:(long long)a0 withContext:(id)a1;
- (void)prepareToAnimateFromEndpoint:(long long)a0 withContext:(id)a1;
- (void)animateToEndpoint:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_updateSourceSnapshotViewUsingSourceIconView:(BOOL)a0 withCoordinator:(id)a1;
- (void)_configureForEndpoint:(long long)a0 withCoordinator:(id)a1;
- (void)_setupMatchMoveAnimationWithSourceView:(id)a0 targetView:(id)a1;

@end

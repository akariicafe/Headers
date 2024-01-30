@class NSString, BSAnimationSettings;

@interface BNBannerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    BSAnimationSettings *_animationSettings;
}

@property (readonly, nonatomic, getter=isRetargetable) BOOL retargetable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultResizeAnimationSettings;
+ (void)animateInteractive:(BOOL)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)_animateInteractive:(BOOL)a0 settings:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)animateWithSettings:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithAnimationSettings:(id)a0;
- (void)animateByRetargetingAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)actionsForTransition:(id)a0;

@end

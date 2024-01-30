@class NSString;

@interface SBSystemApertureAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic, getter=_settings, setter=_setSettings:) id settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)_animateTransition:(id)a0 actions:(id /* block */)a1 completion:(id /* block */)a2;
- (id)_bsAnimationSettings;

@end

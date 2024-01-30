@class NSString, UIVisualEffectView, SBFLockScreenDateView, UIView;

@interface SBFLockScreenWakeAnimator : NSObject <SBFScreenWakeAnimationTarget>

@property (nonatomic) long long wakeState;
@property (weak, nonatomic) UIVisualEffectView *wakeEffectView;
@property (retain, nonatomic) UIView *superviewForDateViewAnimation;
@property (retain, nonatomic) SBFLockScreenDateView *dateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_wakeEffectsForPersistentWakeState:(long long)a0;
- (long long)_targetWakeStateForFadeIn:(BOOL)a0;
- (void).cxx_destruct;
- (id)_wakeEffectsForAnimatingWakeState:(long long)a0;
- (void)updateWakeEffectsForWake:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateWakeEffectsForWake:(BOOL)a0;

@end

@class SBSwitcherModifier;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) SBSwitcherModifier *multitaskingModifier;

- (double)containerStatusBarAnimationDuration;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)appLayoutToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 multitaskingModifier:(id)a2;
- (BOOL)isEffectivelyHome;

@end

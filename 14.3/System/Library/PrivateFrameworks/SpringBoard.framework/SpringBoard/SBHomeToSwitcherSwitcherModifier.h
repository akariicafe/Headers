@class SBSwitcherModifier;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) SBSwitcherModifier *multitaskingModifier;

- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillBegin;
- (double)containerStatusBarAnimationDuration;
- (id)appLayoutToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 multitaskingModifier:(id)a2;
- (BOOL)isEffectivelyHome;

@end

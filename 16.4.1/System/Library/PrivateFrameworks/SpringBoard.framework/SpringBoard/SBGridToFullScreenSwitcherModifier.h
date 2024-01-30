@class SBAppLayout;

@interface SBGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
}

- (id)transitionWillBegin;
- (id)appLayoutToScrollToBeforeTransitioning;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 gridModifier:(id)a3;

@end

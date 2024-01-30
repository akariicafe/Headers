@class NSSet, SBAppExposeGridSwitcherModifier;

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    NSSet *_appLayoutsVisibleBeforeTransition;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 bundleIdentifier:(id)a1 appExposeModifier:(id)a2;
- (id)_newAppExposeModifier;
- (double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)a0;

@end

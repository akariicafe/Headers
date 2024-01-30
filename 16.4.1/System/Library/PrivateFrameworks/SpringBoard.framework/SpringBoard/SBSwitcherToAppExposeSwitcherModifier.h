@class NSSet, SBAppExposeGridSwitcherModifier;

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    NSSet *_appLayoutsVisibleBeforeTransition;
}

- (id)transitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (id)transitionWillUpdate;
- (id)_newAppExposeModifier;
- (double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 bundleIdentifier:(id)a1 appExposeModifier:(id)a2;

@end

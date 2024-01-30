@class NSString, SBMixedGridSwitcherModifier, SBGestureSwitcherModifier;

@interface SBMixedGridHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier <SBChainableModifierDelegate> {
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    SBGestureSwitcherModifier *_gestureModifier;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_newMultitaskingModifier;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)handleEvent:(id)a0;
- (void).cxx_destruct;
- (long long)gestureType;
- (BOOL)canTransitionWithoutGestureModifier;
- (BOOL)completesWhenChildrenComplete;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (id)initWithStartingEnvironmentMode:(long long)a0 mixedGridModifier:(id)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end

@class NSSet, SBDisplayItem, SBTransitionSwitcherModifierEvent;

@interface SBiPadOSPlatformSwitcherModifier : SBSwitcherModifier {
    NSSet *_previousDisplayItems;
    NSSet *_displayItems;
    SBDisplayItem *_lastGesturedDisplayItem;
    SBDisplayItem *_lastPulsedDisplayItem;
    NSSet *_activatingLiveAppLayouts;
    SBTransitionSwitcherModifierEvent *_lastTransitionEvent;
    long long _currentUnlockedEnvironmentMode;
}

- (id)foregroundAppLayouts;
- (char)activityModeForAppLayout:(id)a0;
- (void)setDelegate:(id)a0;
- (char)jetsamModeForAppLayout:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)a0 fromAppLayouts:(id)a1;
- (void).cxx_destruct;
- (id)handleUpdateWindowingModeEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)handlePrepareForSceneUpdateEvent:(id)a0;

@end

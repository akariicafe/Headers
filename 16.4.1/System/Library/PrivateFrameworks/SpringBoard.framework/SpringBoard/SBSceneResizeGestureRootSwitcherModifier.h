@class SBAppLayout;

@interface SBSceneResizeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_appLayout;
    long long _startingSpaceConfiguration;
}

- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)initWithAppLayout:(id)a0 spaceConfiguration:(long long)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end

@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (double)containerStatusBarAnimationDuration;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)handleTimerEvent:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)_appLayoutToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (unsigned long long)_indexOfSelectedAppLayout;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 multitaskingModifier:(id)a3;

@end

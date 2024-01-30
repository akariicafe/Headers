@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (BOOL)isContainerStatusBarVisible;
- (double)containerStatusBarAnimationDuration;
- (id)_appLayoutToScrollToDuringTransition;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)_dismissForEmptySwitcherResponseName;
- (unsigned long long)_indexOfSelectedAppLayout;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 multitaskingModifier:(id)a3;

@end

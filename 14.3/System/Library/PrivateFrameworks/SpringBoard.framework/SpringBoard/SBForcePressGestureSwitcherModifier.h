@class SBSwitcherModifier, SBAppLayout, SBCoplanarSwitcherModifier, SBForcePressGestureStateTrackingSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
    double _additionalScaleForBreathing;
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)handleMainTransitionEvent:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (double)homeScreenBackdropBlurProgress;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)_layoutSettings;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (double)homeScreenScale;
- (void)didMoveToParentModifier:(id)a0;
- (double)_switcherCardScale;
- (double)homeScreenDimmingAlpha;
- (double)darkeningAlphaForIndex:(unsigned long long)a0;
- (double)wallpaperScale;
- (id)keyboardSuppressionMode;
- (double)homeScreenAlpha;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)_scaleSettings;
- (id)handleGestureEvent:(id)a0;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)a0 settings:(id)a1;
- (double)_scaleForCoplanarModifier;
- (double)_effectivePanProgress;
- (unsigned long long)_indexOfSelectedAppLayout;
- (BOOL)_forcePressGestureCanBreathe;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 multitaskingModifier:(id)a3;
- (double)initialPanThreshold;

@end

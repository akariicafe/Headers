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

- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)appLayoutsToResignActive;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)keyboardSuppressionMode;
- (double)homeScreenBackdropBlurProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleTransitionEvent:(id)a0;
- (double)_switcherCardScale;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
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

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

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (BOOL)isContainerStatusBarVisible;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isSwitcherWindowVisible;
- (void)didMoveToParentModifier:(id)a0;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)wallpaperScale;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenBackdropBlurProgress;
- (id)handleTransitionEvent:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (double)_switcherCardScale;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (id)_scaleSettings;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)a0 settings:(id)a1;
- (double)_effectivePanProgress;
- (BOOL)_forcePressGestureCanBreathe;
- (unsigned long long)_indexOfSelectedAppLayout;
- (double)_scaleForCoplanarModifier;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 multitaskingModifier:(id)a3;
- (double)initialPanThreshold;

@end

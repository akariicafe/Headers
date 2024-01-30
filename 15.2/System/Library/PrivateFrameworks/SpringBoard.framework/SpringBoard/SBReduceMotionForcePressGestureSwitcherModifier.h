@class SBForcePressGestureStateTrackingSwitcherModifier, SBAppLayout;

@interface SBReduceMotionForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
}

- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)appLayoutsToResignActive;
- (id)keyboardSuppressionMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
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
- (id)handleGestureEvent:(id)a0;
- (double)_effectivePanProgress;
- (unsigned long long)_indexOfSelectedAppLayout;
- (double)initialPanThreshold;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2;

@end

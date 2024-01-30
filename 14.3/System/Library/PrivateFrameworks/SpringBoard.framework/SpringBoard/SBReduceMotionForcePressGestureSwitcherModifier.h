@class SBForcePressGestureStateTrackingSwitcherModifier, SBAppLayout;

@interface SBReduceMotionForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)_layoutSettings;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (void)didMoveToParentModifier:(id)a0;
- (double)darkeningAlphaForIndex:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)handleGestureEvent:(id)a0;
- (double)_effectivePanProgress;
- (unsigned long long)_indexOfSelectedAppLayout;
- (double)initialPanThreshold;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2;

@end

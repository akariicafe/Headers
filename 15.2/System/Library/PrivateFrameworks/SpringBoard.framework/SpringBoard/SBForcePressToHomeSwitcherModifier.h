@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    double _initalPanThreshold;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)_switcherCardScale;
- (id)visibleAppLayouts;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 initialPanThreshold:(double)a3 multitaskingModifier:(id)a4;

@end

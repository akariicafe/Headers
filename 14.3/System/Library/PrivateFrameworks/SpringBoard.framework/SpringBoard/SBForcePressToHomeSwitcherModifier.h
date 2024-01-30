@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    double _initalPanThreshold;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (void).cxx_destruct;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)_switcherCardScale;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 initialPanThreshold:(double)a3 multitaskingModifier:(id)a4;

@end

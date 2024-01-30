@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    double _initalPanThreshold;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isSwitcherWindowVisible;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (double)_switcherCardScale;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 initialPanThreshold:(double)a3 multitaskingModifier:(id)a4;

@end

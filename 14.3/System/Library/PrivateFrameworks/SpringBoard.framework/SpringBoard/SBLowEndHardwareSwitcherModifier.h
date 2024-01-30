@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {
    unsigned long long _options;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}

- (id)handleMainTransitionEvent:(id)a0;
- (BOOL)_shouldResignActiveAppsUnderFloatingApp;
- (id)appLayoutsToResignActive;
- (BOOL)_shouldSimplifyForOpenFolder;
- (id)initWithSimplificationOptions:(unsigned long long)a0;
- (BOOL)_shouldSimplifyForWidgetCenterAndLibrary;
- (double)homeScreenScale;
- (double)wallpaperScale;
- (id)keyboardSuppressionMode;
- (double)homeScreenAlpha;

@end

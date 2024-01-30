@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {
    unsigned long long _options;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}

- (id)appLayoutsToResignActive;
- (double)homeScreenScale;
- (id)keyboardSuppressionMode;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (id)initWithSimplificationOptions:(unsigned long long)a0;
- (BOOL)_shouldSimplifyForWidgetCenterAndLibrary;
- (BOOL)_shouldResignActiveAppsUnderFloatingApp;
- (id)handleTransitionEvent:(id)a0;
- (BOOL)_shouldSimplifyForOpenFolder;

@end

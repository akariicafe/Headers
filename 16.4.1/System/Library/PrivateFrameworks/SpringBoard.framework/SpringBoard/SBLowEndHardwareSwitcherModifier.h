@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {
    unsigned long long _options;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}

- (id)keyboardSuppressionMode;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (BOOL)_shouldSimplifyForOpenFolder;
- (id)appLayoutsToResignActive;
- (BOOL)_shouldSimplifyForWidgetCenterAndLibrary;
- (double)wallpaperScale;
- (id)handleTransitionEvent:(id)a0;
- (id)initWithSimplificationOptions:(unsigned long long)a0;
- (BOOL)_shouldResignActiveAppsUnderFloatingApp;

@end

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {
    unsigned long long _options;
    BOOL _floatingSwitcherVisible;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
    BOOL _shouldDimAndBlockTouches;
}

- (double)switcherDimmingAlpha;
- (BOOL)wantsSwitcherDimmingView;
- (id)initWithOptions:(unsigned long long)a0;
- (id)handleMainTransitionEvent:(id)a0;
- (BOOL)switcherDimmingViewBlocksTouches;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (BOOL)_shouldDimAndBlockTouchesToAppsUnderFloating;

@end

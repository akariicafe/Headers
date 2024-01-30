@class NSString;

@interface SBAppExposeContinuousExposeSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
    unsigned long long _numberOfHiddenAppLayouts;
    BOOL _isShowingReopenClosedWindowsButton;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (double)homeScreenAlpha;
- (id)handleRemovalEvent:(id)a0;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)reopenClosedWindowsButtonAlpha;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)reopenClosedWindowsButtonScale;
- (BOOL)isHomeScreenContentRequired;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)homeScreenBackdropBlurProgress;
- (id)handleTransitionEvent:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)_updateReopenClosedWindowsButtonPresence;
- (BOOL)_canShowReopenClosedWindowsButton;
- (id)handleInsertionEvent:(id)a0;
- (BOOL)isToggleWindowingModeButtonVisible;

@end

@class NSUUID, SBAppLayout;

@interface _SBFullScreenAppFloorSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_activeAppLayout;
    NSUUID *_homeAffordanceReuseIdentifier;
}

- (id)appLayoutToAttachSlideOverTongue;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(long long)a0 inAppLayout:(id)a1;
- (id)keyboardSuppressionMode;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (BOOL)shouldSuppressHighlightEffectForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)containerLeafAppLayoutForShelf:(id)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAppLayout:(id)a0;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (id)visibleHomeAffordanceLayoutElements;
- (id)appLayoutForReceivingHardwareButtonEvents;
- (unsigned long long)hiddenContentStatusBarPartsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)neighboringAppLayoutsForFocusedAppLayout:(id)a0;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (BOOL)isContainerStatusBarVisible;
- (id)initWithActiveAppLayout:(id)a0 homeAffordanceReuseIdentifier:(id)a1;
- (double)homeScreenScale;
- (BOOL)shouldAllowGroupOpacityForAppLayout:(id)a0;
- (double)homeScreenAlpha;
- (unsigned long long)transactionCompletionOptions;
- (BOOL)isIndexRubberbandableForSwipeToKill:(unsigned long long)a0;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (BOOL)wantsSwitcherDimmingView;
- (long long)tintStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (long long)switcherBackdropBlurType;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)shelfBackgroundBlurOpacity;
- (BOOL)shouldRubberbandFullScreenHomeGrabberView;
- (double)reopenClosedWindowsButtonAlpha;
- (id)foregroundAppLayouts;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)canPerformKeyboardShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (BOOL)canSelectLeafWithModifierKeysInAppLayout:(id)a0;
- (BOOL)wantsHomeScreenPointerInteractions;
- (BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (double)containerStatusBarAnimationDuration;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (id)appLayoutToScrollToBeforeTransitioning;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (char)activityModeForAppLayout:(id)a0;
- (double)contentViewScale;
- (double)plusButtonAlpha;
- (BOOL)isHomeAffordanceSupportedForAppLayout:(id)a0;
- (long long)plusButtonStyle;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (BOOL)switcherDimmingViewBlocksTouches;
- (id)handleTapAppLayoutEvent:(id)a0;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (BOOL)shouldScrollViewBlockTouches;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (BOOL)wantsSlideOverTongue;
- (BOOL)wantsSwitcherBackdropBlur;
- (long long)wallpaperStyle;
- (unsigned long long)dockWindowLevelPriority;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)wantsDockBehaviorAssertion;
- (unsigned long long)activeCornersForTouchResizeForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (long long)preferredSnapshotOrientationForAppLayout:(id)a0;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForShelf:(id)a0;
- (id)appLayoutsToResignActive;
- (long long)dockUpdateMode;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)a0;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isScrollEnabled;
- (unsigned long long)slideOverTongueDirection;
- (double)switcherDimmingAlpha;
- (BOOL)isItemResizingAllowedForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)lighteningAlphaForIndex:(unsigned long long)a0;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (unsigned long long)slideOverTongueState;
- (id)topMostLayoutElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shelfBackgroundBlurFrame;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (long long)touchBehaviorForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)activeLeafAppLayoutsReachableByKeyboardShortcut;
- (double)reopenClosedWindowsButtonScale;
- (double)dockProgress;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)a0;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)a0;
- (BOOL)isFocusEnabledForAppLayout:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (char)jetsamModeForAppLayout:(id)a0;
- (double)wallpaperScale;
- (BOOL)isItemContainerPointerInteractionEnabled;
- (BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)a0;
- (double)dockWindowLevel;
- (double)blurViewIconScaleForIndex:(unsigned long long)a0;
- (double)switcherBackdropBlurProgress;
- (BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)a0;
- (BOOL)isHomeScreenContentRequired;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (id)inactiveAppLayoutsReachableByKeyboardShortcut;
- (double)homeScreenBackdropBlurProgress;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (BOOL)isLayoutRoleKillable:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleShelves;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)a0 fromAppLayouts:(id)a1;
- (BOOL)_isLayoutRoleBehindCenterWindow:(long long)a0 appLayout:(id)a1;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;

@end

@class NSString, SBMixedGridSwitcherModifier;

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    unsigned long long _numberOfHiddenAppLayouts;
    BOOL _isShowingReopenClosedWindowsButton;
}

@property (nonatomic) BOOL disableFullScreenCardScaleRounding;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullScreenCardSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } floatingCardSize;
@property (nonatomic) BOOL reversesFloatingCardDirection;

- (BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (id)handleRemovalEvent:(id)a0;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (void)didMoveToParentModifier:(id)a0;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)reopenClosedWindowsButtonScale;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)handleTransitionEvent:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (void).cxx_destruct;
- (id)_updateReopenClosedWindowsButtonPresence;
- (BOOL)_canShowReopenClosedWindowsButton;
- (id)handleInsertionEvent:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 fullScreenCardSize:(struct CGSize { double x0; double x1; })a1 floatingCardSize:(struct CGSize { double x0; double x1; })a2;

@end

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

- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (double)reopenClosedWindowsButtonAlpha;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (double)reopenClosedWindowsButtonScale;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)plusButtonAlpha;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (long long)plusButtonStyle;
- (id)handleRemovalEvent:(id)a0;
- (id)_updateReopenClosedWindowsButtonPresence;
- (id)handleTransitionEvent:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)handleInsertionEvent:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 fullScreenCardSize:(struct CGSize { double x0; double x1; })a1 floatingCardSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_canShowReopenClosedWindowsButton;

@end

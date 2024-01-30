@class NSString;

@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherMultitaskingQueryProviding, SBSwitcherContextProviding> {
    BOOL _verifyModifierStackCoherencyCheckAfterHandlingEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryProtocol;
+ (id)contextProtocol;
+ (id)newEventResponse;

- (id)loggingCategory;
- (id)displayName;
- (id)handleRemovalEvent:(id)a0;
- (id)handleTapAppLayoutEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)_handleEvent:(id)a0;
- (id)init;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (id)handleSwitcherSettingsChangedEvent:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (id)handleInsertionEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (void)performWithTemporarilyInsertedAppLayout:(id)a0 atIndex:(unsigned long long)a1 block:(id /* block */)a2;
- (id)defaultAppLayoutsToCacheSnapshots;
- (id)appLayoutsToCacheSnapshotsWithVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 numberOfSnapshotsToCache:(unsigned long long)a1 biasForward:(BOOL)a2;
- (id)handleHighlightEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledFrameForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)stackDescription;
- (id)handleGestureEvent:(id)a0;
- (unsigned long long)indexOfFirstMainAppLayoutFromAppLayouts:(id)a0;
- (unsigned long long)indexOfFirstFloatingAppFromAppLayouts:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledFrameForIndex:(unsigned long long)a0;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)a0 numberOfRows:(unsigned long long)a1 padding:(double)a2 layoutDirection:(unsigned long long)a3;
- (id)handleHomeGestureSettingsChangedEvent:(id)a0;
- (id)handleAnimatablePropertyChangedEvent:(id)a0;
- (id)handleReduceMotionChangedEvent:(id)a0;
- (id)stackDescriptionWithPrefix:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (id)handleSwitcherDropEvent:(id)a0;
- (id)handleBlurProgressEvent:(id)a0;
- (BOOL)runsInternalVerificationAfterEventDispatch;
- (id)handleTapSlideOverTongueEvent:(id)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (id)handleUpdateFocusedAppLayoutEvent:(id)a0;
- (id)handleHideMorphToPIPAppLayoutEvent:(id)a0;
- (id)handleInitialSetupEvent:(id)a0;
- (id)handleMedusaSettingsChangedEvent:(id)a0;
- (id)handleHomeGrabberSettingsChangedEvent:(id)a0;
- (id)handleSlideOverEdgeProtectTongueEvent:(id)a0;
- (id)handleShelfFocusedDisplayItemsChangedEvent:(id)a0;

@end

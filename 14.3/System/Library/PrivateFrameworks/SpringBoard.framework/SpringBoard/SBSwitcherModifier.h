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

- (id)handleMainTransitionEvent:(id)a0;
- (id)_handleEvent:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (id)init;
- (id)handleSwitcherSettingsChangedEvent:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (id)loggingCategory;
- (id)handleTapAppLayoutEvent:(id)a0;
- (id)handleRemovalEvent:(id)a0;
- (id)defaultAppLayoutsToCacheSnapshots;
- (id)appLayoutsToCacheSnapshotsWithVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 numberOfSnapshotsToCache:(unsigned long long)a1 biasForward:(BOOL)a2;
- (id)handleInlineTransitionEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)handleHomeGestureSettingsChangedEvent:(id)a0;
- (id)handleReduceMotionChangedEvent:(id)a0;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)a0 numberOfRows:(unsigned long long)a1 padding:(double)a2 layoutDirection:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledFrameForIndex:(unsigned long long)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (id)handleInsertionEvent:(id)a0;
- (id)handleMedusaSettingsChangedEvent:(id)a0;
- (BOOL)runsInternalVerificationAfterEventDispatch;

@end

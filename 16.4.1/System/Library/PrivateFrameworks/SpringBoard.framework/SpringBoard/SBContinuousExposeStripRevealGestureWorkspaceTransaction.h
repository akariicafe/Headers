@interface SBContinuousExposeStripRevealGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    BOOL _completedGestureWithTransitionRequest;
}

- (BOOL)_canBeInterrupted;
- (long long)_gestureType;
- (void)handleTransitionRequestForGestureComplete:(id)a0 fromGestureManager:(id)a1;

@end

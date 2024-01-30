@class SBSwitcherDropRegionContext, SBAppLayout;

@interface SBCardDropSwitcherModifier : SBSwitcherModifier {
    unsigned long long _phase;
    SBSwitcherDropRegionContext *_dropContext;
    SBAppLayout *_finalAppLayout;
    SBAppLayout *_remainingAppLayout;
    SBAppLayout *_evictedAppLayout;
    struct CGPoint { double x; double y; } _referenceCardOffsetFromPageBoundary;
    BOOL _shouldExpectMainTransitionEvent;
    BOOL _handledMainTransitionEvent;
    BOOL _isFinalAppLayoutBlurred;
    BOOL _waitingForReflowAnimation;
    BOOL _waitingForHeaderFadeIn;
}

- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (BOOL)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)a0;
- (long long)updateModeForAnimatableProperty:(id)a0;
- (BOOL)isScrollEnabled;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)handleTransitionEvent:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)animatablePropertyIdentifiers;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (unsigned long long)blurTargetPreferenceForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)modelValueForAnimatableProperty:(id)a0 currentValue:(double)a1 creating:(BOOL)a2;
- (BOOL)shouldShowBackdropViewAtIndex:(unsigned long long)a0;
- (id)settingsForAnimatableProperty:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)handleAnimatablePropertyChangedEvent:(id)a0;
- (id)handleSwitcherDropEvent:(id)a0;
- (void)_completeIfNeeded;
- (void)_recomputeBlurStateWithCompletion:(id /* block */)a0;
- (id)handleBlurProgressEvent:(id)a0;
- (BOOL)_appLayoutContainsModifiedAppLayout:(id)a0;
- (id)initWithDropContext:(id)a0;

@end

@class SBAppLayout;

@interface SBCycleContinuousExposeGroupAppLayoutsSwitcherModifier : SBSwitcherModifier {
    BOOL _isDelayingCompletionForHover;
    unsigned long long _initialGenerationCount;
    SBAppLayout *_appLayoutToOrderFront;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) SBAppLayout *behindAppLayout;
@property (readonly, nonatomic) unsigned long long generationCount;

- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)handleTransitionEvent:(id)a0;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)a0;
- (id)_completeIfNeededIgnoringHover:(BOOL)a0;
- (id)_completeIfNeeded;
- (id)_timeoutReason;
- (id)handleHighlightEvent:(id)a0;
- (id)initWithAppLayout:(id)a0 behindAppLayout:(id)a1 generationCount:(unsigned long long)a2;

@end

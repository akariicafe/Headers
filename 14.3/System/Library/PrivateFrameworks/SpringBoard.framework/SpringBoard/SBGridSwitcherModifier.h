@class _SBGridFloorSwitcherModifier, SBAppLayout, SBGridLayoutSwitcherModifier;

@interface SBGridSwitcherModifier : SBSwitcherModifier {
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBGridFloorSwitcherModifier *_floorModifier;
    unsigned long long _ongoingAppLayoutRemovals;
    SBAppLayout *_activeAppLayoutInSwitcher;
}

- (id)handleMainTransitionEvent:(id)a0;
- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleTapAppLayoutEvent:(id)a0;
- (id)handleRemovalEvent:(id)a0;
- (id)gridLayoutModifier;

@end

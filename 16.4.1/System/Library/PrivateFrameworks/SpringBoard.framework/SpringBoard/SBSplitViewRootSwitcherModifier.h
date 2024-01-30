@class SBSwitcherModifier;

@interface SBSplitViewRootSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_fullScreenModifier;
    SBSwitcherModifier *_routingModifier;
}

- (id)_handleEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_routingModifierForEvent:(id)a0;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;

@end

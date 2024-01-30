@class SBSwitcherModifier;

@interface SBSplitViewRootSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_fullScreenModifier;
    SBSwitcherModifier *_routingModifier;
}

- (id)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (id)_routingModifierForEvent:(id)a0;

@end

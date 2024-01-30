@class SBAppLayout;

@interface SBSplitViewToPeekTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
}

- (void)didMoveToParentModifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1;

@end

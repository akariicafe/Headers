@class SBAppLayout;

@interface SBFocusedAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_focusedAppLayout;
}

- (id)handleRemovalEvent:(id)a0;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (BOOL)shouldShowBackdropViewAtIndex:(unsigned long long)a0;
- (id)initWithFocusedAppLayout:(id)a0;
- (id)handleUpdateFocusedAppLayoutEvent:(id)a0;

@end

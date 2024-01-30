@class SBAppLayout;

@interface SBFocusedAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_focusedAppLayout;
}

- (id)handleRemovalEvent:(id)a0;
- (id)visibleAppLayouts;
- (BOOL)shouldShowBackdropViewAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)handleUpdateFocusedAppLayoutEvent:(id)a0;
- (id)initWithFocusedAppLayout:(id)a0;

@end

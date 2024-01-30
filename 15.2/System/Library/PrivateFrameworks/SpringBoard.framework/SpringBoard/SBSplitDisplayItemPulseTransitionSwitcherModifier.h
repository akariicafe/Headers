@class SBAppLayout;

@interface SBSplitDisplayItemPulseTransitionSwitcherModifier : SBSwitcherModifier {
    long long _floatingConfiguration;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long layoutRole;

- (id)containerLeafAppLayoutForShelf:(id)a0;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForShelf:(id)a0;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)completesWhenChildrenComplete;
- (id)_previousHomeAffordanceAppLayout;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 layoutRole:(long long)a2;

@end

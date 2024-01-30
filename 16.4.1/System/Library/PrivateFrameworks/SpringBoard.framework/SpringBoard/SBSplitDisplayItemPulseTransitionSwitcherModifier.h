@class SBAppLayout;

@interface SBSplitDisplayItemPulseTransitionSwitcherModifier : SBSwitcherModifier {
    long long _floatingConfiguration;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) BOOL isChamoisWindowingUIEnabled;

- (id)containerLeafAppLayoutForShelf:(id)a0;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForShelf:(id)a0;
- (id)appLayoutsToResignActive;
- (id)topMostLayoutElements;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)_previousHomeAffordanceAppLayout;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 layoutRole:(long long)a2 chamoisWindowingUIEnabled:(BOOL)a3;

@end

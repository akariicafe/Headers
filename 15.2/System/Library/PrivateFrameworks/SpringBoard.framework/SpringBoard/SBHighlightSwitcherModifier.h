@class SBAppLayout;

@interface SBHighlightSwitcherModifier : SBSwitcherModifier {
    long long _layoutRole;
    SBAppLayout *_appLayout;
    SBAppLayout *_leafAppLayout;
    unsigned long long _phase;
    BOOL _listensForHighlightEvents;
}

@property (nonatomic) BOOL stylesCornerRadii;

- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (id)topMostLayoutElements;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForLayoutRole:(long long)a0 inAppLayout:(id)a1 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a2;
- (id)handleHighlightEvent:(id)a0;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 listensForHighlightEvents:(BOOL)a2;

@end

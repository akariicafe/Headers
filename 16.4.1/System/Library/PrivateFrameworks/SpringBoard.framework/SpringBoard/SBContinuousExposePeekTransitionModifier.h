@class SBFullScreenContinuousExposeSwitcherModifier, SBAppLayout;

@interface SBContinuousExposePeekTransitionModifier : SBTransitionSwitcherModifier {
    SBFullScreenContinuousExposeSwitcherModifier *_fromFullScreenContinuousExposeModifier;
    SBFullScreenContinuousExposeSwitcherModifier *_toFullScreenContinuousExposeModifier;
}

@property (readonly, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;
@property (readonly, nonatomic) unsigned long long direction;

- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 direction:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;

@end

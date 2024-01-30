@class SBAppLayout;

@interface SBHomeGestureToStashedFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    long long _floatingConfiguration;
}

- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (unsigned long long)slideOverTongueState;
- (unsigned long long)slideOverTongueDirection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toFloatingConfiguration:(long long)a2;
- (double)_tongueScale;

@end

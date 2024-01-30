@class SBFullScreenToHomeIconZoomSwitcherModifier, SBAppLayout;

@interface SBPIPRestoreToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
}

- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForIndex:(unsigned long long)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_layoutSettings;
- (void).cxx_destruct;
- (BOOL)clipsToBoundsAtIndex:(unsigned long long)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)a0 zoomModifier:(id)a1 fromAppLayout:(id)a2 toAppLayout:(id)a3;
- (BOOL)_isFromAppLayout:(unsigned long long)a0;
- (BOOL)_isToAppLayout:(unsigned long long)a0;

@end

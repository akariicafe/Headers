@class SBSwitcherModifier, SBAppLayout;

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_fullscreenModifier;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 deckModifier:(id)a2 fullscreenModifier:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForContinuityAppLayout;
- (BOOL)_isInsertingIndex:(unsigned long long)a0;

@end

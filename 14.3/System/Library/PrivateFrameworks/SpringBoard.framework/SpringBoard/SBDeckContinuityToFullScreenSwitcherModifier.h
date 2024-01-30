@class SBSwitcherModifier, SBAppLayout;

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_fullscreenModifier;
}

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (BOOL)_isInsertingIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForContinuityAppLayout;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 deckModifier:(id)a2 fullscreenModifier:(id)a3;

@end

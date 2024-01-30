@class SBAppLayout;

@interface SBPulseTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _shouldScaleIn;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (id)topMostLayoutElements;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1;

@end

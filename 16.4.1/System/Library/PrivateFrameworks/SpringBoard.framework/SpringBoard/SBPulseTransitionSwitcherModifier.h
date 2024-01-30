@class SBAppLayout;

@interface SBPulseTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _shouldScaleIn;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)transitionWillUpdate;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1;

@end

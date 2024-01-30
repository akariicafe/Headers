@class NSString, SBAppLayout;

@interface SBContinuousExposeFullScreenToStripTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    long long _animationPhase;
    SBAppLayout *_outgoingAppLayout;
    NSString *_timerReason;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (BOOL)shouldAllowGroupOpacityForAppLayout:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (id)handleTimerEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIconOverlayInAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)_overlappingModelForAppLayout:(id)a0;
- (id)initWithTransitionID:(id)a0 outgoingAppLayout:(id)a1;

@end

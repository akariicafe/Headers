@class SBAppLayout;

@interface SBFullScreenToPeekSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromFloatingAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    long long _peekConfiguration;
    long long _animationPhase;
    BOOL _resizedEnoughToUnblur;
}

- (id)keyboardSuppressionMode;
- (id)transitionWillBegin;
- (BOOL)isContainerStatusBarVisible;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (void)didMoveToParentModifier:(id)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (unsigned long long)dockWindowLevelPriority;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)wantsDockBehaviorAssertion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (double)dockProgress;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)wallpaperScale;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)dockWindowLevel;
- (double)homeScreenBackdropBlurProgress;
- (id)handleTimerEvent:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)transitionWillUpdate;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)_firstPhaseScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_firstStageFrameForPeekingAppLayoutWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isPeekingAppLayout:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 fromFloatingAppLayout:(id)a3 toFloatingAppLayout:(id)a4 peekConfiguration:(long long)a5;

@end

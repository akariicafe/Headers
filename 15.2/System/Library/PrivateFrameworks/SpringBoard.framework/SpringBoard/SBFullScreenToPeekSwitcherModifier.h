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

- (BOOL)isContainerStatusBarVisible;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)homeScreenBackdropBlurProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (BOOL)wantsDockBehaviorAssertion;
- (double)dockProgress;
- (id)transitionWillUpdate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)transitionDidEnd;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 fromFloatingAppLayout:(id)a3 toFloatingAppLayout:(id)a4 peekConfiguration:(long long)a5;
- (id)handleResizeProgressEvent:(id)a0;
- (BOOL)_isPeekingAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_firstStageFrameForPeekingAppLayoutWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_firstPhaseScale;

@end

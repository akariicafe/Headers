@class SBAppLayout;

@interface SBRotationSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long fromInterfaceOrientation;
@property (readonly, nonatomic) long long toInterfaceOrientation;

- (double)rotationAngleForIndex:(unsigned long long)a0;
- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;
- (id)keyboardSuppressionMode;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 fromInterfaceOrientation:(long long)a2 toInterfaceOrientation:(long long)a3;

@end

@class UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, SBAppLayout;

@interface SBSceneResizeGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_appLayout;
    long long _startingSpaceConfiguration;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _velocity;
    UIViewFloatAnimatableProperty *_rampingProperty;
    SBFFluidBehaviorSettings *_rampedLayoutSettings;
}

- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)handleTransitionEvent:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)resizeGrabberLayoutAttributesForAppLayout:(id)a0;
- (unsigned long long)hiddenContentStatusBarPartsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (double)_rubberbandingRange;
- (id)initWithGestureID:(id)a0 appLayout:(id)a1 spaceConfiguration:(long long)a2;
- (double)_minimumCardWidthForDismissalAction;
- (long long)_currentPresentationAction;
- (double)_switcherWidth;
- (double)_maxCardWidthForDismissalAction;
- (id)_handleGestureEventBeganWithEvent:(id)a0;
- (id)_handleGestureEventChangedWithEvent:(id)a0;
- (id)_handleGestureEventEndedWithEvent:(id)a0;
- (void)_beginAnimatingRampingProperty;
- (long long)_currentActionWithProjection:(BOOL)a0;
- (id)_appLayoutForAction:(long long)a0;
- (long long)_spaceConfigurationForFinalResizeAction:(long long)a0;
- (double)_normalizedHorizontalLocationWithProjection:(BOOL)a0;
- (long long)_actionForNormalizedProgress:(double)a0 inOrientation:(long long)a1;
- (long long)_presentationActionForNormalizedProgress:(double)a0;
- (double)_normalizedDismissLeftProgress;
- (double)_normalizedDismissRightProgress;
- (double)_normalizedPeekDismissLeftProgress;
- (double)_normalizedPeekDismissRightProgress;
- (double)_normalizedNarrowWideProgress;
- (double)_normalizedWideNarrowProgress;
- (double)_normalizedProgressBetweenNarrowWideAndHalfHalf;
- (double)_normalizedProgressBetweenHalfHalfAndWideNarrow;
- (double)_normalizedHalfHalfProgress;

@end

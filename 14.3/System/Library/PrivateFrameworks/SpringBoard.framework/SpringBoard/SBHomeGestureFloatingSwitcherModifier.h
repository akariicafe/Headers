@class SBStackedFloatingSwitcherModifier, NSString, SBAppLayout, SBHomeGestureDockSwitcherModifier, UIViewFloatAnimatableProperty, SBDismissSiriSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier;

@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {
    SBStackedFloatingSwitcherModifier *_stackedLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
    SBAppLayout *_selectedAppLayout;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _velocity;
    double _rubberbandedYTranslation;
    double _scaleProgress;
    double _multitaskingHintProgress;
    UIViewFloatAnimatableProperty *_rampingProperty;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)visibleAppLayouts;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (id)handleMainTransitionEvent:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (double)shadowOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (double)darkeningAlphaForIndex:(unsigned long long)a0;
- (id)keyboardSuppressionMode;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (id)handleGestureEvent:(id)a0;
- (id)_updateForGestureDidBeginWithEvent:(id)a0;
- (id)_updateForGestureDidChangeWithEvent:(id)a0;
- (id)_updateForGestureDidEndWithEvent:(id)a0;
- (long long)currentFinalDestination;
- (id)_responseForActivatingFinalDestination:(long long)a0;
- (double)unconditionalDistanceThresholdForHome;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 continuingGesture:(BOOL)a2 lastGestureWasAnArcSwipe:(BOOL)a3;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)a0;
- (void)_beginAnimatingRampingPropertyWithSettings:(id)a0;

@end

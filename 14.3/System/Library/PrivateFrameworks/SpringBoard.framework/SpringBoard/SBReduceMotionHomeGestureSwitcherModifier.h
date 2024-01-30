@class NSString, SBAppLayout, SBHomeGestureDockSwitcherModifier, SBCoplanarSwitcherModifier, SBDismissSiriSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier;

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    BOOL _scrunchInitiated;
    struct CGPoint { double x; double y; } _initialTouchLocation;
    struct CGPoint { double x; double y; } _lastTouchLocation;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _velocity;
    struct CGPoint { double x; double y; } _translationAdjustmentForStartingFromHomeScreen;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    unsigned long long _reduceMotionAxis;
    BOOL _endingGestureForAppSwitcher;
    BOOL _didWarmupReduceMotionHaptic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)handleMainTransitionEvent:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (void)_applyPrototypeSettings;
- (BOOL)shouldRubberbandFullScreenHomeGrabberView;
- (id)keyboardSuppressionMode;
- (id)handleGestureEvent:(id)a0;
- (id)_newDockModifierRequiringVerticalSwipeToTrackDock:(BOOL)a0 startingEnvironmentMode:(long long)a1;
- (id)handleHomeGestureSettingsChangedEvent:(id)a0;
- (id)_updateForGestureDidBeginWithEvent:(id)a0;
- (id)_updateForGestureDidChangeWithEvent:(id)a0;
- (id)_updateForGestureDidEndWithEvent:(id)a0;
- (long long)currentFinalDestination;
- (id)_responseForActivatingFinalDestination:(long long)a0;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)a0;
- (double)unconditionalDistanceThresholdForHome;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)a0;
- (id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)a0;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 startingEnvironmentMode:(long long)a2 scrunchInitiated:(BOOL)a3 continuingGesture:(BOOL)a4 lastGestureWasAnArcSwipe:(BOOL)a5;

@end

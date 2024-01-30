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

@property (nonatomic) BOOL shouldProvideBlur;
@property (nonatomic) BOOL laysOutNeighboringCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyboardSuppressionMode;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)shouldRubberbandFullScreenHomeGrabberView;
- (BOOL)isSwitcherWindowVisible;
- (void)didMoveToParentModifier:(id)a0;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void)_applyPrototypeSettings;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isHomeScreenContentRequired;
- (id)handleTransitionEvent:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (id)_newDockModifierRequiringVerticalSwipeToTrackDock:(BOOL)a0 startingEnvironmentMode:(long long)a1;
- (id)_responseForActivatingFinalDestination:(long long)a0;
- (id)_updateForGestureDidBeginWithEvent:(id)a0;
- (id)_updateForGestureDidChangeWithEvent:(id)a0;
- (id)_updateForGestureDidEndWithEvent:(id)a0;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)a0;
- (id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)a0;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)a0;
- (long long)currentFinalDestination;
- (id)handleGestureEvent:(id)a0;
- (id)handleHomeGestureSettingsChangedEvent:(id)a0;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 startingEnvironmentMode:(long long)a2 scrunchInitiated:(BOOL)a3 continuingGesture:(BOOL)a4 lastGestureWasAnArcSwipe:(BOOL)a5;
- (double)unconditionalDistanceThresholdForHome;

@end

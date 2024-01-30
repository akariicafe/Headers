@protocol SBHomeGestureDockSwitcherModifierDelegate;

@interface SBHomeGestureDockSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _lastTouchLocation;
    struct CGPoint { double x; double y; } _unadjustedGestureTranslation;
    struct CGPoint { double x; double y; } _velocity;
    struct CGPoint { double x; double y; } _translationAdjustmentForFloatingDock;
    BOOL _wasTrackingDockWhenGestureBegan;
    BOOL _hadOpenDockFolderWhenGestureBegan;
    BOOL _hadOpenHomeScreenFolderWhenGestureBegan;
    BOOL _hadOpenForegroundLibraryWhenGestureBegan;
    BOOL _verticallyRubberbandedOutOfDock;
    BOOL _wantsDockAssertion;
    BOOL _highEnoughToShowDock;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    id<SBHomeGestureDockSwitcherModifierDelegate> _delegate;
    long long _startingEnvironmentMode;
    BOOL _requireVerticalSwipeToTrackDock;
}

@property (readonly, nonatomic, getter=isCurrentlyTrackingDock) BOOL currentlyTrackingDock;

- (void)didMoveToParentModifier:(id)a0;
- (unsigned long long)dockWindowLevelPriority;
- (BOOL)wantsDockBehaviorAssertion;
- (long long)dockUpdateMode;
- (void)_applyPrototypeSettings;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)dockProgress;
- (double)dockWindowLevel;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (BOOL)_rubberbandedOutOfDockHorizontally;
- (BOOL)_shouldPresentDockForFinalDestination:(long long)a0;
- (id)_updateForGestureDidBeginWithEvent:(id)a0;
- (id)_updateForGestureDidChangeWithEvent:(id)a0;
- (id)_updateForGestureDidEndWithEvent:(id)a0;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)a0;
- (long long)adjustedFinalDestinationForDestination:(long long)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })adjustedTranslationForTranslation:(struct CGPoint { double x0; double x1; })a0;
- (id)handleGestureEvent:(id)a0;
- (id)handleHomeGestureSettingsChangedEvent:(id)a0;
- (id)initWithDelegate:(id)a0 startingEnvironmentMode:(long long)a1 requireVerticalSwipeToTrackDock:(BOOL)a2;
- (id)studyLogData;
- (struct CGPoint { double x0; double x1; })translationForAdjustedTranslation:(struct CGPoint { double x0; double x1; })a0;

@end

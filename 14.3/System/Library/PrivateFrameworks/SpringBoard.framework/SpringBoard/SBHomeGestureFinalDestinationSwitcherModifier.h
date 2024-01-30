@class NSString, SBHomeGestureDockSwitcherModifier;
@protocol SBHomeGestureFinalDestinationSwitcherModifierDelegate;

@interface SBHomeGestureFinalDestinationSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _initialTranslationAdjustment;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _velocity;
    double _lastTouchTimestamp;
    double _lastAverageVelocityYForAcceleration;
    struct CGPoint { double x; double y; } _initialTouchLocation;
    struct CGPoint { double x; double y; } _lastTouchLocation;
    struct CGPoint { double x; double y; } _directionSwitchLocation;
    BOOL _movingTowardsNextLayoutState;
    double _adaptiveMinimumYVelocityForHome;
    double _adaptivePauseVelocityThresholdForAppSwitcher;
    double _adaptiveVelocitySlopeThresholdForArc;
    double _lastFinalDestination;
    long long _edgeRegionSampleCounter;
    BOOL _updateEdgeRegionSampleCounter;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    unsigned long long _numberOfTouchSamples;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    long long _startingEnvironmentMode;
    BOOL _scrunchInitiated;
    BOOL _continuingGesture;
    long long _touchType;
    BOOL _isMouseEvent;
    id<SBHomeGestureFinalDestinationSwitcherModifierDelegate> _finalDestinationDelegate;
}

@property (readonly, nonatomic) long long currentFinalDestination;
@property (readonly, nonatomic) NSString *finalDestinationReason;
@property (readonly, nonatomic) BOOL hasSeenAccelerationDipForAppSwitcher;

- (id)handleSwitcherSettingsChangedEvent:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToParentModifier:(id)a0;
- (void)_applyPrototypeSettings;
- (id)debugDescription;
- (id)studyLogData;
- (id)handleGestureEvent:(id)a0;
- (id)initWithDelegate:(id)a0 initialTranslationAdjustment:(struct CGPoint { double x0; double x1; })a1 startingEnvironmentMode:(long long)a2 continuingGesture:(BOOL)a3 dockModifier:(id)a4;
- (id)handleHomeGestureSettingsChangedEvent:(id)a0;
- (void)_updateForGestureDidBeginWithEvent:(id)a0;
- (void)_updateForGestureDidChangeWithEvent:(id)a0;
- (void)_updateForGestureDidEndWithEvent:(id)a0;
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)a0;
- (BOOL)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)a0;
- (BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (void)_updateAdaptiveThresholdsForCurrentFinalDestination:(long long)a0 velocityAverage:(struct CGPoint { double x0; double x1; })a1;
- (long long)_adjustedFinalDestinationAccountingForEdgeDataDistortion:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (double)_unconditionalDistanceThresholdForHome;

@end

@class SBAppSwitcherOrbGestureAnimationSettings;

@interface SBAppSwitcherOrbGestureSettings : PTSettings

@property BOOL useOrbGesture;
@property double orbGestureRegionMax;
@property double maxIconScrollProgressAllowed;
@property double appToAppCurveMinimum;
@property double homeToAppCurveMinimum;
@property double minPanTranslation;
@property double maxPopPanTranslation;
@property double additionalThrowDisplacement;
@property double commitToPreviousAppTranslation;
@property double commitToNextAppTranslation;
@property double dimmingValue;
@property double forcePeekAdjustApex;
@property double forceAdjustMax;
@property double maxAverageBreathingVelocity;
@property double maxBreathingVelocityInterval;
@property BOOL canPop;
@property BOOL forceDrivesInitialProgress;
@property BOOL canPlayInitialHaptic;
@property BOOL canPlayCommitHaptic;
@property (retain) SBAppSwitcherOrbGestureAnimationSettings *animationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (double)valueAlongDefaultForcePressCurveWithMinY:(double)a0 progress:(double)a1 fromHomeScreen:(BOOL)a2;

@end

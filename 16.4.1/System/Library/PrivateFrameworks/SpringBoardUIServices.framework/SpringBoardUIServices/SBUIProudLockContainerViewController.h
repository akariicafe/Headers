@class UIView, SBUIProudLockIconView, _UILegibilitySettings;
@protocol SBUIProudLockContainerViewControllerOrientationProvider, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate;

@interface SBUIProudLockContainerViewController : UIViewController <SBUIProudLockContainerViewControllerOrientationProvider> {
    long long _desiredIconState;
    unsigned long long _desiredCoachingCondition;
    int _unlockSource;
    SBUIProudLockIconView *_testProudLockIconView;
    id<SBUIProudLockContainerViewControllerOrientationProvider> _orientationProvider;
}

@property (weak, nonatomic) id<SBUIProudLockContainerViewControllerLockStatusProvider> authenticationInformationProvider;
@property (nonatomic) BOOL canShowScanningState;
@property (nonatomic) BOOL shouldShowScanningState;
@property (nonatomic) BOOL canShowCoachingCondition;
@property (nonatomic) BOOL canLeaveCoachingCondition;
@property (nonatomic) BOOL hasSeenFaceSinceScreenOn;
@property (nonatomic) BOOL canShowCameraCovered;
@property (copy, nonatomic) id /* block */ unlockCompletion;
@property (nonatomic) unsigned long long forceCount;
@property (nonatomic) struct { BOOL showScanningState; BOOL showScanningStateDuringFaceDetect; double minimumDurationBeforeShowScanningState; BOOL bkCoachingHintsEnabled; double minimumDurationBetweenLeavingCoachingAndCoaching; double minimumDurationShowingCoaching; double durationOnCameraCoveredGlyphBeforeCoaching; double durationToSuppressCameraCoveredWhenWakingWithSmartCover; BOOL coachingDelaysUnlock; BOOL suppressFaceIDDisabledState; BOOL spinBeforeCoaching; unsigned long long substate; } configuration;
@property (weak, nonatomic) id<SBUIProudLockContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isScreenOn) BOOL screenOn;
@property (nonatomic) BOOL suppressScanningState;
@property (nonatomic) BOOL suppressNotLooking;
@property (readonly, nonatomic) UIView *cameraCoveredView;
@property (nonatomic, getter=isGuidanceTextVisible) BOOL guidanceTextVisible;
@property (nonatomic) BOOL suppressAlongsideCoaching;
@property (readonly, nonatomic) BOOL isPortrait;

- (void)_handleBiometricEvent:(unsigned long long)a0;
- (void)setOrientationProvider:(id)a0;
- (id)orientationProvider;
- (void)setTestProudLockIconView:(id)a0;
- (void)_allowCoachingCondition;
- (void)updateLockForBiometricMatchFailure;
- (void)_allowLeavingCoachingCondition;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setScreenOn:(BOOL)a0 fromUnlockSource:(int)a1;
- (void)handlePhoneUnlockWithWatchError:(id)a0;
- (void)_updateIconViewStateAnimated:(BOOL)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void)_allowScanningState;
- (void)_startScanningStateTimer;
- (void)_provideFeedbackForCoachingCondition:(unsigned long long)a0;
- (BOOL)_canTransitionToState:(long long)a0;
- (void)_updateLockForFaceInView;
- (void)_setIconState:(long long)a0 animated:(BOOL)a1;
- (void)_setCoachingCondition:(unsigned long long)a0 animated:(BOOL)a1 skipScanningState:(BOOL)a2 force:(BOOL)a3;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (id)_proudLockIconView;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)a0 orientation:(long long)a1;
- (void)_updateLockForMatchStarted;
- (BOOL)_isShowingCoachingCondition:(unsigned long long)a0;
- (BOOL)_isBiometricLockedOut;
- (void)setAuthenticated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setCounterTransformForOrientation:(long long)a0;
- (void)_updateIconViewStateAnimated:(BOOL)a0;
- (void)viewDidLoad;
- (void)_updateScanningState;
- (void)_setIconState:(long long)a0 animated:(BOOL)a1 options:(long long)a2 force:(BOOL)a3 completion:(id /* block */)a4;
- (void)_performForcedUpdate:(id /* block */)a0;
- (void)_setCoachingCondition:(unsigned long long)a0 animated:(BOOL)a1 force:(BOOL)a2;
- (void)_allowCameraCoveredImmediately:(BOOL)a0;
- (void)_reallyAllowLeavingCoachingCondition;
- (void)_reallyAllowCameraCovered;
- (id)testProudLockIconView;
- (void)_dontCallThis_showLockIfNeededAnimated:(BOOL)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateForScreenWillTurnOff;
- (void)_reallyAllowCoachingConditionAnimated:(BOOL)a0;
- (void)_allowCoachingConditionImmediately:(BOOL)a0;
- (void)_setLocalTransformForOrientation:(long long)a0;
- (long long)_iconViewStateForCoachingCondition:(unsigned long long)a0;
- (void)_clearCoachingCondition;
- (void)_setCoachingCondition:(unsigned long long)a0 animated:(BOOL)a1;
- (long long)_actualIconState;
- (void).cxx_destruct;
- (id)initWithAuthenticationInformationProvider:(id)a0;
- (void)_dontCallThis_updateCoachingCondition:(unsigned long long)a0 animated:(BOOL)a1;
- (void)reset;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end

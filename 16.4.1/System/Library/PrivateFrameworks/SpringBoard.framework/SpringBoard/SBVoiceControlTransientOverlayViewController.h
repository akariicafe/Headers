@class NSArray, NSString, _UIBackdropView, SBVoiceControlViewController;
@protocol SBVoiceControlTransientOverlayViewControllerDelegate;

@interface SBVoiceControlTransientOverlayViewController : SBTransientOverlayViewController <SBVoiceControlViewControllerDelegate, CSExternalBehaviorProviding> {
    _UIBackdropView *_backdropView;
    SBVoiceControlViewController *_contentViewController;
}

@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths;
@property (nonatomic) BOOL shouldAllowSensitiveActions;
@property (nonatomic) BOOL shouldDisableHandlerActions;
@property (nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests;
@property (nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled;
@property (weak, nonatomic) id<SBVoiceControlTransientOverlayViewControllerDelegate> voiceControlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (BOOL)shouldAutorotate;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)handleHomeButtonPress;
- (BOOL)becomeFirstResponder;
- (void)setContainerOrientation:(long long)a0;
- (id)initWithSource:(id)a0;
- (void)conformsToCSExternalBehaviorProviding;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)conformsToCSBehaviorProviding;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)idleTimerMode;
- (BOOL)canBecomeFirstResponder;
- (long long)idleTimerDuration;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)resignFirstResponder;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (long long)idleWarnMode;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canResignFirstResponder;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (BOOL)shouldDisableOrientationUpdates;
- (void)beginIgnoringAppearanceUpdates;
- (void)endIgnoringAppearanceUpdates;
- (void)handleGestureDismissal;
- (void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)prefersProximityDetectionEnabled;
- (void)resetSessionWithSource:(id)a0;
- (void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)a0;
- (void)voiceControlViewControllerRequestsDismissal:(id)a0;

@end

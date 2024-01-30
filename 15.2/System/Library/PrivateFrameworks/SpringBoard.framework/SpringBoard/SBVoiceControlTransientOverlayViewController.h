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

- (long long)preferredWhitePointAdaptivityStyle;
- (long long)idleWarnMode;
- (long long)preferredStatusBarStyle;
- (void)setContainerOrientation:(long long)a0;
- (void)viewDidLoad;
- (BOOL)canResignFirstResponder;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleHomeButtonPress;
- (long long)idleTimerMode;
- (BOOL)_canShowWhileLocked;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)conformsToCSBehaviorProviding;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (int)_preferredStatusBarVisibility;
- (id)initWithSource:(id)a0;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (BOOL)shouldAutorotate;
- (long long)idleTimerDuration;
- (void)conformsToCSExternalBehaviorProviding;
- (long long)preferredUnlockedGestureDismissalStyle;
- (void)beginIgnoringAppearanceUpdates;
- (void)endIgnoringAppearanceUpdates;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (void)handleGestureDismissal;
- (long long)preferredLockedGestureDismissalStyle;
- (BOOL)shouldDisableOrientationUpdates;
- (BOOL)prefersProximityDetectionEnabled;
- (void)resetSessionWithSource:(id)a0;
- (void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)a0;
- (void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)a0;
- (void)voiceControlViewControllerRequestsDismissal:(id)a0;

@end

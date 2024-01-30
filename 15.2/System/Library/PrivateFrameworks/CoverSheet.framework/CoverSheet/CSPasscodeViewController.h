@class UIView, NSString, SBUIProudLockContainerViewController, CSPasscodeBackgroundView, CSLockScreenPearlSettings, SBFAuthenticationAssertion, CSFaceOcclusionMonitor, UIColor;
@protocol CSWallpaperColorProvider, SBUIPasscodeLockView_Internal, CSPasscodeViewControllerDelegate, CSCoverSheetContextProviding;

@interface CSPasscodeViewController : CSCoverSheetViewControllerBase <SBUIPasscodeLockViewDelegate, PTSettingsKeyObserver> {
    BOOL _attemptingUnlock;
    SBFAuthenticationAssertion *_sustainAuthenticationAssertion;
    unsigned long long _options;
    UIView<SBUIPasscodeLockView_Internal> *_passcodeLockView;
    CSPasscodeBackgroundView *_backgroundView;
    BOOL _isBeingDismissedAfterInterstitialTransitionCancelled;
    CSLockScreenPearlSettings *_pearlSettings;
}

@property (weak, nonatomic) id<CSPasscodeViewControllerDelegate> delegate;
@property (nonatomic) BOOL useBiometricPresentation;
@property (nonatomic) BOOL biometricButtonsInitiallyVisible;
@property (nonatomic) BOOL showProudLock;
@property (retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewControllerToUpdate;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) UIColor *wallpaperAverageColorOverride;
@property (nonatomic) BOOL confirmedNotInPocket;
@property (retain, nonatomic) id<CSCoverSheetContextProviding> coverSheetContext;
@property (retain, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (retain, nonatomic) CSFaceOcclusionMonitor *faceOcclusionMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)presentationStyle;
- (id)initWithOptions:(unsigned long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (long long)presentationPriority;
- (void)loadView;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void)viewDidDisappear:(BOOL)a0;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)displayLayoutElementIdentifier;
- (long long)presentationTransition;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)passcodeLockViewStateChange:(id)a0;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)a0;
- (void)passcodeLockViewCancelButtonPressed:(id)a0;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)a0;
- (void)passcodeLockViewPasscodeEntered:(id)a0;
- (void)passcodeLockViewPasscodeDidChange:(id)a0;
- (void)_passcodeLockViewPasscodeEntered:(id)a0 authenticationType:(unsigned long long)a1;
- (BOOL)presentationCancelsTouches;
- (struct CAFrameRateRange { float x0; float x1; float x2; })presentationPreferredFrameRateRange;
- (unsigned int)presentationFrameRateRangeReason;
- (void)_updateProudLockViewControllerConfiguration;
- (void)beginInteractivePresentationTransitionForInitialTransition:(BOOL)a0;
- (void)updateInteractiveTransitionWithPercent:(double)a0 forInitialTransition:(BOOL)a1;
- (void)endInteractiveTransitionToPresented:(BOOL)a0 forInitialTransition:(BOOL)a1;
- (void)commitingToEndTransitionToPresented:(BOOL)a0 forInitialTransition:(BOOL)a1;
- (void)_setBiometricAuthenticationEnabledForTransientAppearanceTransition:(BOOL)a0;
- (BOOL)_shouldUseLightStylePasscodeView;
- (void)_updateReduceTransparencyBackingColor;
- (BOOL)_shouldEmulateInteractivePresentation;
- (void)_emulateInteractivePresentation;
- (id)_effectiveAverageWallpaperColor;

@end

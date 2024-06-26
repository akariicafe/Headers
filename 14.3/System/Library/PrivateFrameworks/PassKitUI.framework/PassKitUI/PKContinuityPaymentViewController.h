@class LAUIPhysicalButtonView, UILabel, PKContinuityPaymentCardSummaryView, UIVisualEffectView, UIViewController, PKAuthenticator, UIView, NSString, PKContinuityPaymentFaviconView, NSTimer, UIStackView, PKPaymentAuthorizationFooterView, PKRemotePaymentRequest, NSArray, PKPaymentAuthorizationStateMachine;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKContinuityPaymentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationStateMachineDelegate> {
    UIVisualEffectView *_backdropView;
    UIView *_dimmingBackgroundView;
    UIView *_compactRegion;
    LAUIPhysicalButtonView *_physicalButtonView;
    UILabel *_requestingDeviceLabel;
    UILabel *_requestingSiteLabel;
    UILabel *_priceLabel;
    UIView *_priceView;
    UIStackView *_summaryContainerView;
    PKContinuityPaymentCardSummaryView *_cardView;
    PKPaymentAuthorizationFooterView *_authorizationView;
    PKContinuityPaymentFaviconView *_faviconImage;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    BOOL _viewAppeared;
    BOOL _userIntentRequired;
    long long _userIntentStyle;
    long long _internalAuthenticationEvaluationState;
    BOOL _idleStateIsPasscode;
    long long _coachingState;
    long long _internalCoachingState;
    NSArray *_activeConstraints;
    NSArray *_defaultConstraints;
    NSArray *_compactConstraints;
    BOOL _authenticating;
    PKAuthenticator *_authenticator;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    NSTimer *_timeoutTimer;
    BOOL _attemptedTimeout;
}

@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;
@property (readonly, nonatomic) PKRemotePaymentRequest *remoteRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_timeoutFired;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRemotePaymentRequest:(id)a0;
- (BOOL)paymentPass:(id *)a0 paymentApplication:(id *)a1 fromAID:(id)a2;
- (void)_updateUserIntentStyle;
- (void)_updateCardView;
- (void)setProgressState:(long long)a0 string:(id)a1 animated:(BOOL)a2;
- (void)_resetAndScheduleTimeout;
- (void)_updateActiveConstraints;
- (void)setProgressState:(long long)a0 string:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)_updateUserIntentRequired;
- (void)_updateCoachingState;
- (void)_setUserIntentRequired:(BOOL)a0;
- (void)_updateProgressStateIfAuthenticatingWithBiometricFailure:(BOOL)a0;
- (void)_suspendAuthentication;
- (long long)_progressStateForAuthenticationWithBiometricFailure:(BOOL)a0;
- (void)_resumeAuthenticationWithPreviousError:(id)a0;
- (void)_didFailWithFatalError:(id)a0;
- (void)_didSucceedWithAuthorizationStateParam:(id)a0;
- (void)_didFailWithError:(id)a0;
- (void)_processClientCallback:(id)a0;
- (void)_invalidPaymentDataWithParam:(id)a0;
- (long long)_authenticatorPolicy;
- (void)_startEvaluationWithHasInitialAuthenticatorState:(BOOL)a0 initialAuthenticatorState:(unsigned long long)a1;
- (void)_setAuthenticating:(BOOL)a0;
- (BOOL)paymentAuthorizationStateMachine:(id)a0 didTransitionFromState:(unsigned long long)a1 toState:(unsigned long long)a2 withParam:(id)a3;
- (id)_evaluationRequestWithHasInitialAuthenticatorState:(BOOL)a0 initialAuthenticatorState:(unsigned long long)a1;
- (void)_updatePendingTransaction:(id)a0 withAuthorizationStateParam:(id)a1;
- (void)_setPasscodeViewController:(id)a0;
- (void)_cancelPassphrasePressed;
- (void)_setPassphraseViewController:(id)a0;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)authenticator:(id)a0 didTransitionToCoachingState:(long long)a1;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)dismissPasscodeViewController;
- (void)presentPassphraseViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)dismissPassphraseViewController;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)a0;
- (void)authorizationFooterViewDidChangeConstraints:(id)a0;
- (void)updatePaymentWithClientUpdate:(id)a0;
- (void)_didCancel;
- (void)cancelPressed:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)invalidate;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

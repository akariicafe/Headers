@class UIStackView, NSString, UIView, UILabel, NSObject, LAUIAuthenticationView, ASCredentialRequestPaneContext, ASCredentialRequestButton;
@protocol OS_dispatch_group, OS_os_activity, ASCredentialRequestSubPaneConfirmButtonDelegate;

@interface ASCredentialRequestConfirmButtonSubPane : ASCredentialRequestSubPane <LAUIAuthenticationDelegate> {
    UIStackView *_mainStackView;
    UIView *_containerView;
    BOOL _canPerformBiometricAuthentication;
    UIView *_authorizationButtonContainerView;
    LAUIAuthenticationView *_biometricsView;
    ASCredentialRequestPaneContext *_paneContext;
    NSObject<OS_os_activity> *_authorizationActivity;
    UILabel *_biometricLabel;
    id /* block */ _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
}

@property (copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) ASCredentialRequestButton *authorizationButton;
@property (weak, nonatomic) id<ASCredentialRequestSubPaneConfirmButtonDelegate> delegate;
@property (nonatomic) BOOL authorizationCapabilityEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createMainStackView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (unsigned long long)_authenticationMechanism;
- (void)_waitForTimeInterval:(double)a0 withGroup:(id)a1;
- (void)_addArrangedSpaceToMainStackView:(double)a0;
- (void)_authorizationButtonBioSelected:(id)a0;
- (void)_enterProcessingStateWithCompletionHandler:(id /* block */)a0;
- (void)_initializeAuthorizationButton;
- (void)_setGlyphViewGestureRecognizerEnabled:(BOOL)a0;
- (void)_windowDidBecomeKey:(id)a0;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)finishProcessingWithCompletionHandler:(id /* block */)a0;
- (void)invalidateProcessingState;
- (void)processBiometricMatchWithCompletionHandler:(id /* block */)a0;
- (void)showContinueButton;
- (id)_setUpAlertImageWithConstraints;
- (void)_authorizationWithPasscodeOrPasswordButtonSelected:(id)a0;
- (void)_authorizeAppleAccountWithPasswordButtonSelected:(id)a0;
- (void)_continueButtonTapped;
- (void)_disableBiometricView;
- (void)_enableLAUIAuthenticationMechanism;
- (BOOL)_isDelegateReadyForAuthorization;
- (id)_passcodeOrPasswordButtonTitle;
- (id)_passwordAuthenticationButtonTitle;
- (void)_performPasscodeOrPasswordValidation:(id /* block */)a0;
- (void)_setupBiometricButtonWithConstraints:(id)a0;
- (void)_setupLabelWithTitle:(id)a0 animated:(BOOL)a1;
- (void)_switchToAppleAccountPassword;
- (void)_switchToBiometricsView:(BOOL)a0 withAuthenticationMechanismEnabled:(BOOL)a1 showAlert:(BOOL)a2 alertString:(id)a3;
- (void)_switchToPasscodeOrPassword;
- (void)_updateLabelAnimatedWithTitle:(id)a0;
- (id)_verticalSpacerWithConstant:(double)a0;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;
- (void)biometricAuthenticationFailureWithAlertString:(id)a0;
- (void)setUpButtonInPaneContext:(id)a0 withUsername:(id)a1;
- (void)showAlertContinuingWithPassword:(BOOL)a0;
- (void)showAuthenticationMechanismForExternalPasswordCredential;
- (void)showContinueButtonWithTitle:(id)a0;
- (void)showContinueWithPasswordButton;

@end

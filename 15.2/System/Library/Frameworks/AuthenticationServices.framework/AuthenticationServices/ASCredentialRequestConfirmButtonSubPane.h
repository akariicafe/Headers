@class UIStackView, NSString, UIView, ASCredentialRequestPaneContext, LAUIAuthenticationView, NSObject, UILabel, ASCredentialRequestButton;
@protocol OS_dispatch_group, ASCredentialRequestSubPaneConfirmButtonDelegate;

@interface ASCredentialRequestConfirmButtonSubPane : ASCredentialRequestSubPane <LAUIAuthenticationDelegate> {
    UIStackView *_mainStackView;
    UIView *_containerView;
    BOOL _canPerformBiometricAuthentication;
    UIView *_authorizationButtonContainerView;
    LAUIAuthenticationView *_biometricsView;
    ASCredentialRequestPaneContext *_paneContext;
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

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_initializeAuthorizationButton;
- (void)_windowDidBecomeKey:(id)a0;
- (void)_enableLAUIAuthenticationMechanism;
- (void)_switchToBiometricsView:(BOOL)a0 withAuthenticationMechanismEnabled:(BOOL)a1 showAlert:(BOOL)a2 alertString:(id)a3;
- (void)_switchToAppleAccountPassword;
- (id)_passcodeOrPasswordButtonTitle;
- (void)_authorizeAppleAccountWithPasswordButtonSelected:(id)a0;
- (void)_authorizationButtonBioSelected:(id)a0;
- (void)_authorizationWithPasscodeOrPasswordButtonSelected:(id)a0;
- (void)_continueButtonTapped;
- (void)_performPasscodeOrPasswordValidation:(id /* block */)a0;
- (BOOL)_isDelegateReadyForAuthorization;
- (void)_disableBiometricView;
- (void)_addArrangedSpaceToMainStackView:(double)a0;
- (id)_setUpAlertImageWithConstraints;
- (void)_setupLabelWithTitle:(id)a0 animated:(BOOL)a1;
- (void)_setupBiometricButtonWithConstraints:(id)a0;
- (id)_verticalSpacerWithConstant:(double)a0;
- (void)_updateLabelAnimatedWithTitle:(id)a0;
- (id)_passwordAuthenticationButtonTitle;
- (void)_setGlyphViewGestureRecognizerEnabled:(BOOL)a0;
- (void)_waitForTimeInterval:(double)a0 withGroup:(id)a1;
- (void)invalidateProcessingState;
- (void)_switchToPasscodeOrPassword;
- (void)_enterProcessingStateWithCompletionHandler:(id /* block */)a0;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)processBiometricMatchWithCompletionHandler:(id /* block */)a0;
- (void)showContinueWithPasswordButton;
- (void)showAlertContinuingWithPassword:(BOOL)a0;
- (void)setUpButtonInPaneContext:(id)a0;
- (void)showContinueButton;
- (void)showAuthenticationMechanismForExternalPasswordCredential;
- (void)biometricAuthenticationFailureWithAlertString:(id)a0;
- (void)finishProcessingWithCompletionHandler:(id /* block */)a0;

@end

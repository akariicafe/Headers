@class UIStackView, NSString, UIView, AKAuthorizationPaneContext, AKAuthorizationButton, AKAuthorizationPresentationContext, LAUIAuthenticationView, NSObject, UILabel;
@protocol OS_dispatch_group, AKAuthorizationSubPaneConfirmButtonDelegate;

@interface AKAuthorizationSubPaneConfirmButton : AKAuthorizationSubPane <LAUIAuthenticationDelegate> {
    id /* block */ _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
}

@property (retain, nonatomic) AKAuthorizationPaneContext *context;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (retain, nonatomic) UIStackView *mainStackView;
@property (readonly, nonatomic) UIView *authorizationButtonContainer;
@property (nonatomic) BOOL hasTouchIDOnly;
@property (nonatomic) BOOL canPerformBiometricValidation;
@property (retain, nonatomic) UILabel *bioLabel;
@property (retain, nonatomic) LAUIAuthenticationView *bioView;
@property BOOL isPasscodeAuthorizationInProcess;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *bioTextForInactiveState;
@property (readonly, nonatomic) AKAuthorizationButton *authorizationButton;
@property (weak, nonatomic) id<AKAuthorizationSubPaneConfirmButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createMainStackView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_passcodeButtonTitle;
- (unsigned long long)_authenticationMechanism;
- (id)initWithPresentationContext:(id)a0;
- (id)_bioButtonTitle;
- (void)_disableBioView;
- (void)_setupBioButtonWithConstraints:(id)a0;
- (void)_waitForTimeInterval:(double)a0 withGroup:(id)a1;
- (BOOL)_hasTouchIDOnly;
- (void)_addArrangedSpaceToMainStackView:(double)a0;
- (void)_authorizationButtonBioSelected:(id)a0;
- (void)_authorizationButtonExternalAuthenticationSelected:(id)a0;
- (void)_authorizationButtonSkipBioSelected:(id)a0;
- (void)_authorizationButtonWithAccountPasswordSelected:(id)a0;
- (void)_authorizationWithPasscodeButtonSelected:(id)a0;
- (BOOL)_delegate_validateReadyForAuthorization;
- (void)_enableLAUIAuthMechanism;
- (void)_enterProcessingStateWithCompletionHandler:(id /* block */)a0;
- (void)_handleBiometricAuthFailureWithError:(id)a0 forContext:(id)a1;
- (void)_initializeAuthorizationButton;
- (BOOL)_isSubscriptionFlow;
- (BOOL)_isUpgradeFromPassword;
- (id)_passwordButtonTitle;
- (void)_performPasscodeValidations:(id /* block */)a0;
- (void)_setGlyphViewGestureRecognizerEnabled:(BOOL)a0;
- (void)_setupAlertImageWithConstraints:(id)a0;
- (void)_setupLabelWithTitle:(id)a0 withConstraints:(id)a1 animated:(BOOL)a2;
- (BOOL)_shouldUseSIWAButton;
- (id)_spaceWithConstant:(double)a0;
- (void)_switchToBioView:(BOOL)a0 withEnabled:(BOOL)a1 showAlert:(BOOL)a2 alertString:(id)a3;
- (void)_switchToPasscode;
- (void)_updateLabelWithTitle:(id)a0;
- (void)_windowDidBecomeKey:(id)a0;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (void)addToStackView:(id)a0 context:(id)a1;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)bioAuthFailWithAlertString:(id)a0;
- (void)enableAuthorizationCapability:(BOOL)a0;
- (void)finishProcessingWithCompletionHandler:(id /* block */)a0;
- (void)invalidateProcessingState;
- (void)processAuthenticationSuccessWithCompletionHandler:(id /* block */)a0;
- (void)setUpButtonToPaneContext:(id)a0;
- (void)showAlertAndContinueWithPassword:(BOOL)a0;

@end

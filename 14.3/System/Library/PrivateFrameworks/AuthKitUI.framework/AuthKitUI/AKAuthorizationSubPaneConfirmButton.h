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
@property BOOL hasTouchIDOnly;
@property BOOL canPerformBiometricValidation;
@property (retain, nonatomic) UILabel *bioLabel;
@property (retain, nonatomic) LAUIAuthenticationView *bioView;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *bioTextForInactiveState;
@property (readonly, nonatomic) AKAuthorizationButton *authorizationButton;
@property (weak, nonatomic) id<AKAuthorizationSubPaneConfirmButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createMainStackView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_windowDidBecomeKey:(id)a0;
- (id)_passcodeButtonTitle;
- (id)initWithPresentationContext:(id)a0;
- (void)addToStackView:(id)a0 context:(id)a1;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (void)enableAuthorizationCapability:(BOOL)a0;
- (void)setUpButtonToPaneContext:(id)a0;
- (void)bioAuthFailWithAlertString:(id)a0;
- (void)showAlertAndContinueWithPassword:(BOOL)a0;
- (void)finishProcessingWithCompletionHandler:(id /* block */)a0;
- (void)invalidateProcessingState;
- (void)_initializeAuthorizationButton;
- (BOOL)_shouldUseSIWAButton;
- (void)_authorizationButtonSkipBioSelected:(id)a0;
- (id)_passwordButtonTitle;
- (void)_authorizationButtonWithAccountPasswordSelected:(id)a0;
- (void)_authorizationButtonBioSelected:(id)a0;
- (void)_authorizationWithPasscodeButtonSelected:(id)a0;
- (BOOL)_delegate_validateReadyForAuthorization;
- (void)_switchToBioView:(BOOL)a0 withEnabled:(BOOL)a1 showAlert:(BOOL)a2 alertString:(id)a3;
- (void)_performPasscodeValidations:(id /* block */)a0;
- (void)_enableLAUIAuthMechanism;
- (void)_disableBioView;
- (void)_addArrangedSpaceToMainStackView:(double)a0;
- (void)_setupAlertImageWithConstraints:(id)a0;
- (void)_setupLabelWithTitle:(id)a0 withConstraints:(id)a1 animated:(BOOL)a2;
- (void)_setupBioButtonWithConstraints:(id)a0;
- (id)_spaceWithConstant:(double)a0;
- (void)_updateLabelWithTitle:(id)a0;
- (void)_switchToPasscode;
- (void)_enterProcessingStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)_hasTouchIDOnly;
- (void)_waitForTimeInterval:(double)a0 withGroup:(id)a1;
- (void)_setGlyphViewGestureRecognizerEnabled:(BOOL)a0;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)processBiometricMatchWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isUpgradeFromPassword;

@end

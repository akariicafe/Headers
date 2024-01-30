@class NSString, AKBasicLoginSecondFactorActions, AKBasicLoginActions;
@protocol NSObject, AKBasicLoginControllerDelegate;

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKSecondFactorCodeEntry, AKBasicLoginAnimateProtocol> {
    long long _alertStyle;
    id<NSObject> _didEnterCodeObserver;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *authenticateTitle;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *authenticateButtonTitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *generatedCode;
@property (nonatomic) long long alertStyle;
@property (copy, nonatomic) AKBasicLoginActions *loginActions;
@property (copy, nonatomic) AKBasicLoginSecondFactorActions *secondFactorActions;
@property (weak, nonatomic) id<AKBasicLoginControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void)stopAnimating;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)setPasscodeFieldDisabled:(BOOL)a0;
- (id)_passwordField;
- (void)clearPasswordField;
- (void)jiggleAView;
- (void)clearSecondFactorEntry;
- (id)initWithAlertStyle:(long long)a0;
- (void)_setupViewControllerForAlertStyle;
- (void)_endObservingDidEnterCodeNotifications;
- (void)_setupViewControllerForDefaultStyle;
- (void)_setupViewControllerForNonEditableUsernameFieldStyle;
- (void)_setupViewControllerForUserOrCreateAppleIDStyle;
- (void)_setupViewControllerForIForgotStyle;
- (void)_setupViewControllerForSecondFactorEntryStyle;
- (void)_setupAuthenticateAndCancelButtonsWithIForgot:(BOOL)a0;
- (void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
- (void)_dismissAndShowiForgot:(id)a0;
- (id)_wrappedCancelAction;
- (void)_passwordFieldDidChange:(id)a0;
- (void)_setupAuthenticateAndCancelButtons;
- (void)_didEnterCode:(id)a0;
- (void)_beginObservingDidEnterCodeNotifications;

@end

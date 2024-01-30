@class UIColor, NSString, UIActivityIndicatorView, AKTextField, UIView, AKAppleIDAuthenticationInAppContext, UIButton;

@interface AKInlineSignInViewController : AKBaseSignInViewController <UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate> {
    BOOL _usesDarkMode;
    BOOL _usesVibrancy;
    BOOL _createAppleIDAllowed;
    long long _blurEffectStyle;
    NSString *_secondaryButtonTitle;
    NSString *_tertiaryButtonTitle;
    AKAppleIDAuthenticationInAppContext *_context;
    id /* block */ _passwordRequiredCompletion;
}

@property (retain) UIView *loginFieldsContainer;
@property (retain) AKTextField *appleIDField;
@property (retain) AKTextField *passwordField;
@property (retain) UIButton *signInButton;
@property (retain) UIButton *iforgotButton;
@property (retain) UIButton *createAppleIDButton;
@property (retain) UIActivityIndicatorView *spinner;
@property BOOL wantsAuthenticationProgress;
@property (nonatomic) long long blurEffectStyle;
@property (nonatomic) BOOL usesVibrancy;
@property (readonly) NSString *primaryButtonTitle;
@property (copy) NSString *secondaryButtonTitle;
@property (copy) NSString *tertiaryButtonTitle;
@property (retain, nonatomic) UIColor *fieldBackgroundColor;
@property (retain, nonatomic) UIColor *entryDescriptionTextColor;
@property (retain, nonatomic) UIColor *entryFieldTextColor;
@property (nonatomic, getter=isPrimaryButtonHidden) BOOL primaryButtonHidden;
@property (nonatomic) BOOL shouldPromptForPasswordOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setUsesDarkMode:(BOOL)a0;
- (id)context;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)stopAnimating;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)setContext:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setSecondaryButtonTarget:(id)a0 action:(SEL)a1;
- (void)setTertiaryButtonTarget:(id)a0 action:(SEL)a1;
- (void)signInButtonWasTapped:(id)a0;
- (void)_updateFonts:(id)a0;
- (void)_setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)usesDarkMode;
- (void)refreshCreateAppleIDButton;
- (void)iForgotButtonWasTapped:(id)a0;
- (void)createAppleIDButtonWasTapped:(id)a0;
- (void)_prefillAuthFields;
- (void)_updateSignInFieldStatuses;
- (void)_appleIDTextFieldDidChange:(id)a0;
- (void)_passwordTextFieldDidChange:(id)a0;
- (void)_updateVibrancyAndBlurInTextFields;
- (void)_updatePlaceholderIfNeeded;
- (void)_updateSignInButtonState;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)a0;

@end

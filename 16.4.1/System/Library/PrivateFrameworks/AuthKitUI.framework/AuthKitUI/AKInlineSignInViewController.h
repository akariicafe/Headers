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

@property (retain, nonatomic) UIView *loginFieldsContainer;
@property (retain, nonatomic) AKTextField *appleIDField;
@property (retain, nonatomic) AKTextField *passwordField;
@property (retain, nonatomic) UIButton *signInButton;
@property (retain, nonatomic) UIButton *iforgotButton;
@property (retain, nonatomic) UIButton *createAppleIDButton;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL wantsAuthenticationProgress;
@property (nonatomic) long long blurEffectStyle;
@property (nonatomic) BOOL usesVibrancy;
@property (readonly, nonatomic) NSString *primaryButtonTitle;
@property (copy, nonatomic) NSString *secondaryButtonTitle;
@property (copy, nonatomic) NSString *tertiaryButtonTitle;
@property (retain, nonatomic) UIColor *fieldBackgroundColor;
@property (retain, nonatomic) UIColor *entryDescriptionTextColor;
@property (retain, nonatomic) UIColor *entryFieldTextColor;
@property (nonatomic, getter=isPrimaryButtonHidden) BOOL primaryButtonHidden;
@property (nonatomic) BOOL shouldPromptForPasswordOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)setContext:(id)a0;
- (id)context;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)setUsesDarkMode:(BOOL)a0;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)setTertiaryButtonTarget:(id)a0 action:(SEL)a1;
- (void)setSecondaryButtonTarget:(id)a0 action:(SEL)a1;
- (void)_appleIDTextFieldDidChange:(id)a0;
- (void)_applyStyleForButton:(id)a0;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)a0;
- (void)_passwordTextFieldDidChange:(id)a0;
- (void)_prefillAuthFields;
- (void)_setButtonTitles;
- (void)_setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateFonts:(id)a0;
- (void)_updatePlaceholderIfNeeded;
- (void)_updateSignInButtonState;
- (void)_updateSignInFieldStatuses;
- (void)_updateVibrancyAndBlurInTextFields;
- (void)createAppleIDButtonWasTapped:(id)a0;
- (void)iForgotButtonWasTapped:(id)a0;
- (void)refreshCreateAppleIDButton;
- (void)signInButtonWasTapped:(id)a0;
- (BOOL)usesDarkMode;

@end

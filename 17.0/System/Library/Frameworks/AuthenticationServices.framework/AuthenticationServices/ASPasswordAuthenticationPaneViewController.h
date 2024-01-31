@class ASCAuthorizationPresentationContext, NSString, UITextField, ASCredentialRequestButtonContinue, UILabel, NSLayoutConstraint;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController <UITextFieldDelegate> {
    ASCAuthorizationPresentationContext *_presentationContext;
    double _keyboardHeight;
    unsigned long long _persona;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextField *_usernameField;
    UITextField *_secureTextField;
    ASCredentialRequestButtonContinue *_signInButton;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
}

@property (weak, nonatomic) id<ASPasswordAuthenticationPaneViewControllerDelegate> authenticationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (id)_subtitleLabelFont;
- (id)_titleLabelFont;
- (void)viewDidLoad;
- (void)_keyboardWillShow:(id)a0;
- (BOOL)resignFirstResponder;
- (void)_keyboardWillHide:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)_setConstraints;
- (void)_createViews;
- (id)_titleLabelText;
- (id)_titleLabelTextColor;
- (void)_textFieldChanged:(id)a0;
- (void)_signInButtonTapped;
- (id)_secureTextFieldPlaceholderText;
- (void)_completeManualPasswordCredentialEntry;
- (double)_containerViewHorizontalMargin;
- (double)_intrinsicContentHeight;
- (void)_keyboardHeightDidChange;
- (id)_manualPasswordEntryTitleLabelText;
- (double)_secureTextFieldInsetMargin;
- (id)_securityKeyTitleLabelText;
- (void)_setUpAndAddIconImage;
- (void)_setUpSubtitleLabel;
- (void)_setUpUsernameLabel;
- (double)_signInButtonInsetMargin;
- (double)_topViewMargin;
- (id)initWithPersona:(unsigned long long)a0 presentationContext:(id)a1;

@end

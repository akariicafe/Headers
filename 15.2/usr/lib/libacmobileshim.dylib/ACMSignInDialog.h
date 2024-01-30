@class NSString, UITextField;
@protocol ACMSignInDialogDelegate;

@interface ACMSignInDialog : ACMDialog <UIAlertViewDelegate, ACMSignInDialogProtocol, UITextFieldDelegate>

@property (nonatomic) long long signInDialogState;
@property (nonatomic) BOOL userHasBegunEditingText;
@property (nonatomic) unsigned long long stateChangeCounter;
@property (retain, nonatomic) UITextField *accountNameField;
@property (retain, nonatomic) UITextField *passwordField;
@property NSString *passwordString;
@property (readonly) NSString *userNameString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property id<ACMSignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)cancel;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)canSignIn;
- (void)controlsWillChangeState:(BOOL)a0;
- (void)controlsDidChangeState:(BOOL)a0;
- (void)disableControls:(BOOL)a0;
- (BOOL)shouldAuthenticateOnUserInput;
- (void)onIForgot:(id)a0;
- (void)onSignIn:(id)a0;
- (void)onSignInCancel:(id)a0;

@end

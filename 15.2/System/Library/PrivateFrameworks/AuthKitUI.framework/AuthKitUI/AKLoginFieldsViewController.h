@class NSString, AKAppleIDAuthenticationContext, UITextField;
@protocol AKLoginFieldsDelegate;

@interface AKLoginFieldsViewController : UIViewController <UITextFieldDelegate, AKLoginFieldsViewControllerProtocol>

@property (weak, nonatomic) AKAppleIDAuthenticationContext *context;
@property (weak, nonatomic) UITextField *usernameField;
@property (weak, nonatomic) UITextField *passwordField;
@property (weak, nonatomic) id<AKLoginFieldsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)clearPassword;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_prepareUsernameField;
- (void)_preparePasswordField;
- (void)_hidePasswordIfNeeded;
- (id)usernameText;
- (id)passwordText;
- (void)showPasswordField;

@end

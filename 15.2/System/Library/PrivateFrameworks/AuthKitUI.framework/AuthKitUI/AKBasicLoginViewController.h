@class UIView, NSString, AKBasicLoginOptionsViewController, AKBasicLoginTableViewCell, UITableView, AKAppleIDAuthenticationInAppContext, NSLayoutConstraint, AKBasicLoginActions;
@protocol AKBasicLoginControllerDelegate;

@interface AKBasicLoginViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol>

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) UIView *loginOptions;
@property (retain, nonatomic) AKBasicLoginOptionsViewController *loginOptionsViewController;
@property (copy, nonatomic) id /* block */ passwordHandler;
@property (nonatomic) BOOL isPasswordFieldVisible;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain, nonatomic) AKBasicLoginTableViewCell *usernameCell;
@property (retain, nonatomic) AKBasicLoginTableViewCell *passwordCell;
@property (copy, nonatomic) AKBasicLoginActions *loginActions;
@property (weak, nonatomic) id<AKBasicLoginControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_title;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)isPresentedModally;
- (void)stopAnimating;
- (id)initWithContext:(id)a0;
- (BOOL)_canShowWhileLocked;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)_tableView;
- (void)loadView;
- (void)_keyboardWillShow:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)_setContentInset:(double)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)_cancelBarButtonItem;
- (void)_keyboardDidHide:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)_passwordCell;
- (id)_usernameCell;
- (id)_signInBarButtonItem;
- (void)clearPasswordField;
- (void)_updatePlaceholderIfNeeded;
- (void)_initializeView;
- (BOOL)_shouldShowUserName;
- (id)passwordCellTextField;
- (id)usernameCellTextField;
- (void)_cancelPressed:(id)a0;
- (void)_signInPressed:(id)a0;
- (id)_loginOptions;
- (BOOL)_shouldShowPassword;
- (void)_setPasswordHiddenIfNeeded;
- (void)initializeUsernameCellTextField:(id)a0;
- (void)initializePasswordCellTextField:(id)a0;

@end

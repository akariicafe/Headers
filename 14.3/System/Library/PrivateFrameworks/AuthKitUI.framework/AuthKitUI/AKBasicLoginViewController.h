@class UIView, NSString, AKBasicLoginOptionsViewController, AKBasicLoginTableViewCell, AKAppleIDAuthenticationInAppContext, UITableView, NSLayoutConstraint, AKBasicLoginActions;
@protocol AKBasicLoginControllerDelegate;

@interface AKBasicLoginViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol>

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AKBasicLoginTableViewCell *usernameCell;
@property (retain, nonatomic) AKBasicLoginTableViewCell *passwordCell;
@property (retain, nonatomic) UIView *loginOptions;
@property (retain, nonatomic) AKBasicLoginOptionsViewController *loginOptionsViewController;
@property (copy, nonatomic) AKBasicLoginActions *loginActions;
@property (weak, nonatomic) id<AKBasicLoginControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (id)_tableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_keyboardWillShow:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)isPresentedModally;
- (id)_passwordCell;
- (void)loadView;
- (void)_keyboardDidHide:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setContentInset:(double)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)_title;
- (id)_usernameCell;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (id)_cancelBarButtonItem;
- (void)_cancelPressed:(id)a0;
- (void)_updatePlaceholderIfNeeded;
- (id)_signInBarButtonItem;
- (id)_loginOptions;
- (BOOL)_shouldShowUserName;
- (void)_signInPressed:(id)a0;
- (void)clearPasswordField;

@end

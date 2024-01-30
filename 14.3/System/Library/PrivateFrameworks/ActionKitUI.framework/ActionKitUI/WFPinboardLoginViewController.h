@class WFPinboardSessionManager, NSString, UITextField, UIBarButtonItem;
@protocol WFPinboardLoginViewControllerDelegate;

@interface WFPinboardLoginViewController : UITableViewController <UITextFieldDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) WFPinboardSessionManager *sessionManager;
@property (weak, nonatomic) UITextField *usernameField;
@property (weak, nonatomic) UITextField *passwordField;
@property (weak, nonatomic) UITextField *tokenField;
@property (retain, nonatomic) UIBarButtonItem *loginItem;
@property (retain, nonatomic) UIBarButtonItem *loadingItem;
@property (weak, nonatomic) id<WFPinboardLoginViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)login;
- (void)cancel;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)accessibilityPerformEscape;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)viewDidLoad;
- (void)updateLoginButton;

@end

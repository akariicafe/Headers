@class NSString, UITextField, IKEngine, UIBarButtonItem;
@protocol WFInstapaperLoginViewControllerDelegate;

@interface WFInstapaperLoginViewController : UITableViewController <UITextFieldDelegate, IKEngineDelegate>

@property (retain, nonatomic) IKEngine *engine;
@property (weak, nonatomic) UITextField *usernameField;
@property (weak, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) UIBarButtonItem *loginItem;
@property (retain, nonatomic) UIBarButtonItem *loadingItem;
@property (weak, nonatomic) id<WFInstapaperLoginViewControllerDelegate> delegate;
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
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)viewDidLoad;
- (void)engine:(id)a0 didFailConnection:(id)a1 error:(id)a2;
- (void)engine:(id)a0 connection:(id)a1 didReceiveAuthToken:(id)a2 andTokenSecret:(id)a3;
- (void)updateLoginButton;

@end

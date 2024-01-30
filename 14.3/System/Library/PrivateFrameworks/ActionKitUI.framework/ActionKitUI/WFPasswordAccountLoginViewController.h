@class UIBarButtonItem, NSString, UITextField, NSURL, NSDictionary, UITableView;

@interface WFPasswordAccountLoginViewController : WFAccountLoginViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>

@property (readonly, weak, nonatomic) UITextField *usernameField;
@property (readonly, weak, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) UIBarButtonItem *loginItem;
@property (retain, nonatomic) UIBarButtonItem *loadingItem;
@property (readonly, weak, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSURL *loginURL;
@property (copy, nonatomic) NSDictionary *textFieldsByIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)cancelPressed:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (id)initWithAccountClass:(Class)a0;
- (BOOL)usernameIsEmail;
- (void)loginWithUsername:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
- (void)configureTextField:(id)a0 forKey:(id)a1;
- (BOOL)canAttemptLogin;
- (void)loginPressed:(id)a0;

@end

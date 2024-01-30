@class UITextField;

@interface WFWordPressLoginViewController : WFPasswordAccountLoginViewController

@property (readonly, weak, nonatomic) UITextField *blogField;

- (void).cxx_destruct;
- (id)loginURL;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithAccountClass:(Class)a0;
- (void)loginWithUsername:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
- (void)configureTextField:(id)a0 forKey:(id)a1;
- (BOOL)canAttemptLogin;

@end

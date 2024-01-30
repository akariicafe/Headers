@interface WFCloudAppLoginViewController : WFPasswordAccountLoginViewController

- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)loginURL;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (id)initWithAccountClass:(Class)a0;
- (BOOL)usernameIsEmail;
- (void)loginWithUsername:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;

@end

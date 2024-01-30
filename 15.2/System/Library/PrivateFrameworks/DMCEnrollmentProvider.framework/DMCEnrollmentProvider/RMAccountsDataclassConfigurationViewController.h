@interface RMAccountsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController

- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;
- (id)titleForDeleteButton;
- (Class)accountInfoControllerClass;
- (id)messageForAccountDeletionWarning;
- (void)_reloadSpecifiersAndDeleteAccountButton;

@end

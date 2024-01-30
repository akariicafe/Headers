@interface RMAccountsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController

- (void)viewDidLoad;
- (id)specifiers;
- (Class)accountInfoControllerClass;
- (id)messageForAccountDeletionWarning;
- (id)titleForDeleteButton;
- (void)_reloadSpecifiersAndDeleteAccountButton;

@end

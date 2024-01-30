@class RMConfigurationsSpecifierProvider, DMCManagedAccountsSpecifierProvider, DMCMDMDetailsSpecifierProvider;

@interface DMCAccountPageViewController : ACUIDataclassConfigurationViewController

@property (retain, nonatomic) DMCManagedAccountsSpecifierProvider *managedAccountsProvider;
@property (retain, nonatomic) DMCMDMDetailsSpecifierProvider *mdmSpecifierProvider;
@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmConfigurationsProvider;

- (id)specifiers;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_setupControllers;
- (void)_updateControllers;
- (id)titleForDeleteButton;
- (void)_reauthPasswordTapped:(id)a0;
- (void)_reloadSpecifiersAndDeleteAccountButton;

@end

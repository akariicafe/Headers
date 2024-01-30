@class UIBarButtonItem, SFAccountPickerConfiguration, WBSSavedAccount, NSMutableArray, NSString, LAContext, SFAddSavedAccountViewController, NSMutableSet, SFAccountDetailViewController, NSArray, WBSPasskeyAutoFillFromNearbyDeviceOptions, WBSAuthenticationServicesAgentProxy, NSIndexPath;
@protocol _SFAccountPickerTableViewControllerDelegate;

@interface _SFAccountPickerTableViewController : _SFAccountTableViewController <SFAccountDetailViewControllerDelegate, SFAccountTableViewCellDelegate, SFAddSavedAccountViewControllerDelegate, _SFTableLinkableFooterViewDelegate> {
    NSMutableArray *_savedAccountsMatchingHintStrings;
    NSMutableArray *_savedAccounts;
    NSMutableArray *_matchingSavedAccounts;
    NSArray *_autoFillPasskeys;
    NSMutableArray *_savedAccountWithUsablePasskeys;
    WBSPasskeyAutoFillFromNearbyDeviceOptions *_passkeyNearbyDeviceOptions;
    long long _sectionForPasskeys;
    WBSAuthenticationServicesAgentProxy *_authenticationServicesAgentProxy;
    long long _sectionForPasswordsMatchingHintStrings;
    long long _sectionForAllPasswords;
    NSIndexPath *_indexPathOfRowShowingDetailView;
    UIBarButtonItem *_addNavigationBarItem;
    SFAddSavedAccountViewController *_addPasswordViewController;
    NSMutableSet *_selectedSavedAccounts;
    SFAccountDetailViewController *_detailViewController;
}

@property (weak, nonatomic) id<_SFAccountPickerTableViewControllerDelegate> delegate;
@property (readonly, nonatomic) SFAccountPickerConfiguration *configuration;
@property (retain, nonatomic) LAContext *authenticatedContext;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)_cancel;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_accountStoreDidChange;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_updateSections;
- (void)_addExistingPasswordsBarItemTapped:(id)a0;
- (void)_addNavigationBarItemTapped:(id)a0;
- (void)_deletePasswordAtIndexPath:(id)a0;
- (void)_didPickSavedAccountForPassword:(id)a0;
- (void)_presentAddPasswordViewController;
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPath:(id)a0;
- (void)_presentErrorAlertWithString:(id)a0;
- (void)_reloadSavedAccountsWithCompletionHandler:(id /* block */)a0;
- (long long)_rowTypeForIndexPath:(id)a0;
- (id)_savedAccountForIndexPath:(id)a0;
- (BOOL)_shouldShowAutoFillPasskeys;
- (BOOL)_shouldShowPasswordsMatchingHintStringsSection;
- (void)_updateMatchingPasswords;
- (void)_updateNavigationBarItems;
- (void)_updateNavigationItemTitleAndPrompt;
- (void)addSavedAccountViewControllerDidFinish:(id)a0 withSavedAccount:(id)a1;
- (void)handleContextMenuDeleteForIndexPath:(id)a0;
- (void)handleIconDidUpdateForDomain:(id)a0;
- (id)iconControllerForAddSavedAccountDetailViewController:(id)a0;
- (void)linkableFooterViewDidInteractWithLink:(id)a0;
- (void)newAutoFillablePasskeysAvailable:(id)a0;
- (void)reloadTable;
- (void)searchPatternDidUpdate;

@end

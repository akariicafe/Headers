@class NSIndexPath, NSString, UIBarButtonItem, NSMutableArray, SFPasswordPickerConfiguration;
@protocol _SFPasswordPickerTableViewControllerDelegate;

@interface _SFPasswordPickerTableViewController : _SFPasswordTableViewController <SFAddPasswordViewControllerDelegate, _SFTableLinkableFooterViewDelegate> {
    NSMutableArray *_savedPasswordsMatchingHintStrings;
    NSMutableArray *_savedPasswords;
    NSMutableArray *_matchingPasswords;
    long long _sectionForPasswordsMatchingHintStrings;
    long long _sectionForAllPasswords;
    NSIndexPath *_indexPathOfRowShowingDetailView;
    UIBarButtonItem *_addNavigationBarItem;
}

@property (weak, nonatomic) id<_SFPasswordPickerTableViewControllerDelegate> delegate;
@property (readonly, nonatomic) SFPasswordPickerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_cancel;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)handleContextMenuDeleteForIndexPath:(id)a0;
- (void)searchPatternDidUpdate;
- (void)_passwordStoreDidChange;
- (void)_addNavigationBarItemTapped:(id)a0;
- (void)addPasswordViewControllerDidFinish:(id)a0 withSavedPassword:(id)a1;
- (void)linkableFooterViewDidInteractWithLink:(id)a0;
- (void)_reloadSavedPasswords;
- (void)_updateMatchingPasswords;
- (void)_deletePasswordAtIndexPath:(id)a0;
- (void)_presentAddPasswordViewController;
- (void)_didPickSavedPassword:(id)a0;
- (void)_updateSections;
- (long long)_rowTypeForIndexPath:(id)a0;
- (id)_passwordForIndexPath:(id)a0;
- (BOOL)_shouldShowPasswordsMatchingHintStringsSection;

@end

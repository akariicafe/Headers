@class NSIndexPath, NSMutableArray, _SFPasswordPickerTableConfiguration;
@protocol _SFPasswordPickerTableViewControllerDelegate;

@interface _SFPasswordPickerTableViewController : _SFPasswordTableViewController {
    NSMutableArray *_savedPasswordsMatchingHintStrings;
    NSMutableArray *_savedPasswords;
    NSMutableArray *_matchingPasswords;
    long long _sectionForPasswordsMatchingHintStrings;
    long long _sectionForAllPasswords;
    NSIndexPath *_indexPathOfRowShowingDetailView;
}

@property (weak, nonatomic) id<_SFPasswordPickerTableViewControllerDelegate> delegate;
@property (readonly, nonatomic) _SFPasswordPickerTableConfiguration *configuration;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_reloadSavedPasswords;
- (id)_passwordForIndexPath:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_deletePasswordAtIndexPath:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void)_updateSections;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_passwordStoreDidChange;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_updateMatchingPasswords;
- (void)handleContextMenuDeleteForIndexPath:(id)a0;
- (void)searchPatternDidUpdate;
- (void)_cancel;
- (void)viewDidLoad;

@end

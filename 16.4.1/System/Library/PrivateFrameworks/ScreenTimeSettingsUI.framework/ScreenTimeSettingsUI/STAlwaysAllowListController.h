@class NSArray, STAlwaysAllowList, PSSpecifier, NSSet;
@protocol STAlwaysAllowListControllerDelegate;

@interface STAlwaysAllowListController : STPINListViewController

@property (retain) PSSpecifier *allowedContactsSpecifier;
@property (retain, nonatomic) PSSpecifier *allowedAppsGroupSpecifier;
@property (retain, nonatomic) NSArray *allowedAppsSpecifiers;
@property (retain, nonatomic) PSSpecifier *chooseAppsGroupSpecifier;
@property (retain, nonatomic) NSArray *chooseAppsSpecifiers;
@property (weak, nonatomic) id<STAlwaysAllowListControllerDelegate> delegate;
@property (copy, nonatomic) STAlwaysAllowList *alwaysAllowList;
@property (copy, nonatomic) NSArray *chooseBundleIDs;
@property (copy, nonatomic) NSSet *installedBundleIDs;

- (void)willResignActive;
- (void)setCoordinator:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)init;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (id)_allowedContactsDuringDowntimeText:(id)a0;
- (void)_alwaysAllowListDidChange:(id)a0;
- (void)_communicationLimitsDidChangeFrom:(id)a0 to:(id)a1;
- (void)_insertAllowedAppSpecifier:(id)a0;
- (void)_removeAllowedAppSpecifier:(id)a0;
- (id)appSpecifiersForBundleIDs:(id)a0;
- (id)createAllowedAppsSpecifiers;
- (id)createChooseAppsSpecifiers;
- (void)removeAllowedIdentifier:(id)a0 withSpecifier:(id)a1;
- (id)removeMessagesConfirmationPrompt;

@end

@class STAllowanceItemSearchResultsController, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface STAllowanceItemSetupListController : PSListController <UISearchControllerDelegate>

@property BOOL allAppsAndCategoriesSelected;
@property (readonly) NSMutableOrderedSet *selectedBundleIdentifiers;
@property (readonly) NSMutableOrderedSet *selectedWebDomains;
@property (readonly) NSMutableOrderedSet *selectedCategoryIdentifiers;
@property (copy) NSArray *categorySpecifiers;
@property (readonly, nonatomic) NSMutableDictionary *applicationAndWebDomainSpecifiersByCategoryIdentifier;
@property (retain) STAllowanceItemSearchResultsController *searchResultsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (void)setSpecifier:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (id)init;
- (BOOL)canBeShownFromSuspendedState;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (id)_categoryDetailText:(id)a0;
- (void)_didPressCancelButton:(id)a0;
- (void)_didPressDoneButton:(id)a0;
- (void)_selectCellsForSelectedIdentifiers:(id)a0;
- (void)_showNewCategoriesCompatibilityAlertIfNeeded;
- (void)_hasSelectionDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (void)_updateApplicationSpecifiersWithBundleIdentifier:(id)a0 categoryIdentifier:(id)a1 shouldInsertSpecifier:(BOOL)a2;
- (id)_webDomainSpecifierForDomain:(id)a0;
- (void)_addWebsiteButtonPressed:(id)a0;
- (id)_categorySpecifierForIdentifier:(id)a0;
- (id)_applicationSpecifierForBundleIdentifier:(id)a0 categoryIdentifier:(id)a1;
- (void)_addCustomWebDomain:(id)a0 specifier:(id)a1;
- (void)_cleanUpRetainCycles;

@end

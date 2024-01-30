@class UIBarButtonItem, NSString, PSSpecifier, NSArray, NSMutableDictionary, NSMutableArray, UISearchController;

@interface SafariStorageSettingsController : PSEditableListController <UISearchControllerDelegate, UISearchResultsUpdating> {
    UISearchController *_searchController;
    NSString *_searchPattern;
    BOOL _hasLoadedDomains;
    BOOL _isShowingAllDomains;
    UIBarButtonItem *_editToolbarItem;
    UIBarButtonItem *_doneToolbarItem;
    PSSpecifier *_totalUsageSpecifier;
    NSArray *_deleteButtonSpecifiers;
    NSMutableDictionary *_domainSpecifiers;
    NSMutableArray *_sortedDomains;
    BOOL _cancelDomainSpecifierUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deleteAllData;
+ (void)_clearContentBlockerStatistics;

- (id)specifiers;
- (void)willPresentSearchController:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)setEditable:(BOOL)a0;
- (void).cxx_destruct;
- (void)_setContentInset:(double)a0;
- (void)_updateToolbarItems;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)_toggleEditing;
- (void)_showDeleteAllOriginsAlert;
- (void)_createDomainSpecifiers;
- (id)_getSpecifierDiskUsage:(id)a0;
- (void)_deleteOriginData:(id)a0;
- (void)_addWebsiteDataRecord:(id)a0 toDictionary:(id)a1;
- (id)_totalUsageString;
- (id)_specifiersForDomainList;
- (void)_updateTotalUsageSpecifier;
- (void)_addDomainSpecifiers;
- (void)_addWebSecurityDomainsToDictionary:(id)a0 withCompletion:(id /* block */)a1;
- (void)showAllDomainSpecifiers;
- (id)_specifiersForLoadingSpinner;
- (id)_specifiersForSearchResults;
- (void)_deleteAllOrigins;

@end

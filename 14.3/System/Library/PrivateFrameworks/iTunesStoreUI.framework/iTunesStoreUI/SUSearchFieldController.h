@class SUClientInterface, NSString, NSArray, SUSearchFieldConfiguration, UISearchBar, UIControl, SUScriptTextFieldDelegate, ISStoreURLOperation, NSNumber, SUSearchDisplayController;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    SUScriptTextFieldDelegate *_textFieldDelegate;
    BOOL _hasLoadedSearchResultsTableView;
}

@property (nonatomic) long long searchFieldStyle;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (copy, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void)willRotateToInterfaceOrientation:(long long)a0;
- (BOOL)searchDisplayController:(id)a0 shouldReloadTableForSearchString:(id)a1;
- (void)searchDisplayController:(id)a0 didLoadSearchResultsTableView:(id)a1;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)operationDidFinish:(id)a0;
- (id)initWithContentsController:(id)a0;
- (id)_searchGroupForSearchKind:(id)a0;
- (void)handleSearchURL:(id)a0 withSourceApplication:(id)a1 sourceURL:(id)a2;
- (id)newRequestPropertiesWithSearchTerm:(id)a0;
- (id)initWithContentsController:(id)a0 clientInterface:(id)a1 style:(long long)a2;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)initWithContentsController:(id)a0 clientInterface:(id)a1;
- (id)_newSearchDisplayControllerWithContentsController:(id)a0;
- (void)_savedSearchTermChangedNotification:(id)a0;
- (void)_tearDownDimmerView;
- (id)newRequestPropertiesWithSearchTerm:(id)a0 kind:(id)a1;
- (void)_fetchResultsForURLRequestProperties:(id)a0;
- (id)_newSearchBar;
- (void)_reloadSearchBar;
- (void)_resizeSearchBarForOrientation:(long long)a0;
- (void)_saveSearchTermToDefaults:(id)a0;
- (void)_fetchResultsForTerm:(id)a0 URL:(id)a1;
- (BOOL)_focusTransientViewController;
- (void)_showDimmerView;
- (void)_cancelCompletionsOperation;
- (void)_reloadCompletionsForSearchString:(id)a0;
- (id)_defaultSearchTerm;
- (void)_fetchCompletions;
- (void)_sendOnXEventWithTerm:(id)a0 URL:(id)a1 completionBlock:(id /* block */)a2;
- (id)_targetViewController;
- (id)_newBlankStorePageViewController;
- (void)_dimmerViewAction:(id)a0;
- (id)_newTransientViewController;
- (void)searchBarWillRemoveFromSuperview:(id)a0;
- (void)scriptDidChangeTextForField:(id)a0;
- (void)searchDisplayController:(id)a0 willUnloadSearchResultsTableView:(id)a1;
- (id)initWithContentsController:(id)a0 style:(long long)a1;
- (id)_cancelButtonView;

@end

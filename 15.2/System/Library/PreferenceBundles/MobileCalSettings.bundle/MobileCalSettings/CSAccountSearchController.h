@class EKSource, NSString, CSAccountController, CNAutocompleteStore, CNAutocompleteFetchContext, NSMutableArray, UISearchController;
@protocol CNCancelable;

@interface CSAccountSearchController : PSListController <UISearchResultsUpdating, UITableViewDelegate, DelegateDetailProtocol, CNAutocompleteFetchDelegate> {
    UISearchController *_searchController;
    EKSource *_source;
    CNAutocompleteFetchContext *_fetchContext;
    NSMutableArray *_searchResults;
    CSAccountController *_accountController;
    id<CNCancelable> _currentFetchRequest;
    CNAutocompleteStore *_autocompleteStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)tableViewStyle;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)a0;
- (void)autocompleteFetchDidEndNetworkActivity:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didModifyDelegate:(id)a0;
- (void)didDismissViewControllerSavingNewDelegate:(BOOL)a0;
- (id)_grantedDelegateFromAutocompleteResult:(id)a0;

@end

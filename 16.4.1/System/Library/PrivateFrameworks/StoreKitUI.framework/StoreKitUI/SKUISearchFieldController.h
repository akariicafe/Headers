@class NSString, SSVLoadURLOperation, UITableViewController, SKUIClientContext, NSOperationQueue, UISearchBar, SKUICompletionList, UIViewController, SKUISearchController;
@protocol SKUISearchFieldDelegate;

@interface SKUISearchFieldController : NSObject <SKUISearchControllerDelegate, UISearchResultsUpdating, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate> {
    SKUICompletionList *_completionList;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UITableViewController *_searchResultsController;
    SKUISearchController *_searchController;
    struct { unsigned char searchFieldControllerRequestSearch : 1; unsigned char searchFieldControllerSearchBarDidChangeText : 1; unsigned char searchFieldControllerShouldBeginEditing : 1; } _delegateRespondsTo;
}

@property (readonly, weak, nonatomic) UIViewController *contentsController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUISearchFieldDelegate> delegate;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (copy, nonatomic) NSString *searchBarAccessoryText;
@property (copy, nonatomic) NSString *searchHintsURLString;
@property (nonatomic) BOOL displaysSearchBarInNavigationBar;
@property (nonatomic) BOOL showsResultsForEmptyField;
@property (copy, nonatomic) NSString *trendingSearchURLString;
@property (nonatomic) long long numberOfSearchResults;
@property (readonly, nonatomic) BOOL canBecomeActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSearchTerm:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)becomeActive;
- (void)_reloadData;
- (void)willDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)resignActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)presentSearchController:(id)a0;
- (BOOL)searchBarShouldClear:(id)a0;
- (void)searchControllerWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)URLForTrendingSearchPageView:(id)a0;
- (void)_adjustInsetsForResultsTableView:(id)a0;
- (void)_loadResultsForSearchRequest:(id)a0;
- (BOOL)_presentsInPopover:(id)a0;
- (void)_reloadTrendingVisibility;
- (void)_setResponse:(id)a0 error:(id)a1;
- (id)initWithContentsController:(id)a0;
- (id)initWithContentsController:(id)a0 clientContext:(id)a1;
- (id)searchControllerClientContext:(id)a0;
- (void)trendingSearchPageView:(id)a0 didSelectSearch:(id)a1;

@end

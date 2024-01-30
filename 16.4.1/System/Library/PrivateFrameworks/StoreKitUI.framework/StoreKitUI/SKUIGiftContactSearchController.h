@class NSNumber, NSString, NSArray, CNAutocompleteSearchManager, UIView, CNAutocompleteResultsTableViewController, NSMutableArray;
@protocol SKUIGiftContactSearchDelegate;

@interface SKUIGiftContactSearchController : NSObject <CNAutocompleteSearchConsumer, CNAutocompleteResultsTableViewControllerDelegate> {
    NSMutableArray *_autocompleteSearchResults;
    NSArray *_results;
    CNAutocompleteResultsTableViewController *_searchResultsViewController;
    CNAutocompleteSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
}

@property (weak, nonatomic) id<SKUIGiftContactSearchDelegate> delegate;
@property (readonly, nonatomic) long long numberOfResults;
@property (readonly, nonatomic) UIView *searchResultsView;
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *searchResultsViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancelSearch;
- (void)dealloc;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)_setResults:(id)a0;
- (void)_finishSearchWithResults:(id)a0;
- (void)resetSearch;
- (void)searchForText:(id)a0;

@end

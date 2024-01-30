@class UITableView, NSString, NSArray, MFContactsSearchManager, UIView, NSMutableArray, NSNumber;
@protocol SKUIGiftContactSearchDelegate;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray *_autocompleteSearchResults;
    NSArray *_results;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

@property (weak, nonatomic) id<SKUIGiftContactSearchDelegate> delegate;
@property (readonly, nonatomic) long long numberOfResults;
@property (readonly, nonatomic) UIView *searchResultsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setResults:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)_tableView;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)cancelSearch;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)searchForText:(id)a0;
- (void)resetSearch;
- (void)_finishSearchWithResults:(id)a0;
- (void)makeChildLabelsSupportDarkMode:(id)a0;

@end

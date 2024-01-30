@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol PSSpotlightSearchResultsControllerDelegate;

@interface PSSpotlightSearchResultsController : UITableViewController <PSKeyboardNavigationSearchResultsController> {
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
    long long _deviceOrientation;
    double originalInset;
}

@property (retain, nonatomic) NSMutableArray *tableData;
@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) id<PSSpotlightSearchResultsControllerDelegate> delegate;

- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void)searchQueryCompleted;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)_itemForIndexPath:(id)a0;
- (void)_selectIndexPath:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)searchQueryStarted;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)iconWidth;
- (void)tableViewDidFinishReload:(id)a0;
- (void)searchQueryFoundItems:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)showSelectedSearchResult;
- (void)viewDidLoad;
- (void)_removeIconViewForSection:(id)a0;
- (void)_updateIconViews:(BOOL)a0;

@end

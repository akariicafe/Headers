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

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)searchQueryFoundItems:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)searchQueryCompleted;
- (void)viewDidLoad;
- (void)_selectIndexPath:(id)a0;
- (id)_itemForIndexPath:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)iconWidth;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (void)tableViewDidFinishReload:(id)a0;
- (void)showSelectedSearchResult;
- (void)searchQueryStarted;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_removeIconViewForSection:(id)a0;
- (void)_updateIconViews:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end

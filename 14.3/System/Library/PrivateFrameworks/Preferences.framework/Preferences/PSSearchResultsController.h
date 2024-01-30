@class NSString, PSSearchResults, NSMutableDictionary, NSMutableArray, UITableView;
@protocol PSSearchResultsControllerDelegate;

@interface PSSearchResultsController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
}

@property (retain, nonatomic) PSSearchResults *searchResults;
@property (weak, nonatomic) id<PSSearchResultsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)tableViewDidFinishReload:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)_removeIconViewForSection:(id)a0;
- (void)_updateIconViews:(BOOL)a0;

@end

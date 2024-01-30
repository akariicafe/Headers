@class PUPhotosAlbumViewController, NSMutableArray;

@interface PUCurationUtilityComparisonBrowserDebugViewController : UITableViewController {
    NSMutableArray *_isUtilityButWasnt;
    NSMutableArray *_wasUtilityButIsnt;
    NSMutableArray *_isUtilityAndWas;
    NSMutableArray *_isUtilityForMemoriesButNotUtility;
    PUPhotosAlbumViewController *_assetCollectionViewController;
}

- (void)_fetchUtilityAssetInformation;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end

@class NSMutableDictionary, PUCurationImportSourceAssetBrowserDebugViewController;

@interface PUCurationImportSourceBrowserDebugViewController : UITableViewController {
    NSMutableDictionary *_assetsByImportSource;
    PUCurationImportSourceAssetBrowserDebugViewController *_assetCollectionViewController;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)_fetchImportSources;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end

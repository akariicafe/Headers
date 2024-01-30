@class NSArray, NSDictionary, PUCurationClassificationSignalAssetBrowserDebugViewController;

@interface PUCurationClassificationSignalBrowserDebugViewController : UITableViewController {
    NSArray *_sectionNames;
    NSDictionary *_signalIdentifiersBySectionName;
    NSDictionary *_signalInfoBySignalIdentifier;
    NSDictionary *_countsBySignalIdentifier;
    NSDictionary *_signalConfidenceByAssetUUIDBySignalIdentifier;
    unsigned long long _numberOfAssets;
    PUCurationClassificationSignalAssetBrowserDebugViewController *_assetCollectionViewController;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_fetchSignals;
- (id)signalNameForUnknownSignalIdentifier:(int)a0;
- (id)signalIdentifiersForSection:(long long)a0;

@end

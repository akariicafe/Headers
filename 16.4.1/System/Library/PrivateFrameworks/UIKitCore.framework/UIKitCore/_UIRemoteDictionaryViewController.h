@class NSArray, NSMutableDictionary, _UIDictionaryManager;

@interface _UIRemoteDictionaryViewController : UITableViewController {
    NSArray *_availableDictionaries;
}

@property (retain, nonatomic) _UIDictionaryManager *dictionaryAssetManager;
@property (retain, nonatomic) NSMutableDictionary *downloadingAssets;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_downloadButton;
- (void)_handleDownloadButton:(id)a0;
- (void)_startDownloadForDictionary:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;

@end

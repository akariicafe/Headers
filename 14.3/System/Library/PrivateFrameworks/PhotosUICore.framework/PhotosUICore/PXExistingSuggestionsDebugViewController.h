@class NSString, NSArray, NSDictionary, PHSuggestion;

@interface PXExistingSuggestionsDebugViewController : UITableViewController <PXOneUpPresentationDelegate> {
    NSArray *_sectionNames;
    NSDictionary *_itemsBySectionName;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 options:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)assetsDataSourceManagerForSuggestion:(id)a0;
- (void)configureCell:(id)a0 withItem:(id)a1;
- (void)_fetchExistingSuggestions;
- (void)viewDidLoad;

@end

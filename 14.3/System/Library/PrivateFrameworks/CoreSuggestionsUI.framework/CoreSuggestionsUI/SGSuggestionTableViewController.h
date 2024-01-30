@class NSString, SGSuggestionStore;

@interface SGSuggestionTableViewController : UITableViewController <SGSuggestionViewControllerPresenter>

@property (retain, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentViewController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)updatePrefferedSize;
- (void)listDidChangeNotification:(id)a0;

@end

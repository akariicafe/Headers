@class NSString, SGSuggestionStore;

@interface SGSuggestionTableViewController : UITableViewController <SGSuggestionViewControllerPresenter>

@property (retain, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewController:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)presentViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updatePrefferedSize;
- (void)listDidChangeNotification:(id)a0;

@end

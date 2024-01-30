@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsViewController : UITableViewController

@property (weak, nonatomic) WKDataListSuggestionsControl *control;

- (void)reloadData;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end

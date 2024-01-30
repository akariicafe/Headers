@class NSArray, NSString;
@protocol WFMapSearchTableViewControllerDelegate;

@interface WFMapSearchTableViewController : UITableViewController <UISearchResultsUpdating>

@property (retain, nonatomic) NSArray *mapItems;
@property (weak, nonatomic) id<WFMapSearchTableViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

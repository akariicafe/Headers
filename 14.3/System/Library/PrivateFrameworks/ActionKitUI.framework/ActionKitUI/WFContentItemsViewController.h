@class NSArray;

@interface WFContentItemsViewController : UITableViewController

@property (retain, nonatomic) NSArray *contentItems;
@property (nonatomic) BOOL allowsCoercion;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end

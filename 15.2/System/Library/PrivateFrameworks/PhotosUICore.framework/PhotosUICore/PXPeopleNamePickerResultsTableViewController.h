@class NSString, NSMutableArray, NSArray;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController

@property (retain) NSString *personLocalIdentifier;
@property (retain) NSMutableArray *items;
@property (retain) NSArray *suggestedContacts;
@property (readonly, nonatomic) BOOL hasResults;

- (id)personAtIndexPath:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 personLocalIdentifier:(id)a1 suggestedContacts:(id)a2;
- (void)updateItemsForSearchString:(id)a0;
- (id)contactAtIndexPath:(id)a0;

@end

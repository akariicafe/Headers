@class NSArray, NSString;

@interface WFIPViewController : WFInsetTableViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *prefixes;
@property (nonatomic) BOOL useInsetGroupedTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)initWithAddresses:(id)a0 prefixLengths:(id)a1 useInsetGroupedTableView:(BOOL)a2;
- (id)initWithAddresses:(id)a0 prefixLengths:(id)a1;

@end

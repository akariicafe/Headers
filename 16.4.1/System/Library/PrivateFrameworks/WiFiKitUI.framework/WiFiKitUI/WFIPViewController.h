@class NSArray, WFAppearanceProxy, NSString;

@interface WFIPViewController : WFInsetTableViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *prefixes;
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithAddresses:(id)a0 prefixLengths:(id)a1;
- (id)initWithAddresses:(id)a0 prefixLengths:(id)a1 appearanceProxy:(id)a2;

@end

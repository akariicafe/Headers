@class NSArray, NSString, NSURL, PLDatabaseReader;

@interface FBKPowerLogIndexViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain) NSURL *logURL;
@property (retain) PLDatabaseReader *databaseReader;
@property (copy) NSArray *tableNames;
@property BOOL enteringDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplayURL:(id)a0;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void)setPowerLogURL:(id)a0;

@end

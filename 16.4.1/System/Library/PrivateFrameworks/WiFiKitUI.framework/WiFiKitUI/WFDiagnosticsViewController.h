@class NSString;

@interface WFDiagnosticsViewController : WFInsetTableViewController

@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) id /* block */ saveHandler;
@property (nonatomic) BOOL saving;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;

@end

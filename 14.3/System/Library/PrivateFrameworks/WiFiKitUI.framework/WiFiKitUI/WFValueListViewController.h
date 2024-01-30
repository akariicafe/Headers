@class NSArray, UISwitch, NSString, NSMutableArray;

@interface WFValueListViewController : WFInsetTableViewController

@property (retain, nonatomic) NSArray *titles;
@property (nonatomic) BOOL hasSwitch;
@property (retain, nonatomic) UISwitch *configSwitch;
@property (retain, nonatomic) NSMutableArray *sections;
@property (copy, nonatomic) NSString *switchTitle;
@property (retain, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ footerHandler;
@property (nonatomic) BOOL switchOn;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)initWithTitles:(id)a0 switchTitle:(id)a1;
- (id)cellForTitleAtIndexPath:(id)a0;

@end

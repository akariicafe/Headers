@class NSArray, NSString;
@protocol WFTriggerTableViewControllerDelegate;

@interface WFTriggerTableViewController : UITableViewController

@property (readonly, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *options;
@property (nonatomic) BOOL anyOptionSelected;
@property (readonly, copy, nonatomic) NSString *nameOfAnyOption;
@property (readonly, copy, nonatomic) NSString *mainSectionTitle;
@property (weak, nonatomic) id<WFTriggerTableViewControllerDelegate> delegate;

- (void)cancel:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)updateDoneButtonEnabledState;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)done:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)infoForSection:(long long)a0;
- (id)initWithOptions:(id)a0 anySelected:(BOOL)a1 nameOfAnyOption:(id)a2 mainSectionTitle:(id)a3;

@end

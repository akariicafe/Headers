@class MFRecentComposeRecipientGroup;
@protocol MFGroupDetailViewControllerDelegate;

@interface MFGroupDetailViewController : UITableViewController

@property (weak, nonatomic) id<MFGroupDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) MFRecentComposeRecipientGroup *group;

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_removeButtonTapped:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;

@end

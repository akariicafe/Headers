@class MFRecentComposeRecipientGroup;
@protocol MFGroupDetailViewControllerDelegate;

@interface MFGroupDetailViewController : UITableViewController

@property (weak, nonatomic) id<MFGroupDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) MFRecentComposeRecipientGroup *group;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_removeButtonTapped:(id)a0;

@end

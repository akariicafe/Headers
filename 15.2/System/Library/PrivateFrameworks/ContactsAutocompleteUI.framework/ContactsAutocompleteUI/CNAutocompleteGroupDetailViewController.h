@class CNRecentComposeRecipientGroup;
@protocol CNAutocompleteGroupDetailViewControllerDelegate;

@interface CNAutocompleteGroupDetailViewController : UITableViewController

@property (weak, nonatomic) id<CNAutocompleteGroupDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) CNRecentComposeRecipientGroup *group;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_removeButtonTapped:(id)a0;

@end

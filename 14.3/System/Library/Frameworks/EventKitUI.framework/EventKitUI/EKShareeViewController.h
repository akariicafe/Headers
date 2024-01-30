@class EKSharee, UIAlertController;
@protocol EKShareeViewControllerDelegate;

@interface EKShareeViewController : UITableViewController {
    UIAlertController *_removeAlertController;
}

@property (retain, nonatomic) EKSharee *sharee;
@property (nonatomic) BOOL allowEditing;
@property (nonatomic) BOOL allowStopSharing;
@property (nonatomic) BOOL allowResendInvitations;
@property (weak, nonatomic) id<EKShareeViewControllerDelegate> delegate;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)_rowForSubitem:(int)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithSharee:(id)a0;
- (BOOL)_shouldDisplayResendInvitationButton;
- (void)_reloadTitle;
- (BOOL)_shouldDisplayStopSharingButton;
- (int)_subitemAtRow:(long long)a0;
- (void)_allowEditingChanged:(id)a0;
- (void)removeClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end

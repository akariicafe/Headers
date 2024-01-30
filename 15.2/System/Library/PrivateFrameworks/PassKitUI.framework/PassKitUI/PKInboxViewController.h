@class PKSecurityCapabilitiesController, NSString, PKContactAvatarManager, PKTableHeaderView, PKApplyController, PKInboxDataSource, PKTableViewDiffableDataSource, UIActivityIndicatorView;

@interface PKInboxViewController : UITableViewController <PKPaymentSetupViewControllerDelegate> {
    PKInboxDataSource *_dataSource;
    long long _context;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _disableSelection;
    PKTableHeaderView *_headerView;
    double _previousHeaderHeight;
    PKTableViewDiffableDataSource *_diffableDataSource;
    PKApplyController *_applyController;
    PKSecurityCapabilitiesController *_securityCapabilitiesController;
    PKContactAvatarManager *_avatarManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_doneButtonTapped:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)_presentInboxMessage:(id)a0;
- (id)_configurationForInboxMessage:(id)a0;
- (void)_updateDiffableDataSourceAnimated:(BOOL)a0;
- (void)_presentExpiredAlertForInboxMessage:(id)a0;
- (void)_presentAccountUserInvitation:(id)a0;
- (void)_presentManateeUpgradeForFeatureApplication:(id)a0 completion:(id /* block */)a1;
- (void)_checkManateeCapabilityForFeatureApplication:(id)a0 completion:(id /* block */)a1;
- (id)initWithInboxDataSource:(id)a0 contactAvatarManager:(id)a1 context:(long long)a2;
- (void)presentInboxMessageWithIdentifier:(id)a0;
- (void)_updateImage:(id)a0 onCellAtIndexPath:(id)a1;

@end

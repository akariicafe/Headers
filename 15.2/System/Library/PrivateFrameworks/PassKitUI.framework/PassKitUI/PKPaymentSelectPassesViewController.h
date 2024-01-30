@class NSString, PKTableHeaderView, NSArray, PKPeerPaymentAccount, NSMutableArray;
@protocol PKPaymentSelectPassesViewControllerDelegate;

@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController {
    PKTableHeaderView *_headerView;
    NSArray *_passes;
    NSMutableArray *_selectedIndexPaths;
    id<PKPaymentSelectPassesViewControllerDelegate> _delegate;
    PKPeerPaymentAccount *_peerPaymentAccount;
}

@property (nonatomic) unsigned long long minimumSelectionCount;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubtitle;
@property (nonatomic) BOOL showCancelButton;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (id)headerView;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (void)setHeaderViewTitle:(id)a0 subtitle:(id)a1;
- (void)_cancelPressed;
- (void)_continuousButtonPressed;
- (void)_setContinuousButtonEnabledState;
- (void)_setViewEnabledState:(BOOL)a0;
- (id)initWithPaymentPasses:(id)a0 context:(long long)a1 delegate:(id)a2 peerPaymentAccount:(id)a3;
- (void)setPassSelectionCount:(unsigned long long)a0;

@end

@class NSString, PKAccountInvitationController, NSArray, PKTableHeaderView, NSIndexPath, UIButton;

@interface PKAccountInvitationAccessLevelViewController : PKPaymentSetupTableViewController <UITableViewDelegate, PKViewControllerPreflightable> {
    PKAccountInvitationController *_controller;
    NSArray *_accessLevelOptions;
    PKTableHeaderView *_headerView;
    UIButton *_footerView;
    double _previousHeaderHeight;
    double _previousFooterHeight;
    NSIndexPath *_loadingIndexPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithController:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_handleFooterButtonTapped:(id)a0;
- (void)_showSpinner:(BOOL)a0 atIndexPath:(id)a1;
- (void)_updateCell:(id)a0 showSpinner:(BOOL)a1;

@end

@class PKFamilyMember, PKPeerPaymentPreferences, PKTableHeaderView, PKPeerPaymentSetupFlowController, PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration, NSIndexPath;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate;

@interface PKPeerPaymentAssociatedAccountRestrictionsViewController : PKPaymentSetupTableViewController {
    PKPeerPaymentSetupFlowController *_controller;
    PKFamilyMember *_familyMember;
    PKPeerPaymentPreferences *_currentPreferences;
    NSIndexPath *_defaultSelectedIndexPath;
    PKTableHeaderView *_tableHeader;
    double _cachedHeaderViewWidth;
    id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
    PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration *_configuration;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithPeerPaymentSetupFlowController:(id)a0;
- (id)_updatedPreferences;
- (void)_continue;
- (id)_textLabelStringForIndexPath:(id)a0;

@end

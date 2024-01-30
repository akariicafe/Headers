@class NSString, NSArray, NSLayoutConstraint, CTDisplayPlanList;
@protocol TSSIMSetupFlowDelegate;

@interface TSMultiPlanIntermediateViewController : TSOBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, TSSetupFlowItem> {
    BOOL _inBuddy;
    BOOL _showOtherOptions;
    NSLayoutConstraint *_tableHeightAnchor;
    NSArray *_buttons;
    NSArray *_transferItems;
    CTDisplayPlanList *_pendingInstallItems;
    CTDisplayPlanList *_carrierSetupItems;
}

@property BOOL showSIMSetup;
@property BOOL isStandaloneProximityFlow;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL isOtherButtonTapped;
@property BOOL installingTransferPlan;
@property BOOL isTransferListCellTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)_heightAnchorConstant;
- (void)_otherButtonTapped;
- (void)_skipButtonTapped;
- (id)initWithPendingInstallItems:(id)a0;
- (id)initWithTransferItems:(id)a0 pendingInstallItems:(id)a1 carrierSetupItems:(id)a2 showOtherOptions:(BOOL)a3;
- (id)initWithTransferItems:(id)a0 pendingInstallItems:(id)a1 carrierSetupItems:(id)a2 showOtherOptions:(BOOL)a3 isStandaloneProximityFlow:(BOOL)a4;
- (id)initWithTransferItems:(id)a0 showOtherOptions:(BOOL)a1;

@end

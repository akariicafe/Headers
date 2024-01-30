@class OBBoldTrayButton, NSArray, NSString, CTDisplayPlanList, UIView, NSLayoutConstraint, NSMutableArray;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferListViewController : OBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {
    BOOL _isInEligiblePlanPresent;
    BOOL _receivedPendingInstallItems;
    BOOL _receivedTransferItems;
    BOOL _transferCompleted;
    BOOL _pendingInstallCompleted;
    BOOL _continueButtonTappedOnce;
    NSLayoutConstraint *_tableHeightAnchor;
    OBBoldTrayButton *_continueButton;
    CTDisplayPlanList *_pendingInstallItems;
}

@property (retain) NSArray *transferItems;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) UIView *tableFooter;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)updateFooterView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)_skipButtonTapped;
- (void)_maybeUpdateTableView;
- (void)_startPendingInstall:(id)a0;
- (void)_continueButtonTapped;
- (double)_heightAnchorConstant;
- (void)_preparePlanTransfer:(id)a0 withDeviceID:(id)a1;
- (void)_preparePlanPendingInstall:(id)a0 withDeviceID:(id)a1;
- (void)_startPlanTransfer:(id)a0 withDeviceID:(id)a1;
- (void)_viewMaybeCompleted;
- (id)initWithTransferItems:(id)a0 isInEligiblePlanPresent:(BOOL)a1 pendingInstallItems:(id)a2;

@end

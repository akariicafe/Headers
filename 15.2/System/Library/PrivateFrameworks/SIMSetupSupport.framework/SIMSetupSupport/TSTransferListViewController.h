@class OBBoldTrayButton, NSArray, NSString, CTDisplayPlanList, UIView, NSLayoutConstraint, NSMutableArray;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferListViewController : OBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {
    BOOL _inBuddy;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapabilityLoss;
    BOOL _receivedPendingInstallItems;
    BOOL _receivedTransferItems;
    BOOL _transferCompleted;
    BOOL _pendingInstallCompleted;
    BOOL _continueButtonTappedOnce;
    NSLayoutConstraint *_tableHeightAnchor;
    OBBoldTrayButton *_continueButton;
    OBBoldTrayButton *_scanButton;
    CTDisplayPlanList *_pendingInstallItems;
}

@property (retain) NSArray *transferItems;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) UIView *tableFooter;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property BOOL showSIMSetup;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL isScanButtonTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)updateFooterView;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_continueButtonTapped;
- (void)_skipButtonTapped;
- (void)_scanButtonTapped;
- (double)_heightAnchorConstant;
- (id)_calculatePlanSelection;
- (void)_installSelectedPlans;
- (void)_preparePlanTransfer:(id)a0 withDeviceID:(id)a1;
- (void)_preparePlanPendingInstall:(id)a0 withDeviceID:(id)a1;
- (void)_maybeDisplayPhysicalPlanConversionAlert:(BOOL)a0 phoneNumber:(id)a1 completion:(id /* block */)a2;
- (void)_startPlanTransfer:(id)a0 withDeviceID:(id)a1;
- (void)_startPendingInstall:(id)a0;
- (void)_viewMaybeCompleted;
- (id)initWithTransferItems:(id)a0 inBuddy:(BOOL)a1 isActivationPolicyMismatch:(BOOL)a2 isDualeSIMCapabilityLoss:(BOOL)a3 pendingInstallItems:(id)a4;
- (id)initWithTransferItems:(id)a0 inBuddy:(BOOL)a1 isActivationPolicyMismatch:(BOOL)a2 pendingInstallItems:(id)a3;
- (void)_maybeUpdateTableView;

@end

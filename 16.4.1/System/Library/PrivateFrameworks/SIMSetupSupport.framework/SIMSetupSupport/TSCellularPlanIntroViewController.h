@class NSString, OBLinkTrayButton;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanIntroViewController : TSOBTableWelcomeController <TSSIMSetupDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {
    OBLinkTrayButton *_laterButton;
    BOOL _showTransferOption;
    id viewController;
}

@property BOOL requireDelayBluetoothConnection;
@property (retain) id transferBackPlan;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL isProximityTransferButtonTapped;
@property BOOL isScanButtonTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (BOOL)userInteractionEnabled;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)_laterButtonTapped;
- (void)_learnMoreButtonTapped;
- (id)getCellTextAt:(id)a0;
- (id)initWithShowTransferOption:(BOOL)a0 requireDelayBluetoothConnection:(BOOL)a1;
- (id)initWithTransferBackPlan:(id)a0;

@end

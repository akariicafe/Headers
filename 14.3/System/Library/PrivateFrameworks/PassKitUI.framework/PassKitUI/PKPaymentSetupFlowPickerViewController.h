@class PKPaymentSetupFooterView, PKTableHeaderView, PKPaymentProvisioningController, NSString, NSSet, NSMutableArray, PKPaymentSetupFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol> {
    PKTableHeaderView *_headerView;
    PKPaymentSetupFooterView *_footerView;
    NSMutableArray *_pickerSections;
    NSSet *_betaNetworks;
    PKPaymentSetupFlowController *_flowController;
}

@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) PKTableHeaderView *headerView;
@property (readonly, nonatomic) long long setupContext;
@property (nonatomic) BOOL hideSetupLaterButton;
@property (nonatomic) BOOL allowsManualEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_filteredPaymentSetupProducts:(id)a0 localCredential:(id)a1 setupContext:(long long)a2 webService:(id)a3 mobileCarrierRegion:(id)a4;
+ (id)filteredPaymentSetupProductsForProvisioningController:(id)a0 setupContext:(long long)a1;
+ (BOOL)_localCredentials:(id)a0 containProduct:(id)a1;
+ (id)paymentSetupFlowPickerWithSetupDelegate:(id)a0 context:(long long)a1 provisioningController:(id)a2;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)footerView;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)hideActivitySpinner;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_terminateSetupFlow;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithSetupDelegate:(id)a0 context:(long long)a1 provisioningController:(id)a2;
- (void)addPickerSection:(id)a0;
- (void)addPickerItem:(id)a0 toSection:(id)a1;
- (id)paymentSetupMarker;
- (void)_didSelectProducts:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)productSelectionViewController:(id)a0 didSelectProduct:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)insertPickerSection:(id)a0 atIndex:(unsigned long long)a1;
- (void)_setupLater:(id)a0;
- (void)provisioningViewController:(id)a0 pushViewController:(id)a1 withCompletion:(id /* block */)a2;
- (void)showActivitySpinner;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_prepareViewControllerForProvsioningFlow:(id)a0;
- (void)browseProductsViewController:(id)a0 didSelectProduct:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)addPickerItems:(id)a0 toSection:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end

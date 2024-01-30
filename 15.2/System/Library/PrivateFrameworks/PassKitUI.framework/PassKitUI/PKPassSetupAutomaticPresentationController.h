@class PKPassView, NSString, UIImage, PKPass, PKPaymentProvisioningController, PKPaymentWebService, PKTableHeaderView, PKPaymentVerificationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController <PKPaymentVerificationControllerDelegate> {
    PKPaymentWebService *_webService;
    unsigned long long _selectedIndex;
    PKTableHeaderView *_headerView;
    PKPassView *_passView;
    UIImage *_passSnapshot;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
}

@property (readonly, nonatomic) PKPass *pass;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)passNeedsAutomaticPresentationSetup:(id)a0;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)cancel:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)_dismissView;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (void)done:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_saveSettings;
- (void)_showAddToWatchOfferForPass:(id)a0;
- (void)_terminateSetupFlow;
- (void)logAnalyticsContextSpecificCheckpointForKey:(id)a0;
- (id)initWithPaymentWebService:(id)a0 pass:(id)a1 context:(long long)a2 provisioningController:(id)a3;
- (long long)_paymentPassState;
- (id)_buttonTitleForPaymentPassState:(long long)a0;
- (void)_showVerificationForPass:(id)a0;
- (BOOL)_shouldShowMakeDefaultViewControllerForPass:(id)a0;
- (void)_presentMakeDefaultViewControllerForPass:(id)a0;
- (void)_presentNextCredentialWithCompletion:(id /* block */)a0;
- (id)_contextSpecificStringForAggDKey:(id)a0;
- (void)presentVerificationViewController:(id)a0 animated:(BOOL)a1;

@end

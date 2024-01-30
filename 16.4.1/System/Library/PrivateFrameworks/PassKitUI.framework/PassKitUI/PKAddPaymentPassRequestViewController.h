@class PKPaymentProvisioningController, PKTableHeaderView, PKPaymentProvisioningTracker, NSObject, OBPrivacyLinkController, RemoteUIController, PKPasscodeUpgradeFlowController, NSString, CLInUseAssertion, NSArray, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKPaymentWebService;
@protocol OS_dispatch_source, PKPaymentSetupViewControllerDelegate, PKAddPaymentPassRequestViewControllerDelegate, NSObject;

@interface PKAddPaymentPassRequestViewController : UITableViewController {
    NSString *_title;
    NSString *_subtitle;
    NSArray *_details;
    long long _headerState;
    id<NSObject> _notificationToken;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    PKPaymentProvisioningController *_provisioningController;
    PKAddPaymentPassRequestConfiguration *_configuration;
    CLInUseAssertion *_passbookForegroundAssertion;
    NSObject<OS_dispatch_source> *_datasourceTimeout;
    PKAddPaymentPassRequest *_addRequest;
    struct CGSize { double width; double height; } _lastBoundsSize;
    BOOL _offsetForTextfieldWasCalculated;
    double _offsetForTextfield;
    BOOL _viewAppearing;
    BOOL _preconditionsValidated;
    BOOL _sentViewHasAppearedEvent;
    PKTableHeaderView *_headerView;
    OBPrivacyLinkController *_privacyController;
    RemoteUIController *_termsController;
    PKPaymentProvisioningTracker *_provisioningTracker;
}

@property (nonatomic) BOOL hidePrivacy;
@property (nonatomic) BOOL singleTarget;
@property (weak, nonatomic) id<PKAddPaymentPassRequestViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;

+ (id)backgroundColor;

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_performPasscodeUpgradeIfNeeded;
- (void)_applyHeaderState;
- (void)_cancelDatasourceTimeout;
- (void)_displayTermsForEligibilityResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchAddRequestWithCertificatesResponse:(id)a0;
- (void)_fetchCertificates;
- (void)_handleAdd:(id)a0;
- (BOOL)_handleRawResponseData:(id)a0 error:(id)a1;
- (void)_performEligibility;
- (void)_performMoreInfoItemPush;
- (void)_performNextProvisioningStep;
- (void)_performPreconditionValidation;
- (void)_performProvisioning:(id)a0;
- (void)_performTerms:(id)a0;
- (void)_presentDisplayableError:(id)a0;
- (void)_presentDisplayableError:(id)a0 allowEarlyExit:(BOOL)a1;
- (void)_promptHSA2Required;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)a0;
- (void)_setHeaderState:(long long)a0;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (void)_setupTermsControllerHandlerWithNavigationController:(id)a0 forCompletion:(id /* block */)a1;
- (void)_showEligibilityIssueForStatus:(long long)a0 learnMoreURL:(id)a1 completion:(id /* block */)a2;
- (id)_titleForCurrentHeaderState;
- (void)_updateHeaderSize;
- (void)_updateHeaderWithSubtitle:(id)a0;
- (void)hostApplicationDidEnterBackground;
- (id)initWithPaymentWebService:(id)a0 configuration:(id)a1;
- (void)noteNavigationUserInterfaceDidDisappear;

@end

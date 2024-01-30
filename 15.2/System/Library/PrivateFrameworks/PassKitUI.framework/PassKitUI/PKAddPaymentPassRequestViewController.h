@class PKPaymentProvisioningController, PKTableHeaderView, PKPaymentProvisioningTracker, NSObject, OBPrivacyLinkController, RemoteUIController, PKPasscodeUpgradeFlowController, NSString, CLInUseAssertion, NSArray, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKPaymentWebService;
@protocol OS_dispatch_source, PKPaymentSetupViewControllerDelegate, PKAddPaymentPassRequestViewControllerDelegate, NSObject;

@interface PKAddPaymentPassRequestViewController : UITableViewController <PKPaymentSetupViewControllerDelegate> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColor;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)hostApplicationDidEnterBackground;
- (void)_updateHeaderSize;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (void)_presentDisplayableError:(id)a0;
- (void)noteNavigationUserInterfaceDidDisappear;
- (void)_handleAdd:(id)a0;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)a0;
- (void)_cancelDatasourceTimeout;
- (void)_applyHeaderState;
- (id)_titleForCurrentHeaderState;
- (void)_updateHeaderWithSubtitle:(id)a0;
- (void)_performNextProvisioningStep;
- (void)_setHeaderState:(long long)a0;
- (void)_performPreconditionValidation;
- (void)_performEligibility;
- (void)_fetchCertificates;
- (void)_performPasscodeUpgradeIfNeeded;
- (void)_performTerms:(id)a0;
- (void)_performProvisioning:(id)a0;
- (void)_fetchAddRequestWithCertificatesResponse:(id)a0;
- (BOOL)_handleRawResponseData:(id)a0 error:(id)a1;
- (void)_showEligibilityIssueForStatus:(long long)a0 learnMoreURL:(id)a1 completion:(id /* block */)a2;
- (void)_promptHSA2Required;
- (void)_presentDisplayableError:(id)a0 allowEarlyExit:(BOOL)a1;
- (void)_displayTermsForEligibilityResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)_setupTermsControllerHandlerWithNavigationController:(id)a0 forCompletion:(id /* block */)a1;
- (id)initWithPaymentWebService:(id)a0 configuration:(id)a1;
- (void)_performMoreInfoItemPush;

@end

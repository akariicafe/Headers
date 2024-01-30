@class NSString, PKPaymentProvisioningController, PKPaymentSetupVerificationMethodTableController, PKPaymentVerificationController;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {
    PKPaymentSetupVerificationMethodTableController *_methodTableController;
    long long _verificationStatus;
}

@property (readonly, nonatomic) PKPaymentVerificationController *verificationController;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (copy, nonatomic) NSString *stepIdentifier;

- (void)_configure;
- (id)presentationContext;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithVerificationController:(id)a0;
- (void)_handleVerificationFinished;
- (void)_loadVerificationOptions;
- (id)_newVerificationRequest;
- (id)_requestErrorAlertController:(id)a0;
- (void)_showSetupAssistantVerifyLaterAlertAndTerminate;
- (void)_terminateSetupFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)dismissVerificationViewControllerAnimated:(BOOL)a0;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithVerificationController:(id)a0 fieldsModel:(id)a1;
- (id)initWithVerificationController:(id)a0 verificationChannels:(id)a1;
- (id)visibleFieldIdentifiers;

@end

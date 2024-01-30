@class NSString, PKPaymentProvisioningController, PKPaymentSetupVerificationMethodTableController, PKPaymentVerificationController;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {
    PKPaymentSetupVerificationMethodTableController *_methodTableController;
    long long _verificationStatus;
}

@property (readonly, nonatomic) PKPaymentVerificationController *verificationController;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (copy, nonatomic) NSString *stepIdentifier;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_configure;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_terminateSetupFlow;
- (id)initWithVerificationController:(id)a0;
- (id)initWithVerificationController:(id)a0 fieldsModel:(id)a1;
- (void)_handleVerificationFinished;
- (void)_loadVerificationOptions;
- (id)defaultHeaderViewTitle;
- (id)_requestErrorAlertController:(id)a0;
- (id)defaultHeaderViewSubTitle;
- (id)_newVerificationRequest;
- (id)initWithVerificationController:(id)a0 verificationChannels:(id)a1;
- (id)_setupAssistantVerificationAlert;
- (id)visibleFieldIdentifiers;
- (void)handleNextButtonTapped:(id)a0;

@end

@class NSString, PKPeerPaymentWebService, PKPeerPaymentAccount;
@protocol PKPassLibraryDataProvider, PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentGraduationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_peerPaymentAccount;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
}

@property (nonatomic) BOOL allowsManualEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_presentTermsWithTermsResponse:(id)a0;
- (void)_presentGenericError;
- (void)_presentIdentityVerificationFlowWithGraduationPrerequisiteIdentifier:(BOOL)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPeerPaymentWebService:(id)a0 peerPaymentAccount:(id)a1 passLibraryDataProvider:(id)a2 setupDelegate:(id)a3 context:(long long)a4;

@end

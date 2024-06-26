@class PKPaymentProvisioningController, NSURL, PKPaymentInstallmentConfiguration, NSObject, DIVerificationSession, NSMutableArray, PKAccount, NSString, NSMutableSet, PKFeatureApplication, NSArray, PKPaymentService, PKPaymentWebService, PKAssertion;
@protocol OS_dispatch_queue, PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;

@interface PKApplyController : NSObject <PKSetupFlowControllerProtocol, PKPaymentServiceDelegate> {
    PKPaymentWebService *_webService;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSMutableArray *_viewControllers;
    unsigned long long _viewControllerIndex;
    PKPaymentService *_paymentService;
    NSArray *_encryptionCertificates;
    NSMutableSet *_shownTermsIdentifiers;
    NSMutableSet *_processedTermsIdentifiers;
    PKAccount *_account;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _endedApplyFlow;
    NSString *_coreIDVNextStepToken;
    NSString *_previousContextIdentifier;
    DIVerificationSession *_idVerificationSession;
    PKAssertion *_notificationSupressionAssertion;
    unsigned long long _runningApplicationUpdates;
}

@property (readonly, nonatomic) unsigned long long featureIdentifier;
@property (readonly, nonatomic) PKFeatureApplication *featureApplication;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (retain, nonatomic) id<PKSetupFlowControllerProtocol> parentFlowController;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (retain, nonatomic) NSURL *applyServiceURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (id)_nextQueuedViewController;
- (void)_startPaymentServiceListener;
- (void)_stopPaymentServiceListener;
- (void)_performApplyWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateIDVSession;
- (void).cxx_destruct;
- (void)_performCreateWithCompletion:(id /* block */)a0;
- (void)_submitCoreIDVFieldsPage:(id)a0 completion:(id /* block */)a1;
- (void)_submitCoreIDVDocumentsPage:(id)a0 selectedDocument:(id)a1 frontImageData:(id)a2 backImageData:(id)a3 completion:(id /* block */)a4;
- (void)_handleApplyResponse:(id)a0 originalFeatureApplication:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_deviceMetadataFields:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_handleResponseError:(id)a0 completion:(id /* block */)a1;
- (void)_performWithdrawWithCompletion:(id /* block */)a0;
- (id)_displayableErrorForError:(id)a0 showDetailedErrorFlow:(BOOL)a1;
- (void)_queueStateReasonExplanationFlowWithPage:(id)a0;
- (void)_queueGenericErrorViewController;
- (void)_queueFieldsFlowWithNextStepInfo:(id)a0;
- (void)dealloc;
- (void)_startCoreIDVSessionWithStepInfo:(id)a0 completion:(id /* block */)a1;
- (void)_queueApplicationTermsFlow;
- (void)_queueActionFlowWithPage:(id)a0;
- (void)_queueInfoFlowWithNextWithPage:(id)a0;
- (void)_queueOfferFlowWithPage:(id)a0;
- (void)_queueProgramConsentFlowWithPage:(id)a0;
- (void)_queueDeclinedFlowWithPage:(id)a0;
- (void)_queueAcceptedFlowWithPage:(id)a0;
- (void)_queuePassActivationFlowWithCompletion:(id /* block */)a0;
- (void)_queueExpiredFlowWithPage:(id)a0;
- (void)_queueTerminalStateFlowWithPage:(id)a0;
- (void)_performCoreIDVNextStepWithPage:(id)a0 completion:(id /* block */)a1;
- (void)_performCoreIDVShareWithCompletion:(id /* block */)a0;
- (void)_handleCoreIDVPage:(id)a0 totalPageCount:(long long)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)_fieldsViewControllerForPage:(id)a0;
- (id)_formatStringSuffixForItemType:(long long)a0;
- (void)_queueGenericErrorViewControllerWithPage:(id)a0;
- (void)_queueCannotResumeIDVFlow;
- (void)_queueEmailRequiredErrorViewController;
- (void)termsDataForIdentifier:(id)a0 format:(id)a1 completion:(id /* block */)a2;
- (void)featureApplicationChanged:(id)a0;
- (void)endApplyFlow;
- (void)applyFlowDidAppear;
- (id)applicationUpdatedAlertControllerWithHandler:(id /* block */)a0;
- (void)withdrawApplicationWithCompletion:(id /* block */)a0;
- (void)submitDocumentPage:(id)a0 selectedDocument:(id)a1 frontImage:(id)a2 backImage:(id)a3 completion:(id /* block */)a4;
- (void)termsDataForFeatureWithIdentifier:(id)a0 format:(id)a1 completion:(id /* block */)a2;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (void)termsAccepted:(BOOL)a0 termsIdentifier:(id)a1 secondaryIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)submitFieldsPage:(id)a0 completion:(id /* block */)a1;
- (id)initWithFeatureApplication:(id)a0 setupDelegate:(id)a1 context:(long long)a2 provisioningController:(id)a3;
- (id)initWithFeature:(unsigned long long)a0 setupDelegate:(id)a1 context:(long long)a2 provisioningController:(id)a3;
- (void)_invalidateAssertion;
- (void)_acquireAssertion;
- (void)termsShownWithIdentifier:(id)a0;
- (void)submitActionIdentifier:(id)a0 completion:(id /* block */)a1;

@end

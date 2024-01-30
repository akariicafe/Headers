@class PKPassView, PKPaymentProvisioningController, NSString, UIImage, PKVerificationRequestRecord, PKPaymentWebService, PKPaymentPass, NSNumber;
@protocol PKPaymentVerificationControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate> {
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    NSString *_inStoreBankAppTitle;
    NSNumber *_inStoreBankAppStoreID;
    UIImage *_passSnapshot;
    BOOL _bankAppNotFound;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (weak, nonatomic) id<PKPaymentVerificationControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) long long context;
@property (nonatomic) long long verificationContext;
@property (readonly, nonatomic) PKVerificationRequestRecord *verificationRecord;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly) NSString *verificationTitleString;
@property (readonly) NSString *verificationBodyString;
@property (readonly) BOOL shouldDisabledVerificationButton;
@property (readonly) NSString *continueVerificationButtonTitle;
@property (readonly) NSString *alternateMethodButtonTitle;
@property (retain, nonatomic) PKPassView *passView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0 passView:(id)a1 webService:(id)a2 context:(long long)a3 delegate:(id)a4 setupDelegate:(id)a5 verificationContext:(long long)a6;
- (void)dealloc;
- (id)passSnapshot;
- (void)performVerificationOptionsRequest:(id)a0 completion:(id /* block */)a1;
- (void)performVerificationUpdateRequest:(id)a0 completion:(id /* block */)a1;
- (void)continueVerification;
- (void)sharedPaymentServiceChanged;
- (void)_queue_sharedPaymentWebServiceChanged;
- (void)setVerificationRecord:(id)a0;
- (BOOL)_isBankAppInstalled;
- (void)_performStoreLookupForBankApp;
- (void)_didChangePresentation;
- (unsigned long long)_channelType;
- (id)_formattedPhoneNumber:(id)a0 forTextMessage:(BOOL)a1;
- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (void)_presentVerificationViewControllerForStepIdentifier:(id)a0;
- (void)_presentVerificatonEntryCompletionViewController;
- (void)_completeVerificationUsingOutboundCall;
- (void)_completeVerificationUsingBankApp;
- (void)_launchBankApp;
- (void)_requestDelegatePresentationOfViewController:(id)a0;
- (id)_outboundCallPhoneNumber;
- (void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)a0;
- (void)_downloadAndAddPassWithCompletion:(id /* block */)a0;
- (void)selectOtherVerificationMethod;
- (void)submitVerificationCode:(id)a0 completion:(id /* block */)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;

@end

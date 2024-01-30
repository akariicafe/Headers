@class PKPaymentSetupFieldsModel, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentWebService, PKPeerPaymentDocumentSubmissionController, NSArray, UIViewController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentIdentityVerificationController : NSObject {
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSArray *_viewControllers;
    unsigned long long _viewControllerIndex;
}

@property (readonly, nonatomic) PKPaymentSetupFieldsModel *fieldsModel;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) UIViewController *firstViewController;
@property (readonly, nonatomic) PKPeerPaymentWebService *webService;
@property (readonly, nonatomic) PKPeerPaymentIdentityVerificationResponse *response;
@property (readonly, nonatomic) PKPeerPaymentDocumentSubmissionController *captureController;

- (void).cxx_destruct;
- (BOOL)_hasRequiredFields;
- (id)init;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (id)initWithPeerPaymentWebService:(id)a0 identityVerificationResponse:(id)a1 setupDelegate:(id)a2 hideInitialSplashScreen:(BOOL)a3 context:(long long)a4;
- (void)_formViewControllersWithExplanationView:(BOOL)a0;
- (id)_nextLocalViewController;
- (void)_resetViewControllers;
- (id)_accountRestrictedErrorViewController;
- (id)_accountLockedErrorViewController;
- (id)_verificationErrorViewControllerWithError:(id)a0;
- (void)_identityVerificationResquestWithCompletion:(id /* block */)a0;
- (id)_generateFieldsModel;

@end

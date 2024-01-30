@class PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentWebService, PKPeerPaymentAccountResolutionController, NSString;

@interface PKPeerPaymentDocumentSubmissionController : PKPaymentDocumentSubmissionController <PKPeerPaymentAccountResolutionControllerDelegate>

@property (retain, nonatomic) PKPeerPaymentWebService *webService;
@property (retain, nonatomic) PKPeerPaymentIdentityVerificationResponse *identityVerificationResponse;
@property (retain, nonatomic) PKPeerPaymentAccountResolutionController *accountResolutionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)uploadID;
- (void)contactApplePressed;
- (id)initWithPeerPaymentWebService:(id)a0 identityVerificationResponse:(id)a1 setupDelegate:(id)a2 context:(long long)a3;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;

@end

@class PKPeerPaymentActionViewController, NSString, PKPeerPaymentAccount, PKPeerPaymentWebService;
@protocol PKPassLibraryDataProvider, PKPeerPaymentAccountResolutionControllerDelegate, PKPaymentSetupDelegate;

@interface PKPeerPaymentAccountResolutionController : NSObject <MFMailComposeViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentActionViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    long long _context;
    PKPeerPaymentWebService *_webService;
    PKPeerPaymentActionViewController *_peerPaymentActionViewController;
}

@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (weak, nonatomic) id<PKPeerPaymentAccountResolutionControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentSetupDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canShowContactSupportForPass:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_dismissViewController;
- (id)_paymentWebService;
- (id)_peerPaymentPass;
- (void)_callSupportWithPhoneNumber:(id)a0;
- (id)_contactAppleSupportAlertControllerForPass:(id)a0;
- (void)_emailSupportWithEmailAddress:(id)a0;
- (BOOL)_hasPeerPaymentPassProvisioned;
- (void)_openSupportWebsiteWithWebsiteURL:(id)a0;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)_presentActivationFlowWithCompletion:(id /* block */)a0;
- (void)_presentActivationFlowWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_presentContactAppleSupportAlertWithCompletion:(id /* block */)a0;
- (void)_presentFlowForAccountResolution:(unsigned long long)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_presentIdentityVerificationWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_presentPeerPaymentAction:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)_presentReOpenFlowWithCompletion:(id /* block */)a0;
- (void)_presentViewController:(id)a0;
- (unsigned long long)currentPeerPaymentAccountResolution;
- (id)initWithAccount:(id)a0 webService:(id)a1 context:(long long)a2 delegate:(id)a3 passLibraryDataProvider:(id)a4;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)peerPaymentActionViewControllerDidCancel:(id)a0;
- (void)peerPaymentActionViewControllerDidPerformAction:(id)a0;
- (BOOL)peerPaymentPassIsProvisionedOnDevice;
- (void)presentFlowForAccountResolution:(unsigned long long)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)presentResolutionForCurrentAccountStateWithCompletion:(id /* block */)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end

@class UINavigationController, NSString, PKPeerPaymentWebService, NSURL, RemoteUIController, UIViewController;

@interface PKPeerPaymentTermsController : NSObject <PKPeerPaymentUpdatedTermsViewControllerDelegate, RemoteUIControllerDelegate> {
    id /* block */ _completionHandler;
}

@property (weak, nonatomic) UIViewController *currentHostController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) NSURL *termsURL;
@property (readonly, copy, nonatomic) NSString *termsIdentifier;
@property (readonly, copy, nonatomic) NSString *passUniqueID;
@property (readonly, nonatomic) PKPeerPaymentWebService *webService;
@property (readonly, nonatomic) RemoteUIController *remoteUIController;
@property (nonatomic) long long paymentSetupContext;
@property (copy, nonatomic) id /* block */ customPresentationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_presentRemoteUIController;
- (void)_presentRemoteUIControllerWithUpdatedTermsViewController:(id)a0;
- (id)initWithTermsURL:(id)a0 termsIdentifier:(id)a1 passUniqueID:(id)a2 webService:(id)a3;
- (void)peerPaymentUpdatedTermsViewController:(id)a0 didSelectContinue:(BOOL)a1;
- (void)presentTermsOverController:(id)a0 showInterstitialViewController:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;

@end

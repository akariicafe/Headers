@class NSString, PKPeerPaymentRegistrationFlowController, NSDictionary;

@interface PKPeerPaymentRegistrationViewController : UIViewController <PKPaymentSetupDelegate> {
    PKPeerPaymentRegistrationFlowController *_flowController;
    NSDictionary *_userInfo;
    id /* block */ _dismissHandler;
    BOOL _dismissed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_dismiss;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setDismissHandler:(id /* block */)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithUserInfo:(id)a0;
- (void).cxx_destruct;
- (void)paymentSetupDidFinish:(id)a0;
- (void)startRegistrationFlowWithCompletion:(id /* block */)a0;

@end

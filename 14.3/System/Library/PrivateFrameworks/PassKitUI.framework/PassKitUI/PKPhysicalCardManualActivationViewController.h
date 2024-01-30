@class NSString, PKPhysicalCardActionController, PKPhysicalCard, CLLocationManager, CLInUseAssertion, PKBusinessChatController, PKOrderPhysicalCardHeroView, SFClient, PKPaymentPass;

@interface PKPhysicalCardManualActivationViewController : PKExplanationViewController <PKPhysicalCardActionControllerDelegate> {
    PKPhysicalCard *_physicalCard;
    PKPhysicalCardActionController *_actionController;
    PKPaymentPass *_paymentPass;
    unsigned long long _feature;
    NSString *_activationCode;
    PKOrderPhysicalCardHeroView *_hero;
    long long _state;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationManager;
    PKBusinessChatController *_businessChatController;
    SFClient *_sharingClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountService:(id)a0 account:(id)a1 paymentPass:(id)a2 physicalCard:(id)a3 activationCode:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_setupForCurrentState;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_presentDisplayableError:(id)a0;
- (void)physicalCardActionController:(id)a0 didChangeToState:(long long)a1 withError:(id)a2;
- (void)viewDidLoad;

@end

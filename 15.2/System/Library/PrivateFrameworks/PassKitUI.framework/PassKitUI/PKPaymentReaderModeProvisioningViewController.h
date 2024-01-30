@class PKPaymentProvisioningController, NSMutableDictionary, PKPaymentContactlessProductCredential, UILabel, PKPaymentSetupProduct, PKPaymentSetupFieldsModel, UIScrollView, NSString, PKPaymentPass, PKPasscodeUpgradeFlowController, NSTimer, PKReaderModeProvisioningView, PKPaymentWebService, PKContactlessCardIngester;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentReaderModeProvisioningViewController : UIViewController <PKContactlessCardIngesterDelegate> {
    PKReaderModeProvisioningView *_provisioningView;
    UIScrollView *_scrollView;
    unsigned long long _state;
    unsigned long long _stateOnRetry;
    BOOL _startedInitialIngestion;
    PKContactlessCardIngester *_cardIngester;
    PKPaymentContactlessProductCredential *_paymentCredential;
    PKPaymentPass *_paymentPass;
    NSString *_cardSessionToken;
    NSMutableDictionary *_durations;
    unsigned long long _startTime;
    id _currentNextActionBlock;
    NSTimer *_cardNotFoundTimer;
    UILabel *_debugStateLabel;
    NSString *_lastProvisioningStateName;
    BOOL _isGoodState;
    BOOL _idleTimerDisabled;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
}

@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) long long context;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) PKPaymentSetupFieldsModel *fieldsModel;
@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_done:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)contactlessCardIngester:(id)a0 didFailToIngestCardWithError:(id)a1 resetProvisioning:(BOOL)a2 isRecoverable:(BOOL)a3;
- (void)contactlessCardIngester:(id)a0 didUpdateCardIngestionStatus:(unsigned long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)acceptTerms;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (void)_performEligibilityWithCompletion:(id /* block */)a0;
- (void)_performProvisionWithCompletion:(id /* block */)a0;
- (void)_performFinishWithCompletion:(id /* block */)a0;
- (void)showEligibilityIssueWithReason:(long long)a0 learnMoreURL:(id)a1 completion:(id /* block */)a2;
- (void)showProvisioningError:(id)a0 completion:(id /* block */)a1;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 fieldsModel:(id)a3 product:(id)a4;
- (void)_setIdleTimerDisabled:(BOOL)a0;
- (void)handleNextActionWithCompletion:(id /* block */)a0;
- (void)_startIngestion;
- (void)_tearDownCardIngester;
- (void)_removePassIfNecessary;
- (void)_updateDebugStateLabel:(id)a0 isGoodState:(BOOL)a1;
- (void)_updateDebugStateLabel:(id)a0 isGoodState:(BOOL)a1 showTiming:(BOOL)a2;
- (void)_hideBackButton:(BOOL)a0;
- (void)_invalidateCardNotFoundTimer;
- (void)_resetProvisioningState;
- (void)_updateToUIState:(unsigned long long)a0;
- (void)showReaderModeError:(id)a0 isRecoverable:(BOOL)a1;
- (void)_startCardNotFoundTimer;
- (void)cardNotFoundTimerFired:(id)a0;
- (void)_setupCardIngester;
- (void)_startReadingCard;
- (void)_startTransferringCard;
- (void)_startAppletProvisioning;
- (void)_triggerNextActionLoop;
- (void)_logAndSendDurations;
- (void)_performPasscodeUpgradeIfNeededWithCompletion:(id /* block */)a0;
- (void)_showError:(id)a0 retry:(id /* block */)a1 completion:(id /* block */)a2;

@end

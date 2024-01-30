@class PKNFCTagReaderSession, NSString, PKAccountService, PKPhysicalCard, PKPaymentSessionHandle, PKBusinessChatController, PKPhysicalCardActivationAnimationView, PKPaymentPass, PKAccount;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate> {
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPhysicalCard *_physicalCard;
    PKPaymentPass *_paymentPass;
    unsigned long long _feature;
    PKPhysicalCardActivationAnimationView *_animationView;
    BOOL _invalidated;
    BOOL _deviceSupportsReaderMode;
    PKPaymentSessionHandle *_sessionHandle;
    PKNFCTagReaderSession *_readerSession;
    PKBusinessChatController *_businessChatController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_startTagReaderSession;
- (void)_stopTagReaderSession;
- (void)_presentActivationWithActivationCode:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)_invalidate;
- (void)viewDidAppear:(BOOL)a0;
- (void)nfcTagReaderSession:(id)a0 didDetectTags:(id)a1;
- (void)nfcTagReaderSessionDidEndUnexpectedly:(id)a0;
- (void)_dismiss;
- (void)viewDidLoad;
- (id)initWithAccountService:(id)a0 account:(id)a1 paymentPass:(id)a2 physicalCard:(id)a3;

@end

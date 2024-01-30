@class PKNFCTagReaderSession, NSString, PKAccountService, PKPhysicalCard, PKPaymentSessionHandle, PKBusinessChatController, PKAccountUser, PKPhysicalCardActivationAnimationView, PKPaymentPass, PKAccount;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate> {
    PKAccountService *_accountService;
    PKAccount *_account;
    PKAccountUser *_accountUser;
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

- (void)nfcTagReaderSession:(id)a0 didDetectTags:(id)a1;
- (void)nfcTagReaderSessionDidTimeout:(id)a0;
- (void)nfcTagReaderSessionDidEndUnexpectedly:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithAccountService:(id)a0 account:(id)a1 accountUser:(id)a2 paymentPass:(id)a3 physicalCard:(id)a4;
- (void)_startTagReaderSession;
- (void)_stopTagReaderSession;
- (void)_presentActivationWithActivationCode:(id)a0;

@end

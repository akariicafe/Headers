@class AMSBag, NSString, RUIElement, NSURLSession, PSCloudStorageOffersManager, ICQOffer, AAUIServerHookResponse, NSDictionary, NSTimer, NSArray, RUIObjectModel;
@protocol ICQServerHookDelegate, AAUIServerHookDelegate;

@interface ICQUpgradeStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AMSPurchaseResponseProtocol, AAUIServerHook> {
    ICQOffer *_offer;
    NSURLSession *_session;
    PSCloudStorageOffersManager *_cloudStorageOffersManager;
    id<ICQServerHookDelegate> _flowDelegate;
    NSDictionary *_clientInfo;
    long long _statusCode;
    long long _amsServerErrorCode;
    RUIElement *_ruiElement;
    NSTimer *_stopActivityIndicatorTimer;
    id /* block */ _interruptedCompletion;
    BOOL _isListeningToAMS;
    NSArray *_interruptedBuyErrorCodes;
    NSString *_userAgentSuffix;
}

@property (retain, nonatomic) AMSBag *bag;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSString *buttonId;
@property (retain, nonatomic) NSString *flowtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate;

- (void)_registerForDarwinNotifications;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)managerDidCancel:(id)a0;
- (void)manager:(id)a0 willPresentViewController:(id)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (void).cxx_destruct;
- (void)_stopActivityIndicator;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithOffer:(id)a0 flowDelegate:(id)a1;
- (void)beginOsloPurchaseFlow;
- (void)_firedStopActivityIndicatorTimer:(id)a0;
- (long long)offerAction;
- (id)parseParameters:(id)a0 action:(long long)a1;
- (void)beginPurchaseFlow;
- (void)mockPurchaseFlow;
- (void)beginLegacyPurchaseFlow;
- (id)upgradeStorageContextHeaderDictionary;
- (id)dummyRequestWithAccount:(id)a0 token:(id)a1;
- (id)upgradeStorageQueryDictionary;
- (void)registerAMSBagKeySets;
- (void)_enableCloudPhotoLibraryWithCompletion:(id /* block */)a0;
- (id)storageContextJSONString;
- (id)upgradeStorageKeyBag;
- (id)upgradeStorageQueryKeySet;
- (void)_appGoesToBackground:(id)a0;
- (void)_handlePurchaseRequestSucceededNotification;

@end

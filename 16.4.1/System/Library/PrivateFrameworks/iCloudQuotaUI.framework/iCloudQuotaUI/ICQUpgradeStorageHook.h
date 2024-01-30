@class RUIElement, NSString, NSTimer, NSURLSession, RUIServerHookResponse, ICQOffer, ICQUICloudStorageOffersManager, ICQPurchase, NSDictionary, RUIObjectModel;
@protocol ICQServerHookDelegate, RUIServerHookDelegate;

@interface ICQUpgradeStorageHook : NSObject <ICQUICloudStorageOffersManagerDelegate, ICQPurchaseDelegate, ICQUIServerHook> {
    ICQOffer *_offer;
    NSURLSession *_session;
    ICQUICloudStorageOffersManager *_cloudStorageOffersManager;
    id<ICQServerHookDelegate> _flowDelegate;
    NSDictionary *_clientInfo;
    long long _legacyStatusCode;
    RUIElement *_ruiElement;
    NSTimer *_stopActivityIndicatorTimer;
    BOOL _isListeningToAMS;
}

@property (retain, nonatomic) ICQPurchase *purchase;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSString *buttonId;
@property (retain, nonatomic) NSString *flowtype;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;

- (void).cxx_destruct;
- (long long)_statusCode;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)manager:(id)a0 willPresentViewController:(id)a1;
- (void)managerDidCancel:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)stopActivityIndicator;
- (void)_appGoesToBackground:(id)a0;
- (void)_firedStopActivityIndicatorTimer:(id)a0;
- (void)_handlePurchaseRequestSucceededNotification;
- (void)beginLegacyPurchaseFlow;
- (void)beginOsloPurchaseFlow;
- (void)beginPurchaseFlowUsingParameters:(id)a0 completion:(id /* block */)a1;
- (id)continuationResponseBody;
- (id)dummyRequestWithAccount:(id)a0 token:(id)a1;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 completion:(id /* block */)a2;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 completion:(id /* block */)a2;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 completion:(id /* block */)a2;
- (id)initWithOffer:(id)a0 flowDelegate:(id)a1;
- (BOOL)isLiftUIFlow;
- (void)mockPurchaseFlow;
- (long long)offerAction;
- (void)registerForDarwinNotifications;
- (id)storageContextJSONString;
- (id)upgradeStorageContextHeaderDictionary;

@end

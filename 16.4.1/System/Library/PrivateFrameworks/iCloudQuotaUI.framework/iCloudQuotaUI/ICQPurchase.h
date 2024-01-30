@class NSURLSession, NSArray, NSDictionary, ICQOffer, NSString;
@protocol ICQPurchaseDelegate;

@interface ICQPurchase : NSObject <AMSPurchaseResponseProtocol>

@property (retain, nonatomic) ICQOffer *offer;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSDictionary *clientInfo;
@property (retain, nonatomic) NSArray *interruptedBuyErrorCodes;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *userAgentSuffix;
@property (weak, nonatomic) id<ICQPurchaseDelegate> delegate;
@property (nonatomic) BOOL isLegacyNativeFlow;
@property (nonatomic) long long amsServerErrorCode;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearCacheAndNotifyClients;
+ (id /* block */)clearCacheAndNotifyClientsWithCompletion:(id /* block */)a0;
+ (id)parseParameters:(id)a0 action:(long long)a1;
+ (id)upgradeStorageKeyBagForOffer:(id)a0 buttonID:(id)a1;
+ (id)upgradeStorageQueryDictionaryForOffer:(id)a0 buttonID:(id)a1;
+ (id)upgradeStorageQueryKeySet;
+ (id)userAgentForBundleIdentifier:(id)a0 appVersion:(id)a1 attributionSuffix:(id)a2;

- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (id)actionString;
- (void)preparePurchase;
- (void)beginPurchaseFlow;
- (void)handlePurchaseCompletionWithError:(id)a0;
- (id)initWithOffer:(id)a0 clientInfo:(id)a1;
- (long long)offerAction;
- (void)startPurchaseWithCompletion:(id /* block */)a0;

@end

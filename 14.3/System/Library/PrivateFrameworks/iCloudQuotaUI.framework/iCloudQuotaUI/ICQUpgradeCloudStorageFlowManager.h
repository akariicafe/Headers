@class NSURLSession, NSString, NSDictionary, PSCloudStorageOffersManager;

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager <PSCloudStorageOffersManagerDelegate> {
    NSURLSession *_buyProductSession;
}

@property (retain, nonatomic) NSString *storagePurchaseButtonId;
@property (readonly, nonatomic) NSDictionary *storagePurchaseKeybag;
@property (retain, nonatomic) PSCloudStorageOffersManager *storageOffersManager;
@property (copy, nonatomic) id /* block */ purchaseCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldSubclassShowForOffer:(id)a0;
+ (BOOL)_canDoTokenPurchaseWithOffer:(id)a0;

- (void).cxx_destruct;
- (void)manager:(id)a0 willPresentViewController:(id)a1;
- (void)managerDidCancel:(id)a0;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (id)initSubclassWithOffer:(id)a0;
- (void)_performPageButtonActionWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)_performPurchase;
- (id)_buyProductQueryKeySet;
- (id)_storageContextJSONString;
- (id)_dummyRequestWithAccount:(id)a0 token:(id)a1;
- (id)_storageContextHeaderDictionary;
- (id)_buyProductQueryDictionary;
- (void)_adoptRemoteUIWithPurchaseToken:(id)a0 buyParameters:(id)a1 requestHeaders:(id)a2;
- (id)secureTokenMissingError;
- (void)_performPurchaseUsingSettingsUI;
- (void)_buyProductShouldUseToken:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_performPurchaseUsingTouchID;

@end

@class NSURLSession, NSString, NSDictionary, ICQUICloudStorageOffersManager;

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager <ICQUICloudStorageOffersManagerDelegate> {
    NSURLSession *_buyProductSession;
}

@property (retain, nonatomic) NSString *storagePurchaseButtonId;
@property (readonly, nonatomic) NSDictionary *storagePurchaseKeybag;
@property (retain, nonatomic) ICQUICloudStorageOffersManager *storageOffersManager;
@property (copy, nonatomic) id /* block */ purchaseCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canDoTokenPurchaseWithOffer:(id)a0;
+ (BOOL)shouldSubclassShowForOffer:(id)a0;

- (void).cxx_destruct;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)manager:(id)a0 willPresentViewController:(id)a1;
- (void)managerDidCancel:(id)a0;
- (id)_dummyRequestWithAccount:(id)a0 token:(id)a1;
- (id)_storageContextHeaderDictionary;
- (void)_performPurchaseUsingSettingsUI;
- (void)_adoptRemoteUIWithPurchaseToken:(id)a0 buyParameters:(id)a1 requestHeaders:(id)a2;
- (id)_buyProductQueryDictionary;
- (id)_buyProductQueryKeySet;
- (void)_buyProductShouldUseToken:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_performPageButtonActionWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)_performPurchase;
- (void)_performPurchaseUsingTouchID;
- (id)_storageContextJSONString;
- (id)initSubclassWithOffer:(id)a0;
- (id)secureTokenMissingError;

@end

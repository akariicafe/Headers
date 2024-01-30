@class FCPurchaseController, NSMutableDictionary, NSString, FCKeyValueStore;
@protocol FCPurchaseFlowOverrideProviderType, FCPurchaseIntegrityChecker, FCPaymentTransactionManager, FCPurchaseReceiptProvider, FCBundleSubscriptionManagerType, FCCoreConfigurationManager, FCPurchaseManagerDelegate;

@interface FCPurchaseManager : NSObject <FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType>

@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (readonly, nonatomic) id<FCPaymentTransactionManager> paymentTransactionManager;
@property (readonly, nonatomic) id<FCPurchaseIntegrityChecker> purchaseIntegrityChecker;
@property (readonly, nonatomic) id<FCPurchaseReceiptProvider> purchaseReceiptProvider;
@property (readonly, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (readonly, nonatomic) FCPurchaseController *purchaseController;
@property (retain, nonatomic) NSMutableDictionary *ongoingPurchaseEntriesByProductID;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (copy, nonatomic) NSString *lastSignedInItunesAccountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCPurchaseManagerDelegate> delegate;
@property (retain, nonatomic) id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider;

- (void)activityObservingApplicationDidEnterBackground;
- (BOOL)anyOngoingPurchases;
- (id)init;
- (void).cxx_destruct;
- (id)_ongoingPurchaseEntryIDForProductID:(id)a0;
- (id)initWithCloudContext:(id)a0 purchaseIntegrityChecker:(id)a1 purchaseReceiptProvider:(id)a2 paymentTransactionManager:(id)a3 bundleSubscriptionManager:(id)a4 keyValueStoreOption:(unsigned long long)a5;
- (void)transactionPurchasedWithProductID:(id)a0;
- (BOOL)isPurchaseTimeElapsedWithEntry:(id)a0;
- (void)clearAllOngoingPurchaseEntries;
- (void)simulateSuccessfulPurchaseWithProductID:(id)a0 tagID:(id)a1 purchaseID:(id)a2;
- (void)finishPurchaseTransactionWithProductID:(id)a0;
- (id)fetchPurchaseMetadataForPurchaseID:(id)a0 restorePurchase:(BOOL)a1;
- (void)simulateFailurePurchaseWithProductID:(id)a0 transactionState:(long long)a1 error:(id)a2;
- (BOOL)signInDetected;
- (void)removeOngoingPurchaseEntryForProductID:(id)a0;
- (id)ongoingPurchaseEntryForProductID:(id)a0;
- (BOOL)isPurchaseOngoingForTagID:(id)a0;
- (void)transactionFailedWithProductID:(id)a0 transactionState:(long long)a1 transactionError:(id)a2;
- (void)startBundlePurchaseWithPurchase:(id)a0 error:(id *)a1;
- (void)startPurchaseWithTagID:(id)a0 purchase:(id)a1 webAccessOptIn:(BOOL)a2 error:(id *)a3;
- (void)loadLocalCachesFromStore;
- (void)startPurchaseWithTagID:(id)a0 productID:(id)a1 purchaseID:(id)a2 appAdamID:(id)a3 storeExternalVersion:(id)a4 price:(id)a5 webAccessOptIn:(BOOL)a6 payment:(id)a7 error:(id *)a8;
- (void)_purchaseFailedWithProductID:(id)a0 transactionState:(long long)a1 transactionError:(id)a2 ongoingPurchaseEntry:(id)a3;
- (void)saveToDisk;
- (void)performEntitlementWithTagID:(id)a0 completion:(id /* block */)a1;
- (void)simulateSuccessfulPurchaseWithProductID:(id)a0 tagID:(id)a1;
- (void)cleanupStaleOngoingPurchaseEntries;

@end

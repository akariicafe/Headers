@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject

@property (retain, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;
@property (retain, nonatomic) FCKeyValueStore *localStore;

- (void).cxx_destruct;
- (void)cleanupStaleExpiredEntry;
- (void)updateEntry:(id)a0;
- (id)initWithLocalStore:(id)a0;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)addBundleChannelIDs:(id)a0 bundleChannelIDsVersion:(id)a1 purchaseID:(id)a2 inTrialPeriod:(BOOL)a3 isPurchaser:(BOOL)a4 servicesBundlePurchaseID:(id)a5 isAmplifyUser:(BOOL)a6;

@end

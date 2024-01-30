@class NSDictionary, NSMutableDictionary, FCKeyValueStore;

@interface FCPurchaseLookUpEntriesManager : NSObject

@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (retain, nonatomic) NSMutableDictionary *entriesByTagID;
@property (readonly, nonatomic) NSDictionary *lookupEntriesByTagID;

- (void)removeAllEntries;
- (void)removeEntry:(id)a0;
- (id)_purchaseLookUpEntryIDForTagID:(id)a0;
- (void).cxx_destruct;
- (void)removeEntryForTagID:(id)a0;
- (void)updateEntry:(id)a0;
- (void)addEntryWithTagID:(id)a0 purchaseID:(id)a1 lastVerificationTime:(id)a2 lastVerificationFailureTime:(id)a3 purchaseType:(unsigned long long)a4 purchaseValidationState:(unsigned long long)a5 isNewsAppPurchase:(BOOL)a6 dateOfExpiration:(id)a7 hasShownRenewalNotice:(BOOL)a8;
- (id)initWithLocalStore:(id)a0;
- (void)loadLocalCachesFromStore;

@end

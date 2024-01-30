@class NSString, PFUbiquityLocation, NSMutableSet, NSSQLCore, PFUbiquitySwitchboardCacheWrapper;

@interface PFUbiquityStoreExportContext : NSObject

@property (readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly, nonatomic) NSString *localPeerID;
@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) NSMutableSet *transactionEntries;
@property (retain, nonatomic) NSSQLCore *store;
@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;

- (void)dealloc;
- (id)description;
- (id)initWithStoreName:(id)a0 andUbiquityRootLocation:(id)a1 forLocalPeerID:(id)a2;
- (id)addTransactionEntryForGlobalID:(id)a0 andTransactionType:(int)a1;

@end

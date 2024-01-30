@class NSString, PFUbiquityLocation, NSMutableSet, NSSQLCore, PFUbiquitySwitchboardCacheWrapper;

@interface PFUbiquityStoreExportContext : NSObject {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSMutableSet *_transactionEntries;
    NSSQLCore *_store;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
}

- (id)initWithStoreName:(id)a0 andUbiquityRootLocation:(id)a1 forLocalPeerID:(id)a2;
- (id)description;
- (void)dealloc;

@end

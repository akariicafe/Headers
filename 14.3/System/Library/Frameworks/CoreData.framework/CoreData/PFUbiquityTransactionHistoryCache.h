@class PFUbiquityLocation, NSString, NSArray, NSPersistentStore, PFUbiquityKnowledgeVector, NSMutableDictionary, NSRecursiveLock, NSPersistentStoreCoordinator, NSMutableArray, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionHistoryCache : NSObject {
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    NSPersistentStoreCoordinator *_privatePSC;
    NSMutableDictionary *_peerIDToHistoryArray;
    NSMutableDictionary *_globalIDToHistoryArray;
    NSRecursiveLock *_peerIDToHistoryArrayLock;
    NSMutableArray *_entriesToWrite;
    BOOL _hasScheduledWriteBlock;
}

@property (readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (retain, nonatomic) PFUbiquityGlobalObjectIDCache *globalIDCache;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector *cacheKV;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector *minCacheKV;
@property (readonly, nonatomic) NSArray *cachedGlobalIDs;

- (id)init;
- (void)dealloc;
- (BOOL)cacheTransactionHistory:(id *)a0;
- (BOOL)purgeCacheAndWritePendingEntries:(BOOL)a0 error:(id *)a1;
- (BOOL)writePendingEntries:(id *)a0;
- (id)cachedTransactionHistoryForGlobalID:(id)a0;
- (BOOL)addTransactionEntryLight:(id)a0 needsWrite:(BOOL)a1 error:(id *)a2;
- (BOOL)addTransactionEntryLights:(id)a0 error:(id *)a1;
- (id)description;
- (id)describeCaches;
- (id)describeCachesVerbose;
- (BOOL)addTransactionEntry:(id)a0 error:(id *)a1;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 privateStore:(id)a2 andUbiquityRootLocation:(id)a3;

@end

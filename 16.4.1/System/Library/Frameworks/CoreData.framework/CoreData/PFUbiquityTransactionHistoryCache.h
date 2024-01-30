@class PFUbiquityLocation, NSString, NSRecursiveLock, NSPersistentStore, PFUbiquityKnowledgeVector, NSMutableDictionary, NSPersistentStoreCoordinator, NSMutableArray, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionHistoryCache : NSObject {
    NSString *_localPeerID;
    PFUbiquityLocation *_rootLocation;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    NSPersistentStoreCoordinator *_privatePSC;
    NSMutableDictionary *_peerIDToHistoryArray;
    NSMutableDictionary *_globalIDToHistoryArray;
    NSRecursiveLock *_peerIDToHistoryArrayLock;
    NSMutableArray *_entriesToWrite;
    PFUbiquityKnowledgeVector *_cacheKV;
    PFUbiquityKnowledgeVector *_minCacheKV;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    BOOL _hasScheduledWriteBlock;
}

- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)addTransactionEntry:(id)a0 error:(id *)a1;

@end

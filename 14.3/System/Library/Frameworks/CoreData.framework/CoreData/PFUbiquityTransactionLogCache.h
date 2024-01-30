@class NSRecursiveLock, NSString, NSMutableDictionary, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
    PFUbiquityGlobalObjectIDCache *_gidCache;
}

- (id)init;
- (void)dealloc;
- (void)cacheExportedLog:(id)a0;
- (id)initWithLocalPeerID:(id)a0 andGlobalIDCache:(id)a1;
- (id)retainedCachedLogForLocation:(id)a0 loadWithRetry:(BOOL)a1 error:(id *)a2;
- (void)removeLogsCachedForStoreNamed:(id)a0 withUbiquityRootLocation:(id)a1;

@end

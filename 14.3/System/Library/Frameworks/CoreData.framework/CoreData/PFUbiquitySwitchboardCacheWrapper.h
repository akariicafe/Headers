@class PFUbiquityLocation, NSString, NSLock, PFUbiquityKnowledgeVector, PFUbiquityPeerReceipt, PFUbiquityPeerRangeCache, PFUbiquityTransactionHistoryCache, PFUbiquityGlobalObjectIDCache, PFUbiquityTransactionLogCache;

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {
    BOOL _pendingReceiptWrite;
    NSLock *_receiptFileLock;
    BOOL _allowSchedulingOfReceiptFileWrites;
}

@property (readonly, nonatomic) PFUbiquityGlobalObjectIDCache *globalIDCache;
@property (readonly, nonatomic) PFUbiquityPeerRangeCache *peerRangeCache;
@property (readonly, nonatomic) PFUbiquityTransactionLogCache *transactionLogCache;
@property (readonly, nonatomic) PFUbiquityTransactionHistoryCache *transactionHistoryCache;
@property (readonly, nonatomic) PFUbiquityPeerReceipt *peerReceipt;
@property (retain) PFUbiquityKnowledgeVector *kv;
@property (retain) PFUbiquityKnowledgeVector *baselineKV;
@property (readonly, nonatomic) NSString *localPeerID;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly, nonatomic) NSString *storeName;

- (id)init;
- (void)dealloc;
- (void)scheduleReceiptFileWrite:(id)a0;
- (void)cacheWrapperWillBeRemovedFromEntry;
- (id)initWithStoreName:(id)a0 privateStore:(id)a1 forLocalPeerID:(id)a2 andUbiquityRootLocation:(id)a3;
- (void)_appWillResignActive:(id)a0;
- (BOOL)writeReceiptFile:(BOOL)a0 error:(id *)a1;

@end

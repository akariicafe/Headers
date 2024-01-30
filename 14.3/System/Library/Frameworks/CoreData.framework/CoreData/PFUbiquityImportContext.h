@class _PFUbiquityStack, NSString, PFUbiquityPeer, PFUbiquityTransactionLog, PFUbiquityKnowledgeVector, PFUbiquityStoreMetadata, NSDictionary, PFUbiquitySwitchboardCacheWrapper, NSMutableDictionary, PFUbiquityBaselineHeuristics, PFUbiquityStoreSaveSnapshot;

@interface PFUbiquityImportContext : NSObject

@property (retain, nonatomic) _PFUbiquityStack *stack;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;
@property (readonly, nonatomic) PFUbiquityPeer *actingPeer;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;
@property (retain, nonatomic) NSString *exportingPeerID;
@property (retain, nonatomic) PFUbiquityTransactionLog *transactionLog;
@property (retain, nonatomic) PFUbiquityStoreSaveSnapshot *storeSaveSnapshot;
@property (retain, nonatomic) NSDictionary *globalIDToLocalIDURICache;
@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;
@property (readonly, nonatomic) NSMutableDictionary *globalIDToFetchedObject;
@property (retain, nonatomic) PFUbiquityBaselineHeuristics *heuristics;

- (id)init;
- (void)dealloc;
- (BOOL)prefetchManagedObjectsInContext:(id)a0 error:(id *)a1;
- (id)initWithStack:(id)a0 andStoreMetadata:(id)a1;
- (void)setActingPeer:(id)a0;
- (id)initWithStoreName:(id)a0 andUbiquityRootLocation:(id)a1 withLocalPeerID:(id)a2;

@end

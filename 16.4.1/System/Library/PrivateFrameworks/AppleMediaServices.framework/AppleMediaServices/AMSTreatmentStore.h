@class AMSLRUCache;

@interface AMSTreatmentStore : NSObject

@property (class, nonatomic) BOOL attemptConnectionInTests;

@property (readonly) AMSLRUCache *areasCache;
@property (readonly) AMSLRUCache *treatmentsCache;

+ (id)defaultTreatmentStore;

- (void)_cacheAreas:(id)a0 forTopic:(id)a1;
- (id)synchronizeTreatments;
- (id)areasForNamespaces:(id)a0;
- (id)_cachedAreasForNamespace:(id)a0;
- (void)_cacheAreas:(id)a0 forNamespace:(id)a1;
- (id)areasForTopics:(id)a0;
- (id)_treatmentStoreService;
- (id)treatmentsPayloadForAreas:(id)a0;
- (void)dealloc;
- (void)_treatmentsDidSyncronize:(id)a0;
- (void)_cacheTreatment:(id)a0 forArea:(id)a1;
- (id)init;
- (id)_cachedAreasForTopic:(id)a0;
- (id)experimentDataForAreas:(id)a0;
- (id)treatmentsForAreas:(id)a0;
- (void).cxx_destruct;
- (id)_cachedTreatmentForArea:(id)a0;

@end

@class FPQueryEnumerationSettings, NSString, NSPredicate, FPSpotlightQueryDescriptor, NSObject, FPSpotlightCollectorManager;
@protocol OS_dispatch_queue, FPSpotlightDataSourceDelegate;

@interface FPSpotlightDataSource : NSObject <FPSpotlightCollectorObserving, FPCollectionDataSource> {
    NSObject<OS_dispatch_queue> *_queue;
    FPSpotlightCollectorManager *_collectorManager;
    FPQueryEnumerationSettings *_enumerationSettings;
    NSPredicate *_predicate;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor;
@property (weak, nonatomic) id<FPSpotlightDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL hasMoreIncoming;

- (void)_invalidateWithError:(id)a0;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)start;
- (id)initWithQueryDescriptor:(id)a0 predicate:(id)a1;
- (void)invalidate;
- (void)collector:(id)a0 didGatherItems:(id)a1;
- (id)itemPredicateForCollector:(id)a0;
- (unsigned long long)maximumNumberOfItemsForCollector:(id)a0;
- (void)collector:(id)a0 didUpdateItemsOrigin:(unsigned long long)a1;
- (void)collector:(id)a0 didRemoveItemIDs:(id)a1;
- (void)collector:(id)a0 didUpdateItems:(id)a1;
- (void)collector:(id)a0 didEncounterError:(id)a1;
- (void)enumerationMightHaveResumed;

@end

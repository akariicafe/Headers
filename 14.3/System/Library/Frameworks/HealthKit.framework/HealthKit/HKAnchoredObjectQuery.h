@class NSString, HKQueryAnchor, NSMutableArray;

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface> {
    BOOL _initialHandlerCalled;
    NSMutableArray *_samplesPendingDelivery;
    NSMutableArray *_deletedObjectsPendingDelivery;
    _Atomic BOOL _includeDeletedObjects;
    HKQueryAnchor *_currentAnchor;
}

@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double collectionInterval;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL includeAutomaticTimeZones;
@property (nonatomic) BOOL ignoreDeletedObjects;
@property (nonatomic) BOOL includeContributorInformation;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;

- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 predicate:(id)a1 anchor:(id)a2 limit:(unsigned long long)a3 resultsHandler:(id /* block */)a4;
- (void)client_deliverSampleObjects:(id)a0 deletedObjects:(id)a1 anchor:(id)a2 clearPendingSamples:(BOOL)a3 deliverResults:(BOOL)a4 query:(id)a5;
- (id)initWithType:(id)a0 predicate:(id)a1 anchor:(unsigned long long)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;

@end

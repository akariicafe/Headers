@class NSMutableArray, HKQueryAnchor, NSObject;
@protocol OS_dispatch_queue;

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {
    BOOL _deliversUpdates;
    BOOL _initialResultsSent;
    BOOL _objectsDeleted;
    BOOL _includeDeletedObjects;
    HKQueryAnchor *_startAnchor;
    unsigned long long _deliveredResults;
    NSObject<OS_dispatch_queue> *_batchQueue;
    NSMutableArray *_addedSamplesPendingResume;
    NSMutableArray *_deletedSamplesPendingResume;
}

@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;
@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) BOOL includeAutomaticTimeZones;
@property (readonly, nonatomic) BOOL includeContributorInformation;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void)_queue_didDeactivate;
- (id)_maxRowIDInDatabaseWithError:(id *)a0;
- (void)_queue_deliverSamples:(id)a0 deletedObjects:(id)a1 anchor:(id)a2 clearPendingSamples:(BOOL)a3 deliverResults:(BOOL)a4 description:(id)a5;
- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)description;
- (void)_queue_startForInitialResults;
- (void)_queue_startForUpdate;
- (BOOL)_shouldObserveOnPause;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_samplesWereRemovedWithAnchor:(id)a0;
- (BOOL)_queue_shouldAcceptUpdates;
- (id)_queue_configuredEntityEnumerator;
- (id)anchoredObjectQueryClient;
- (void)_queue_handleBatchedQueryResult:(long long)a0 error:(id)a1;
- (BOOL)validateConfiguration:(id *)a0;
- (BOOL)_queue_shouldAccumulateUpdates;
- (void)_queue_didChangeStateFromPreviousState:(long long)a0 state:(long long)a1;

@end

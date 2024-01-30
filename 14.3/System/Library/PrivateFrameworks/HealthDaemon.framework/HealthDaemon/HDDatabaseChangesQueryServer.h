@class _HKDatabaseChangesQueryServerConfiguration, NSMutableDictionary, NSString, HKQueryAnchor;

@interface HDDatabaseChangesQueryServer : HDQueryServer {
    NSMutableDictionary *_pendingSampleTypeChanges;
    HKQueryAnchor *_anchor;
    BOOL _hasDeliveredInitialResults;
    NSString *_detailsQueryDateIndexSQL;
    NSString *_detailsQueryAnchorIndexSQL;
}

@property (readonly, copy, nonatomic) _HKDatabaseChangesQueryServerConfiguration *databaseChangesQueryConfiguration;

+ (Class)queryClass;

- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)objectTypes;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (BOOL)validateConfiguration:(id *)a0;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (void)_queue_deliverError:(id)a0;
- (id)_queue_changesByTypeWithDatabase:(id)a0 sinceAnchor:(long long)a1 error:(id *)a2;
- (void)_queue_deliverQueryAnchor:(id)a0 sampleTypeChanges:(id)a1;
- (id)_authorizedObjectTypes;
- (id)_queue_sampleTypeCodesWithUnfrozenSeriesWithAuthorizedTypes:(id)a0 database:(id)a1 error:(id *)a2;
- (long long)_queue_queryStrategyForType:(id)a0 sinceAnchor:(long long)a1 currentAnchor:(long long)a2;
- (id)_queue_detailedChangeUsingAnchorIndexStrategyForType:(id)a0 sinceAnchor:(long long)a1 hasUnfrozenSeries:(BOOL)a2 database:(id)a3 error:(id *)a4;
- (id)_queue_detailedChangeUsingDateIndexStrategyForType:(id)a0 sinceAnchor:(long long)a1 hasUnfrozenSeries:(BOOL)a2 database:(id)a3 error:(id *)a4;
- (void)_queue_addPendingChangesForSample:(id)a0;

@end

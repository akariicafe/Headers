@class NSDictionary, _HKDelayedOperation;
@protocol HDSensorDatum;

@interface HDAggregateDataCollector : HDDataCollector {
    _HKDelayedOperation *_historicalFetchOperation;
    id<HDSensorDatum> _lastReceivedSensorDatum;
    BOOL _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    BOOL _fetchingHistoricalData;
    BOOL _needsHistoricalFetch;
    double _maxDatumDuration;
}

@property double maxDatumDuration;
@property (readonly, nonatomic) BOOL requiresSampleAggregation;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)_queue_beginStreaming;
- (void)updateHistoricalDataForcedUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateHistoricalData;
- (void)updateHistoricalDataWithCompletion:(id /* block */)a0;
- (void)_queue_executeHistoricalFetchOperation;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(id /* block */)a0;
- (double)_queue_maxDatumDuration;
- (void)_queue_beginUpdates;
- (id)_queue_lastReceivedSensorDatum;
- (double)_queue_aggregationInterval;
- (void)beginUpdatesFromDatum:(id)a0 withHandler:(id /* block */)a1;
- (void)_queue_updateLastReceivedSensorDatum:(id)a0;
- (void)_queue_handleUpdatingHistoricalDataForcedUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_fetchHistoricalDataForcedUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)_queue_fetchHistoricalDataWithCompletion:(id /* block */)a0;
- (void)_queue_processSensorData:(id)a0 lastSensorDatum:(id)a1 completion:(id /* block */)a2;
- (void)fetchHistoricalSensorDataSinceDatum:(id)a0 databaseIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)_queue_processSensorDataBatched:(id)a0 firstDatum:(id)a1 lastSensorDatum:(id *)a2;
- (id)hkObjectsFromSensorData:(id)a0 baseSensorDatum:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (void)willPersistHKObjects:(id)a0;
- (id)_queue_lastReceivedSecondaryContext;
- (void)_queue_updateLastReceivedSecondaryContext:(id)a0;

@end

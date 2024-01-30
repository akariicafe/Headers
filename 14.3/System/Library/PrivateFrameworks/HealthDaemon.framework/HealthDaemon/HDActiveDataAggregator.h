@class NSObject, NSMutableDictionary, NSLock, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDActiveDataAggregator : HDDataAggregator {
    NSLock *_aggregationLock;
    NSMutableDictionary *_currentAggregationStates;
    _HKDelayedOperation *_delayedAggregationOperation;
    NSObject<OS_dispatch_queue> *_delayedAggregationQueue;
}

- (id)initWithDataCollectionManager:(id)a0;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;
- (void).cxx_destruct;
- (double)aggregationInterval;
- (id)initialAggregationState;
- (id)configurationForCollector:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;
- (Class)sensorDatumClass;
- (double)aggregationIntervalForCollector:(id)a0;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;
- (void)unregisterDataCollector:(id)a0;
- (void)registerDataCollector:(id)a0 state:(id)a1;
- (void)_reconsiderDelayedAggregation;
- (void)_requestAggregationThroughDate:(id)a0 mode:(long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_aggregateForAllDevicesForCollector:(id)a0 date:(id)a1 mode:(long long)a2 options:(unsigned long long)a3;
- (void)_aggregateForCollector:(id)a0 device:(id)a1 requestedAggregationDate:(id)a2 mode:(long long)a3 options:(unsigned long long)a4;
- (void)requestAggregationThroughDate:(id)a0 mode:(long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)recomputeCollectorConfiguration;

@end

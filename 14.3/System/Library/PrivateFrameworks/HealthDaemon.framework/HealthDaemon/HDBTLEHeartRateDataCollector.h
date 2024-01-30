@class HKHealthService, NSString, HDProfile, HDDataCollectorConfiguration, NSArray, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    HDDataCollectorConfiguration *_configuration;
    NSArray *_oneShotServices;
    NSMutableDictionary *_pendingSessions;
    HKHealthService *_connectedService;
    unsigned long long _connectedSessionIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)identifierForDataAggregator:(id)a0;
- (id)aggregator;
- (void)_queue_service:(id)a0 sessionDidConnect:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_queue_startHeartRateCollection;
- (BOOL)_queue_startHeartRateServices:(id)a0;
- (id)_queue_currentState;
- (void)_cancelSessionsWithIdentifiers:(id)a0;
- (void)_queue_service:(id)a0 sessionDidDisconnect:(unsigned long long)a1;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (void)startOneShotCollectionForService:(id)a0;
- (void)_queue_updateForCurrentConfiguration;
- (void)_queue_stateDidChange;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (void)_queue_handleCharacteristic:(id)a0 device:(id)a1;
- (void)_queue_configurationChanged:(id)a0;
- (void)_queue_stopHeartRateCollection;
- (void)_queue_service:(id)a0 session:(unsigned long long)a1 statusDidChange:(long long)a2 finished:(BOOL)a3 error:(id)a4;
- (id)sourceForDataAggregator:(id)a0;
- (id)_heartRatePairingsWithError:(id *)a0;

@end

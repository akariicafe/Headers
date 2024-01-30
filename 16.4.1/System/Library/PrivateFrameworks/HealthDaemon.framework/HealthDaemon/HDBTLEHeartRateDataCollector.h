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

- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)initWithProfile:(id)a0;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (id)sourceForDataAggregator:(id)a0;
- (void)startOneShotCollectionForService:(id)a0;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (void).cxx_destruct;

@end

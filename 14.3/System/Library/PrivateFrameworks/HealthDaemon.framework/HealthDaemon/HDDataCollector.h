@class HDDeviceEntity, NSString, HDProfile, HDSourceEntity, HDPrimaryProfile, NSObject, HKObjectType;
@protocol OS_dispatch_queue;

@interface HDDataCollector : NSObject <HDHealthDataCollector> {
    HDPrimaryProfile *_primaryProfile;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    double _collectionInterval;
    long long _state;
    HKObjectType *_observedType;
    HDDeviceEntity *_deviceEntity;
    long long _failureRetryCount;
    BOOL _disabled;
}

@property double collectionInterval;
@property (readonly) HDSourceEntity *sourceEntity;
@property BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domain;
+ (Class)sensorDatumClass;
+ (id)observedType;
+ (double)defaultCollectionInterval;
+ (id)_retrieveContextForKey:(id)a0 domain:(id)a1 profile:(id)a2;
+ (id)_sensorDatumFromContext:(id)a0;
+ (id)secondaryContextClasses;
+ (BOOL)_primaryContextExistsForDomain:(id)a0 profile:(id)a1;
+ (id)_lastReceivedSensorDatumForProfile:(id)a0;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)deviceEntity;
- (BOOL)_persistContext:(id)a0 forKey:(id)a1;
- (id)_retrieveContextForKey:(id)a0;
- (id)_sensorDatumFromContext:(id)a0;
- (void)_queue_resetFailureRetryCounter;
- (void)_performSync:(id /* block */)a0;
- (void)_performAsync:(id /* block */)a0;
- (BOOL)_queue_disabled;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)a0;
- (void)_queue_beginStreamingIfNecessary;
- (BOOL)_queue_streaming;
- (void)_queue_transitionToStreaming;
- (void)_queue_beginStreaming;
- (void)_queue_retryFromFailure;
- (void)_queue_updateCollectionInterval:(double)a0;
- (void)_queue_transitionToIdle;
- (void)updateHistoricalDataForcedUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_queue_shouldRetryFromFailure;
- (void)_queue_incrementFailureRetryCounter;
- (void)collectionStartedForType:(id)a0 collectionInterval:(double)a1;
- (void)updateCollectionInterval:(double)a0 forType:(id)a1;
- (void)collectionStoppedForType:(id)a0;
- (void)updateHistoricalData;
- (void)updateHistoricalDataWithCompletion:(id /* block */)a0;
- (id)dataCollectorDiagnosticDescription;
- (id)initWithPrimaryProfile:(id)a0;
- (BOOL)_persistPrimaryContext:(id)a0;
- (BOOL)_persistSecondaryContext:(id)a0;
- (id)_retrievePrimaryContext;
- (id)_retrieveSecondaryContext;
- (id)_contextFromSensorDatum:(id)a0;
- (id)_contextFromDictionary:(id)a0;
- (id)_dictionaryFromContext:(id)a0;
- (void)_queue_receivedData;
- (id)_queue_deviceEntity;
- (void)_queue_transitionToFailure;

@end

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
+ (id)_lastReceivedSensorDatumForProfile:(id)a0;
+ (BOOL)_primaryContextExistsForDomain:(id)a0 profile:(id)a1;
+ (id)_sensorDatumFromContext:(id)a0;
+ (double)defaultCollectionInterval;
+ (id)observedType;
+ (id)secondaryContextClasses;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)_performAsync:(id /* block */)a0;
- (void)_performSync:(id /* block */)a0;
- (void)_queue_beginStreaming;
- (void)collectionStartedForType:(id)a0 collectionInterval:(double)a1;
- (void)collectionStoppedForType:(id)a0;
- (id)dataCollectorDiagnosticDescription;
- (id)initWithPrimaryProfile:(id)a0;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)a0;
- (void)updateCollectionInterval:(double)a0 forType:(id)a1;
- (void)updateHistoricalData;
- (void)updateHistoricalDataForcedUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateHistoricalDataWithCompletion:(id /* block */)a0;

@end

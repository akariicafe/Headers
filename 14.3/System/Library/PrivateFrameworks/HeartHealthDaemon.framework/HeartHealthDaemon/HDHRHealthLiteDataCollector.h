@class HDDataCollectorState, NSString, HDHeartbeatSequenceDataAggregator, CMCatherineFeeder, HDDeviceEntity, HDHeartRateVariabilityDataAggregator, HDTachycardiaDataAggregator, HDProfile, HDHeartRateDataAggregator, NSObject, HDBradycardiaDataAggregator, HDDataCollectorConfiguration;
@protocol OS_dispatch_queue;

@interface HDHRHealthLiteDataCollector : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDataCollector, HDHeartRateDataCollector> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _heartRateEnabledInPrivacy;
    int _privacyPreferencesNotificationToken;
    int _powerSavingModeNotificationToken;
    HDHeartRateDataAggregator *_heartRateAggregator;
    HDHeartRateVariabilityDataAggregator *_heartRateVariabilityDataAggregator;
    HDHeartbeatSequenceDataAggregator *_heartbeatSequenceAggregator;
    HDTachycardiaDataAggregator *_tachycardiaAggregator;
    HDBradycardiaDataAggregator *_bradycardiaAggregator;
    HDDataCollectorConfiguration *_heartRateCollectionConfiguration;
    HDDataCollectorConfiguration *_heartRateVariabilityCollectionConfiguration;
    HDDataCollectorConfiguration *_heartbeatSequenceCollectionConfiguration;
    HDDataCollectorConfiguration *_tachycardiaCollectionConfiguration;
    HDDataCollectorConfiguration *_bradycardiaCollectionConfiguration;
    HDDataCollectorState *_heartRateCollectionState;
    HDDataCollectorState *_heartRateVariabilityCollectionState;
    HDDataCollectorState *_heartbeatSequenceCollectionState;
    HDDataCollectorState *_tachycardiaCollectionState;
    HDDataCollectorState *_bradycardiaCollectionState;
    CMCatherineFeeder *_catherineFeeder;
    HDDeviceEntity *_localDeviceEntity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)identifierForDataAggregator:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)daemonReady:(id)a0;
- (id)diagnosticDescription;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (id)sourceForDataAggregator:(id)a0;
- (void)_queue_powerSavingModeDidChange;
- (void)dataCollector:(id)a0 didCollectHeartRate:(id)a1 device:(id)a2 source:(id)a3;
- (void)_queue_privacyPreferencesDidChange;
- (void)_startObservingCurrentWorkoutChanges;
- (void)_startObservingAssertionManagerChanges;
- (void)_queue_createHealthLiteManager;
- (void)_queue_updateHeartRateCollectionType;
- (void)_queue_updateHeartRateVariabilityCollectionType;
- (void)_queue_updateHeartbeatSequenceCollectionType;
- (void)_queue_updateTachycardiaCollectionType;
- (void)_queue_updateBradycardiaCollectionType;
- (BOOL)_queue_isPowerSavingModePreventingStreaming;
- (void)_workoutManagerStateDidChange;
- (void)_assertionManagerStateChanged:(id)a0;
- (void)_queue_updateAllCollectionTypes;
- (id)deviceForDataAggregator:(id)a0;
- (void)_registerPowerLogEvent:(id)a0;
- (void)_setCatherineFeeder:(id)a0;

@end

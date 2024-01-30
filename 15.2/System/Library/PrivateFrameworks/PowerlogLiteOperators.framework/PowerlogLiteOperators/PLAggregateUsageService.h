@class PLIntervalData, PLEntryNotificationOperatorComposition;

@interface PLAggregateUsageService : PLService

@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *audioEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryIsChargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryExternalConnectedEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *chargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *lockStateEntryNotification;
@property (retain) PLIntervalData *intervalData;

+ (id)defaults;
+ (void)load;

- (void)handleExternalConnectedChange:(id)a0;
- (int)numIntervalsToFill;
- (void)updateSampledMetrics;
- (void)handleLargeTimeGap;
- (void)handleChargingChange:(id)a0;
- (void)handleScreenStateChange:(id)a0 withState:(BOOL)a1;
- (void)handleAudioStateChange:(id)a0;
- (void)testService;
- (void)handleLockStateChange:(id)a0;
- (void)submitMetricsToAggd;
- (void)handleConnectedChange:(id)a0;
- (void)registerForEntryNotifications;
- (void).cxx_destruct;
- (void)initializeMetrics;
- (id)init;
- (void)handleWakeStateChange:(id)a0 withState:(BOOL)a1;
- (void)instantiateMetrics;
- (void)initOperatorDependancies;
- (void)scheduleSubmissionAfter:(unsigned long long)a0;

@end

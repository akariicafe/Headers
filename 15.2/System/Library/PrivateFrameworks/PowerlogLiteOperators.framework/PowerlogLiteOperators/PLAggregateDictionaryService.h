@class PLMonotonicTimer, NSNumber, NSString, NSMutableDictionary, PLXPCResponderOperatorComposition, PLCFNotificationOperatorComposition, NSMutableArray;

@interface PLAggregateDictionaryService : PLService {
    double remainderUnpluggedEnergy;
    double remainderUnpluggedTime;
}

@property (retain) NSMutableArray *registeredNotifications;
@property (retain) PLMonotonicTimer *dailyTaskTimer;
@property (retain) PLCFNotificationOperatorComposition *blmAggregateCFNotification;
@property struct AggState { int state; double level; double timestamp; } last_state;
@property BOOL firstScreenOnAfterWake;
@property (retain) NSNumber *currentMachWakeTime;
@property (retain) NSString *wakeReasons;
@property (retain) NSString *wakeReasonString;
@property (retain) NSMutableDictionary *validReasonsDictionary;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrForceListener;
@property (retain) PLXPCResponderOperatorComposition *metricSummarizationStateResponder;

+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventNoneDefinitionSessionsFile;
+ (BOOL)metrickitClientsAvailable;
+ (void)load;

- (unsigned long long)abstimeToNanosec:(unsigned long long)a0;
- (void)registerForBluetoothNotifications;
- (void)registerForMailNotifications;
- (void)registerForUIKitNotifications;
- (void)registerForBacklightLatencyNotifications;
- (void)registerForAssertionNotifications;
- (void)logDuration:(double)a0 asDistribution:(id)a1;
- (void)registerForVideoNotifications;
- (void)logEventNoneSessionsFile;
- (void)registerForSCDynamicStoreNotifications;
- (void)setupMetricsListeners;
- (void)logAggregateUIKitActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;
- (void)registerForAudioNotifications;
- (void).cxx_destruct;
- (void)registerForLocationNotifications;
- (void)registerForCalendarNotifications;
- (id)init;
- (void)logAggregateUIKitKeyboardActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;
- (void)registerForSpringboardNotifications;
- (void)setupMetricsAggregation;
- (void)registerForBatteryNotifications;
- (void)addToDurationScalarKey:(id)a0 withDuration:(double)a1;
- (void)updateAggregateStateWithEntry:(id)a0;
- (void)registerForCameraNotifications;
- (void)createMetricsFile:(id)a0;
- (void)registerForApplicationNotifications;
- (unsigned long long)bucketWakeTime:(unsigned long long)a0;
- (void)registerForSafariNotifications;
- (void)initOperatorDependancies;
- (void)initValidReasonsDictionary;

@end

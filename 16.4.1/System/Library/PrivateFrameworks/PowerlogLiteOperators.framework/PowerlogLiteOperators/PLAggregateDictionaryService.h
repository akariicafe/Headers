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
@property (retain) NSMutableDictionary *localCache;
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
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (BOOL)metrickitClientsAvailable;
+ (id)entryEventNoneDefinitionSessionsFile;

- (void)initOperatorDependancies;
- (void)registerForLocationNotifications;
- (void)registerForMailNotifications;
- (void)updateAggregateStateWithEntry:(id)a0;
- (void)logAggregateUIKitActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;
- (void)registerForAssertionNotifications;
- (void)registerForSafariNotifications;
- (void)registerForSCDynamicStoreNotifications;
- (void)initValidReasonsDictionary;
- (void)registerForVideoNotifications;
- (unsigned long long)abstimeToNanosec:(unsigned long long)a0;
- (void)registerForUIKitNotifications;
- (unsigned long long)bucketWakeTime:(unsigned long long)a0;
- (void)registerForBluetoothNotifications;
- (void)registerForApplicationNotifications;
- (void)logEventNoneSessionsFile;
- (void)registerForCameraNotifications;
- (void)registerForCalendarNotifications;
- (void)setupMetricsListeners;
- (void)addToDurationScalarKey:(id)a0 withDuration:(double)a1;
- (void)registerForBatteryNotifications;
- (id)init;
- (void)createMetricsFile:(id)a0;
- (void)setupMetricsAggregation;
- (void)registerForBacklightLatencyNotifications;
- (void)logDuration:(double)a0 asDistribution:(id)a1;
- (void)registerForSpringboardNotifications;
- (void)registerForAudioNotifications;
- (void).cxx_destruct;
- (void)logAggregateUIKitKeyboardActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;

@end

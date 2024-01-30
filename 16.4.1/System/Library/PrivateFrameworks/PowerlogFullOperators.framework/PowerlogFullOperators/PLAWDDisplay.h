@class PLEntryNotificationOperatorComposition;

@interface PLAWDDisplay : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *backlightEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *alsUserPreferencesEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *backlightRailCallback;
@property (retain) PLEntryNotificationOperatorComposition *touchEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *alsEnabledEventCallback;
@property BOOL prevDisplayOn;
@property double displayOnTimeStamp;
@property BOOL prevDeviceCharging;
@property BOOL prevMieOn;
@property double mieOnTimeStamp;
@property double bklTimeStamp;
@property long long prevBklBucketIdx;
@property double prevBklChgTimeStamp;
@property long long startTouchEntryId;
@property double bklPowerRailTimeStamp;
@property long long dispSubmitCnt;
@property long long touchSubmitCnt;
@property BOOL prevAlsOn;
@property double prevBklPower;

+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionAwdDisplayAndAls;
+ (id)getSharedObjWithOperator:(id)a0;

- (void)handleBatteryCallback:(id)a0;
- (void).cxx_destruct;
- (void)handleDisplayCallback:(id)a0;
- (long long)getUAmpsBucket:(long long)a0;
- (void)updateDisplayMetrics:(BOOL)a0 withState:(BOOL)a1;
- (void)addEntryToDisplayAlsTable:(id)a0 withValue:(double)a1;
- (void)finalizeDisplayAlsTable;
- (long long)getBklbucketIdx:(long long)a0 withLux:(long long)a1;
- (long long)getLuxBucket:(long long)a0;
- (void)handleAlsEnabledCallback:(id)a0;
- (void)handleAlsUserPreferencesCallback:(id)a0;
- (void)handleBacklightCallback:(id)a0;
- (void)handleBacklightRailCallback:(id)a0;
- (void)handleTouchCallback:(id)a0;
- (void)initDisplayBacklightAlsStats;
- (void)initTouchStats;
- (void)reInitDisplayBacklightAlsStats;
- (void)registerForDisplayAgentNotifications;
- (void)registerForTouchNotifications;
- (void)resetDisplayAlsTable;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (void)updateMieMetrics:(BOOL)a0;

@end

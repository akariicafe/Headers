@class PLEntryNotificationOperatorComposition;

@interface PLAWDBattery : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property double prevCapacity;
@property double prevVoltage;
@property BOOL prevDeviceCharging;
@property BOOL prevDisplayON;
@property long long dispOnOffCnt;
@property double prevDispTimeStamp;
@property long long batterySubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)a0;
+ (id)entryAggregateDefinitionAwdBattery;

- (void).cxx_destruct;
- (void)handleBatteryCallback:(id)a0;
- (void)handleDisplayCallback:(id)a0;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (void)initBatteryStats;
- (void)resetBatteryTable;
- (BOOL)isDeviceCharging:(id)a0;
- (void)addEntryToBatteryTable:(id)a0 withValue:(double)a1;
- (void)processEnergyConsumedAndAddEntry:(double)a0 withVoltage:(double)a1;
- (void)finalizeBatteryTable;
- (void)reInitBatteryStats;

@end

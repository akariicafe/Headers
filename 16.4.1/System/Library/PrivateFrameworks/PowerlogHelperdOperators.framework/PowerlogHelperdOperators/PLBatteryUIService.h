@class PLXPCResponderOperatorComposition;

@interface PLBatteryUIService : PLBatteryBreakdownService

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder;
@property (retain) PLXPCResponderOperatorComposition *modelsResponder;

+ (void)load;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (BOOL)demoMode;
- (BOOL)writeOutputDemo;
- (double)adjustScreenOffTimeSecsWithGraphValue:(double)a0 withGraphScreenOnSecs:(double)a1 queryType:(int)a2 andBreakdownEntries:(id)a3;
- (double)adjustScreenOnTimeSecsWithGraphValue:(double)a0 queryType:(int)a1 andBreakdownEntries:(id)a2;
- (id)batteryBreakdownAndGraphWithPayload:(id)a0;
- (id)batteryBreakdownWithPayload:(id)a0 withDayRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withXDayRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a3;
- (id)batteryLevelsAndChargingIntervalsInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (id)dateAndBatteryLevelPointsInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (BOOL)dateIntervals:(id)a0 containDate:(id)a1;
- (id)demoModePath;
- (id)entriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 fromEntries:(id)a1;
- (double)floorSeconds:(double)a0;
- (id)generateTapBucketsForBucketSize:(int)a0 withNumberOfBuckets:(int)a1 withNowTime:(id)a2 withDrainThreshold:(double)a3 withQueryType:(int)a4 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a5;
- (struct _PLTimeIntervalRange { double x0; double x1; })getDataRangeWithNow:(id)a0;
- (id)getLPMIntervalsSpanningRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)getLastChargeData;
- (struct _PLTimeIntervalRange { double x0; double x1; })getlastDayRangeWithNow:(id)a0 withNowSystem:(id)a1;
- (struct _PLTimeIntervalRange { double x0; double x1; })getlastXDayRangeWithNow:(id)a0 withNowSystem:(id)a1;
- (void)incrementAggdKey;
- (BOOL)isAppEntryValidForAdjustment:(id)a0 withQueryType:(int)a1;
- (id)lastXDaysWithRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withQueryType:(int)a2 andBatteryBreakdown:(id)a3;
- (id)modelsForGraphWithDayRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withXDayRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2 withQueryType:(int)a3 andBatteryBreakdown:(id)a4;
- (id)modelsWithPayload:(id)a0;
- (void)removeExcessUpgradePlistFiles;
- (id)screenTimeInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withBucketSize:(double)a1 withNumBuckets:(int)a2 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a3 withQueryType:(int)a4 andBatteryBreakdown:(id)a5;
- (void)testUIQuery;

@end

@class NSArray, NSDictionary, NSString, NSDate, NSMutableArray, PLBatteryUIResponderService;

@interface PLBatteryUIResponseTypeUsageTimes_iOS : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property double range;
@property double bucketSize;
@property (retain) NSArray *aggregateEntries;
@property (retain) NSDictionary *resultDictionary;
@property (retain) NSMutableArray *batteryBreakdown_buckets;
@property (retain) NSMutableArray *batteryBreakdown_lastDay;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (id)result;
- (void)configure:(id)a0;
- (id)dependencies;
- (void).cxx_destruct;
- (void)coalesce;
- (int)adjustScreenOffTimeWithGraphValue:(double)a0 screenOnTime:(double)a1 andEnergyEntries:(id)a2;
- (int)adjustScreenOnTimeWithGraphValue:(double)a0 andEnergyEntries:(id)a1;
- (BOOL)energyEntryValidForAdjustment:(id)a0;
- (id)entriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 fromEntries:(id)a1;
- (BOOL)gatherDependencies;
- (struct _PLTimeIntervalRange { double x0; double x1; })getDataRange:(id)a0;

@end

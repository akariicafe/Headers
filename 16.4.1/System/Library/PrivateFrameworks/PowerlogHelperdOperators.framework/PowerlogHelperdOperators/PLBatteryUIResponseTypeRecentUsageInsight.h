@class NSString, PLBatteryUIResponderService, NSMutableArray, NSDate;

@interface PLBatteryUIResponseTypeRecentUsageInsight : NSObject <PLBatteryUIResponseProtocol>

@property BOOL suggest;
@property (retain) NSDate *end;
@property double firstEntryTimestamp;
@property double lastUpgradeTimestamp;
@property double minTimeValBeforeUpgrade;
@property double maxTimeValBeforeUpgrade;
@property double minTimeValAfterUpgrade;
@property double maxTimeValAfterUpgrade;
@property double minDrainPercentBeforeUpgrade;
@property double energyThresholdForUpgradeInsight;
@property double foregroundTimeThresholdForUpgradeInsight;
@property (retain) NSMutableArray *batteryBreakdown_Last10Days;
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
- (double)getfirstEntryTimestampFromDb;
- (BOOL)didUpgrade;

@end

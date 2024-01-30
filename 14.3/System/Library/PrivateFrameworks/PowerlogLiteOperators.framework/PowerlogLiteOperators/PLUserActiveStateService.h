@class NSDictionary, PLEntryNotificationOperatorComposition, NSDate, NSNumber;

@interface PLUserActiveStateService : PLService

@property (retain) NSDate *lastUserInactiveTime;
@property (retain) NSDate *lastUnplugTime;
@property (retain) NSDate *lastPluggedInTime;
@property double pluggedInTime;
@property unsigned long long userActiveNotificationHandle;
@property (retain) PLEntryNotificationOperatorComposition *batteryNotification;
@property (retain) NSNumber *pluggedInState;
@property (retain) NSDictionary *cachedBatteryMetrics;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionState;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)handlePluggedInStateUpdate:(BOOL)a0;
- (void)handleUserActiveStateChangeCallback:(BOOL)a0;
- (id)getLastSystemSleepDate;
- (double)getUserInactiveMinIntervalCA;

@end

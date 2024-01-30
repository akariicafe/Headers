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

+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryEventPointDefinitionState;

- (void)initOperatorDependancies;
- (void)handleUserActiveStateChangeCallback:(BOOL)a0;
- (double)getUserInactiveMinIntervalCA;
- (id)getLastSystemSleepDate;
- (id)init;
- (void)handlePluggedInStateUpdate:(BOOL)a0;
- (void).cxx_destruct;

@end

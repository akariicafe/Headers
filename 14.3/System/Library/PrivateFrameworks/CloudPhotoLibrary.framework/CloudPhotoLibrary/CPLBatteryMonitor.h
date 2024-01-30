@class NSString, NSDictionary;

@interface CPLBatteryMonitor : NSObject

@property (class, readonly) NSString *powerStatus;
@property (class, readonly) NSDictionary *powerStatusPlist;

+ (void)_updateBatteryWithBatteryEntry:(unsigned int)a0;
+ (void)startMonitoringPowerEvents;

@end

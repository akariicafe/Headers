@class NSString, NSDictionary;
@protocol CPLBatteryMonitorDelegate;

@interface CPLBatteryMonitor : NSObject

@property (class, weak, nonatomic) id<CPLBatteryMonitorDelegate> delegate;
@property (class, readonly) NSString *powerStatus;
@property (class, readonly) double batteryLevel;
@property (class, readonly) NSDictionary *powerStatusPlist;

+ (void)_updateBatteryWithBatteryEntry:(unsigned int)a0;
+ (void)startMonitoringPowerEvents;

@end

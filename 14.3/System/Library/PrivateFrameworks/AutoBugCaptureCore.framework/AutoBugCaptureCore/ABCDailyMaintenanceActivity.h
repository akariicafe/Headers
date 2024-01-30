@interface ABCDailyMaintenanceActivity : ABCPeriodicMaintenanceActivity

+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;

@end

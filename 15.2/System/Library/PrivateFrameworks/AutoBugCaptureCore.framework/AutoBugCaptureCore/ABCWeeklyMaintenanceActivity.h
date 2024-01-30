@interface ABCWeeklyMaintenanceActivity : ABCPeriodicMaintenanceActivity

+ (id)sharedInstance;
+ (long long)periodicActivityInterval;
+ (const char *)periodicActivityID;

@end

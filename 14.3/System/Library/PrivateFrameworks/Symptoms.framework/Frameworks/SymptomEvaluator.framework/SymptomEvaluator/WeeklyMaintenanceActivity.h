@interface WeeklyMaintenanceActivity : PeriodicMaintenanceActivity

+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;

@end

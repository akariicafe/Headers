@interface DailyMaintenanceActivity : PeriodicMaintenanceActivity

+ (id)sharedInstance;
+ (long long)periodicActivityInterval;
+ (const char *)periodicActivityID;

@end

@interface TRIXPCActivitySupport : NSObject

+ (id)_registeredActivities;
+ (void)registerActivityWithLaunchDaemonDescriptor:(id)a0 checkInBlock:(id /* block */)a1 asyncHandler:(id /* block */)a2;
+ (void)assertRegistrationOfLaunchdPlistActivities:(id)a0;
+ (BOOL)unsafe_immediatelyScheduleActivityWithLaunchDaemonDescriptor:(id)a0;
+ (id)nameForActivityState:(long long)a0;

@end

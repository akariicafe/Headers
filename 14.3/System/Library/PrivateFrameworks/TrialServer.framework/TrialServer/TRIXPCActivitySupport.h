@interface TRIXPCActivitySupport : NSObject

+ (void)registerActivityWithLaunchDaemonDescriptor:(id)a0 checkInBlock:(id /* block */)a1 asyncHandler:(id /* block */)a2;
+ (id)nameForActivityState:(long long)a0;

@end

@interface EXXPCUtil : NSObject

+ (id)sharedInstance;
+ (void)checkInWithLaunchd;
+ (int)servicePidFromXPCConnection:(id)a0;
+ (int)addExternalServiceForPid:(int)a0 path:(id)a1 overlay:(id)a2;
+ (void)assertIsExtensionProcess;

@end

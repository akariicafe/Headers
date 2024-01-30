@interface RTLaunchServices : NSObject

+ (void)createProcessAssertionForPid:(int)a0 timeout:(double)a1 queue:(id)a2 timeoutHandler:(id /* block */)a3;
+ (void)launchClientWithBundleIdentifier:(id)a0 restorationIdentifier:(id)a1 eventAgentManager:(id)a2 handler:(id /* block */)a3;
+ (BOOL)canOpenApplication:(id)a0;

@end

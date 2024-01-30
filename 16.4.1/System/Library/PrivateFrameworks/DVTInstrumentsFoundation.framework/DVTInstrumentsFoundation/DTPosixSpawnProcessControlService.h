@interface DTPosixSpawnProcessControlService : DTProcessControlService

+ (void)registerCapabilities:(id)a0;
+ (int)posixSpawnWithPath:(id)a0 environment:(id)a1 arguments:(id)a2 options:(id)a3 fileDescriptorHandler:(id /* block */)a4;

- (int)cleanupPid:(int)a0;
- (id)launchSuspendedProcessWithDevicePath:(id)a0 bundleIdentifier:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4;

@end

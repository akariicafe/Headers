@interface SDLockHandler : NSObject

+ (BOOL)deviceFirstUnlockedInSB;
+ (void)_deviceLockSetupSB;
+ (BOOL)unlockedSinceBoot;
+ (BOOL)deviceFirstUnlockedInMKB;
+ (void)_deviceLockSetUpMigrationCheck;
+ (BOOL)deviceUnlocked;
+ (BOOL)migrationComplete;
+ (void)_deviceLockSetupMKB;
+ (void)setupHandlerWithIndexQueue:(id)a0 pipelineOnly:(BOOL)a1 indexEnabled:(BOOL)a2 delegate:(id)a3;
+ (void)_deviceLockSetup;

@end

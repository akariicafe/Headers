@interface SDLockHandler : NSObject

+ (BOOL)deviceFirstUnlockedInSB;
+ (BOOL)deviceFirstUnlockedInMKB;
+ (void)_deviceLockSetUpMigrationCheck;
+ (void)_deviceLockSetupMKB;
+ (void)_checkSBLockState:(int)a0;
+ (BOOL)unlockedSinceBoot;
+ (void)checkSBLockState;
+ (BOOL)deviceUnlocked;
+ (void)_deviceLockSetupSB;
+ (void)setupHandlerWithIndexQueue:(id)a0 pipelineOnly:(BOOL)a1 indexEnabled:(BOOL)a2 delegate:(id)a3;
+ (BOOL)migrationComplete;
+ (void)_deviceLockSetup;

@end

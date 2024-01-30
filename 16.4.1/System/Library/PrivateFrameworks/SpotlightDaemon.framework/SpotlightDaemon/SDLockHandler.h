@interface SDLockHandler : NSObject

+ (BOOL)unlockedSinceBoot;
+ (BOOL)deviceFirstUnlockedInSB;
+ (void)_deviceLockSetupMKB;
+ (BOOL)migrationComplete;
+ (void)checkSBLockState;
+ (void)_deviceLockSetUpMigrationCheck;
+ (BOOL)deviceUnlocked;
+ (BOOL)deviceFirstUnlockedInMKB;
+ (void)_deviceLockSetupSB;
+ (void)_checkSBLockState:(int)a0;
+ (void)_deviceLockSetup;
+ (void)setupHandlerWithIndexQueue:(id)a0 pipelineOnly:(BOOL)a1 indexEnabled:(BOOL)a2 delegate:(id)a3;

@end

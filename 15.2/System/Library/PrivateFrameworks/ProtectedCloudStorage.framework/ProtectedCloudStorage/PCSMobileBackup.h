@class MBManager;

@interface PCSMobileBackup : NSObject <MBManagerDelegate>

@property (retain) MBManager *backupManager;

+ (id)defaultMobileBackup;

- (BOOL)isBackupEnabled;
- (void).cxx_destruct;
- (id)init;

@end

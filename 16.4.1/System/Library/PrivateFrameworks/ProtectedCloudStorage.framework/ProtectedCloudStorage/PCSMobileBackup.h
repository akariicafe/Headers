@class MBManager;

@interface PCSMobileBackup : NSObject <MBManagerDelegate>

@property (retain) MBManager *backupManager;

+ (id)defaultMobileBackup;

- (BOOL)isBackupEnabled;
- (id)init;
- (void).cxx_destruct;

@end

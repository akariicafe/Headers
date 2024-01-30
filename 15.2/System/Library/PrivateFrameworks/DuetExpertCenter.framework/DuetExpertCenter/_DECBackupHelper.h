@class NSFileManager;

@interface _DECBackupHelper : NSObject {
    NSFileManager *_fm;
}

+ (id)sharedInstance;

- (BOOL)finishBackup;
- (BOOL)restoreStart;
- (BOOL)canRestore;
- (BOOL)restoredAlready;
- (BOOL)createBackupDirectoriesIfMissing;
- (void).cxx_destruct;
- (id)init;
- (id)restorePathForExpert:(id)a0;
- (id)backupPathForExpert:(id)a0;
- (id)_currentBackupVersionPath;
- (BOOL)restoreDone;
- (BOOL)isClassCLocked;
- (BOOL)canBackup;
- (BOOL)backupNewerThanCurrentState;
- (void)fixupDataProtection;
- (BOOL)probePathAt:(id)a0;
- (BOOL)markRestoreAsNotDone;
- (BOOL)markVersionOfBackupDirectoryAsCurrent;

@end

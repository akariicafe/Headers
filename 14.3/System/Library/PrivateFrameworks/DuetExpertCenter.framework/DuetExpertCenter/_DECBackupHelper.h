@class NSFileManager;

@interface _DECBackupHelper : NSObject {
    NSFileManager *_fm;
}

+ (id)sharedInstance;

- (id)_currentBackupVersionPath;
- (id)backupPathForExpert:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)restoreStart;
- (BOOL)canRestore;
- (BOOL)restoredAlready;
- (BOOL)canBackup;
- (BOOL)markVersionOfBackupDirectoryAsCurrent;
- (BOOL)isClassCLocked;
- (BOOL)backupNewerThanCurrentState;
- (BOOL)restoreDone;
- (BOOL)finishBackup;
- (void)fixupDataProtection;
- (BOOL)createBackupDirectoriesIfMissing;
- (BOOL)probePathAt:(id)a0;
- (id)restorePathForExpert:(id)a0;
- (BOOL)markRestoreAsNotDone;

@end

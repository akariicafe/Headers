@class NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LocalKeychainAnalytics : SFAnalytics {
    BOOL _probablyInClassD;
    NSMutableArray *_pendingReports;
    NSObject<OS_dispatch_queue> *_queue;
    int _notificationToken;
    NSDate *_backupStartTime;
    int _backupType;
}

+ (id)databasePath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPersistMetrics;
- (void)processPendingMessages;
- (void)reportKeychainUpgradeFrom:(int)a0 to:(int)a1 outcome:(int)a2 error:(id)a3;
- (void)reportKeychainUpgradeOutcome:(int)a0 attributes:(id)a1;
- (void)reportKeychainBackupStartWithType:(int)a0;
- (void)reportKeychainBackupEnd:(BOOL)a0 error:(id)a1;

@end

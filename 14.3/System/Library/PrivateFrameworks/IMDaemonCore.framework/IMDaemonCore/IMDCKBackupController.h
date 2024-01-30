@class NSDate, NSString, IMDCKUtilities;

@interface IMDCKBackupController : NSObject <IMDXPCEventStreamHandlerDelegate>

@property (weak, nonatomic) IMDCKUtilities *ckUtilities;
@property (retain, nonatomic) NSDate *firstSyncDate;
@property (nonatomic) BOOL iCloudBackupsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_savePreviousDeviceState:(id)a0;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;
- (BOOL)checkDatabaseWasRestored;
- (void)_deviceIDFromMobileBackupManager:(id *)a0 legacyDeviceID:(id *)a1;
- (id)_disabledDirectoryPath;
- (void).cxx_destruct;
- (id)_primaryAccountAltDSID;
- (void)setFirstSyncDate:(id)a0;
- (id)firstSyncDate;
- (void)eventStreamHandler:(id)a0 didReceiveEventWithName:(id)a1 userInfo:(id)a2;
- (id)_serverBagTimeIntervalForFirstSyncTimeout;
- (void)setFirstSyncDateToNow;
- (BOOL)_deviceStateHasChanged:(id)a0;
- (BOOL)_firstSyncTimeoutHasExpired;
- (id)dateOfLastBackUp;
- (BOOL)_setiCloudBackupAttribute:(BOOL)a0 onItemAtPath:(id)a1 error:(id *)a2;
- (BOOL)iCloudBackupEnabledSystemWide;
- (double)_firstSyncExpirationTimeInterval;
- (void)_ensureRestoredDatabaseToBackup;
- (void)_setICloudBackupsDisabled:(BOOL)a0;
- (void)registerForDistributedNotifications;
- (BOOL)_timeIntervalFromFirstSync:(id)a0 hasExpiredForDate:(id)a1;
- (id)readUserDefaultForKey:(id)a0;
- (void)sendDeviceIDToCloudKitWithCompletion:(id /* block */)a0;
- (id)_debuggingRestoreStateDescription;
- (void)setICloudBackupsDisabled:(BOOL)a0;
- (void)removePathFromiCloudBackup:(id)a0;
- (long long)_disableiCloudBackupIfSyncPercentageIsHighEnough:(long long)a0 totalCount:(long long)a1;
- (void)setUserDefaultBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)pathRemovedFromBackup:(id)a0;
- (BOOL)readUserDefaultBoolForKey:(id)a0;
- (void)removeUserDefault:(id)a0;
- (long long)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)a0;
- (id)syncStateDebuggingInfo:(id)a0;
- (BOOL)iCloudBackupsDisabled;
- (void)writeUserDefault:(id)a0 forKey:(id)a1;
- (id)createBackupManager;
- (BOOL)_currentDeviceStateIsRestore:(id)a0;
- (void)_fetchCountOfSyncedCloudKitRecords:(long long *)a0 totalCount:(long long *)a1;
- (void)_enqueOperation:(id)a0;
- (void)_saveRecordCount:(long long)a0;
- (id)_readCurrentDeviceState;
- (long long)_readRecordCount;
- (id)_readPreviousDeviceState;
- (BOOL)_canDisableiCloudBackupsAfterRestore;

@end

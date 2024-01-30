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

- (BOOL)_firstSyncTimeoutHasExpired;
- (id)syncStateDebuggingInfo:(id)a0;
- (void)setFirstSyncDate:(id)a0;
- (id)dateOfLastBackUp;
- (void)_setICloudBackupsDisabled:(BOOL)a0;
- (BOOL)_timeIntervalFromFirstSync:(id)a0 hasExpiredForDate:(id)a1;
- (id)_primaryAccountAltDSID;
- (void)eventStreamHandler:(id)a0 didReceiveEventWithName:(id)a1 userInfo:(id)a2;
- (void)setUserDefaultBool:(BOOL)a0 forKey:(id)a1;
- (id)readUserDefaultForKey:(id)a0;
- (BOOL)readUserDefaultBoolForKey:(id)a0;
- (BOOL)checkDatabaseWasRestored;
- (void)registerForDistributedNotifications;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;
- (void)sendDeviceIDToCloudKitWithCompletion:(id /* block */)a0;
- (void)_ensureRestoredDatabaseToBackup;
- (long long)_disableiCloudBackupIfSyncPercentageIsHighEnough:(long long)a0 totalCount:(long long)a1;
- (void)_enqueOperation:(id)a0;
- (id)_readCurrentDeviceState;
- (void)removePathFromiCloudBackup:(id)a0;
- (id)createBackupManager;
- (void)setICloudBackupsDisabled:(BOOL)a0;
- (BOOL)_currentDeviceStateIsRestore:(id)a0;
- (void)setFirstSyncDateToNow;
- (void)_fetchCountOfSyncedCloudKitRecords:(long long *)a0 totalCount:(long long *)a1;
- (double)_firstSyncExpirationTimeInterval;
- (long long)_readRecordCount;
- (void).cxx_destruct;
- (void)writeUserDefault:(id)a0 forKey:(id)a1;
- (id)_disabledDirectoryPath;
- (void)_savePreviousDeviceState:(id)a0;
- (id)_debuggingRestoreStateDescription;
- (void)_deviceIDFromMobileBackupManager:(id *)a0 legacyDeviceID:(id *)a1;
- (long long)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)a0;
- (id)_readPreviousDeviceState;
- (BOOL)_canDisableiCloudBackupsAfterRestore;
- (id)firstSyncDate;
- (id)_serverBagTimeIntervalForFirstSyncTimeout;
- (void)_saveRecordCount:(long long)a0;
- (BOOL)_setiCloudBackupAttribute:(BOOL)a0 onItemAtPath:(id)a1 error:(id *)a2;
- (BOOL)iCloudBackupEnabledSystemWide;
- (void)removeUserDefault:(id)a0;
- (BOOL)pathRemovedFromBackup:(id)a0;
- (BOOL)_deviceStateHasChanged:(id)a0;
- (BOOL)iCloudBackupsDisabled;

@end

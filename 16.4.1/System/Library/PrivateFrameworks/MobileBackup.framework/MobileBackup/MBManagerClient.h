@class MBConnection, NSString, MBCellularDataSubscriptionMonitor, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface MBManagerClient : MBManager <MBConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_eventQueue;
    int _iTunesRestoreStartedNotificationToken;
    int _iTunesRestoreEndedNotificationToken;
    BOOL _iTunesRestoreStarted;
    int _enabledToken;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_personaIdentifier;
}

@property (retain) MBConnection *connection;
@property (nonatomic) BOOL shouldSupportiTunes;
@property (retain, nonatomic) MBCellularDataSubscriptionMonitor *cellularDataSubscriptionMonitor;
@property (retain) NSObject<OS_dispatch_group> *initialBackupOnCellularSupportGroup;

- (id)restoreState;
- (id)dateOfLastBackup;
- (id)backupState;
- (unsigned long long)backupOnCellularSupportWithAccount:(id)a0 error:(id *)a1;
- (BOOL)clearAllPendingFollowUpsWithError:(id *)a0;
- (BOOL)postFollowUpForBackgroundRestoreProgress:(id)a0 error:(id *)a1;
- (id)restoreFailuresForDataclass:(id)a0 assetType:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)isBackupOnCellularEnabledWithError:(id *)a0;
- (void)finishRestore;
- (void)saveBackupEnabledForMegaBackup;
- (BOOL)saveKeybagsForBackupUDID:(id)a0 withError:(id *)a1;
- (BOOL)startScanWithError:(id *)a0;
- (void)wakeUp;
- (id)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 error:(id *)a4;
- (id)backgroundRestoreCellularAccessWithError:(id *)a0;
- (void)connectionWasInterrupted:(id)a0;
- (id)initWithAccount:(id)a0 delegate:(id)a1 eventQueue:(id)a2;
- (id)disabledDomainInfos;
- (BOOL)exitMegaBackupMode:(id *)a0;
- (void)saveBackgroundRestoreCellularAccess:(id)a0 completion:(id /* block */)a1;
- (id)journalForBackupUUID:(id)a0 error:(id *)a1;
- (void)startDataTransferWithPreflightInfo:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)countCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)isInitialMegaBackupCompleted:(id *)a0;
- (BOOL)inheritSnapshot:(id)a0 fromDevice:(id)a1 error:(id *)a2;
- (void)connection:(id)a0 didReceiveMessage:(id)a1;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (void)saveBackupDomainsEnabledForMegaBackup:(id)a0;
- (BOOL)restoreSupportsBatching;
- (BOOL)acquireLockWithBackupUDID:(id)a0 owner:(id)a1 timeout:(double)a2 error:(id *)a3;
- (id)dateOfLastBackupWithError:(id *)a0;
- (void)setBackupEnabled:(BOOL)a0;
- (BOOL)restoreFilesWithPaths:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)addFileToBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 fromPath:(id)a4 error:(id *)a5;
- (BOOL)resumeDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (unsigned long long)nextBackupSize;
- (BOOL)setMegaBackupTurnOnAllAppsSyncTelemetry:(BOOL)a0 error:(id *)a1;
- (id)deviceLockInfosWithError:(id *)a0;
- (BOOL)isManualBackupOnCellularAllowedWithAccount:(id)a0 error:(id *)a1;
- (BOOL)deleteAccountWithError:(id *)a0;
- (BOOL)setMegaBackupTurnOniCloudBackupTelemetry:(BOOL)a0 error:(id *)a1;
- (void)fetchAppBundleIDsForSnapshot:(id)a0 completion:(id /* block */)a1;
- (BOOL)restoreFileWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)restoreBookWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 error:(id *)a2;
- (id)restoreInfo;
- (unsigned long long)_backupOnCellularSupport;
- (BOOL)isBackupEnabled;
- (void)keyBagIsUnlocked;
- (void)setRestoreQualityOfService:(long long)a0;
- (id)restoreStateWithError:(id *)a0;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)a0;
- (void)clearRestoreSession;
- (void)keyBagIsLocking;
- (BOOL)restoreFileWithPath:(id)a0 error:(id *)a1;
- (id)getAppleIDsMapForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (id)getBuddyDataStashForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)restoreFileExistsWithPath:(id)a0;
- (BOOL)startBackupWithError:(id *)a0;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1;
- (void)accountChanged:(id)a0;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)a0 size:(unsigned long long *)a1;
- (void)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)repair;
- (id)_makeConnection;
- (BOOL)releaseLockWithBackupUDID:(id)a0 owner:(id)a1 error:(id *)a2;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (BOOL)_isBackupAgent2Running;
- (BOOL)wasBackupEnabledForMegaBackup:(id *)a0;
- (BOOL)deleteBackupUDID:(id)a0 error:(id *)a1;
- (id)domainInfoList;
- (void)connectionWasInvalidated:(id)a0;
- (id)_sendRequest:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1 personaIdentifier:(id)a2;
- (BOOL)allowiTunesBackup;
- (BOOL)logPrebuddyFlowTelemetry:(long long)a0 error:(id *)a1;
- (BOOL)postFollowUpForRestoreFailedWithDomainNames:(id)a0 error:(id *)a1;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)a0 assetType:(id)a1;
- (id)backgroundRestoreInfo;
- (id)dateOfNextScheduledBackupWithError:(id *)a0;
- (id)_sendRequest:(id)a0 arguments:(id)a1;
- (void)syncBackupEnabled;
- (BOOL)isBackupEnabledForDomainName:(id)a0;
- (BOOL)restoreBookWithPath:(id)a0 error:(id *)a1;
- (BOOL)setupBackupWithPasscode:(id)a0 error:(id *)a1;
- (void)setAllowiTunesBackup:(BOOL)a0;
- (void)cancel;
- (void)startRestoreForSnapshot:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)archiveLogsTo:(id)a0 error:(id *)a1;
- (id)nextBackupSizeInfo;
- (BOOL)pinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (void)startKeychainDataImportWithKeychainInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)rebootDevice;
- (void)dealloc;
- (BOOL)discountCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)updateMegaBackupExpirationDate:(id)a0 error:(id *)a1;
- (void)setSupportsiTunes:(BOOL)a0;
- (BOOL)countCameraRollQuota;
- (id)getBackupListWithError:(id *)a0;
- (id)reservedBackupSizeListWithError:(id *)a0;
- (BOOL)removeDomainName:(id)a0 error:(id *)a1;
- (BOOL)recordRestoreFailure:(id)a0 error:(id *)a1;
- (BOOL)isLocalBackupPasswordSetWithError:(id *)a0;
- (void)insufficientFreeSpaceToRestore;
- (BOOL)startScanForBundleIDs:(id)a0 error:(id *)a1;
- (id)personalPersonaIdentifier;
- (BOOL)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 error:(id *)a4 progress:(id /* block */)a5;
- (void)fetchiCloudRestoreIsCompleteWithCompletion:(id /* block */)a0;
- (BOOL)restoreFilesWithPaths:(id)a0 error:(id *)a1;
- (void)startWatchingBackupAgent2;
- (BOOL)startDeviceTransferWithTaskType:(long long)a0 sessionInfo:(id)a1 error:(id *)a2;
- (BOOL)postFollowUpForRestoreFinishedWithError:(id *)a0;
- (BOOL)setBackupOnCellularEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)a0 error:(id *)a1;
- (BOOL)cancelDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (id)dateOfNextScheduledBackup;
- (id)domainInfoForName:(id)a0;
- (id)backupDeviceUUID;
- (BOOL)discountCameraRollQuota;
- (id)filesForSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (void)setRestoreSessionWithBackupUDID:(id)a0 snapshotUUID:(id)a1;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)a0;
- (void)cancelRestore;
- (BOOL)_restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 qos:(id)a2 context:(id)a3 error:(id *)a4;
- (BOOL)setPrebuddyUIDeltaTelemetry:(id)a0 date:(id)a1 error:(id *)a2;
- (BOOL)restorePreviousSettingsEnabledForMegaBackup:(id *)a0;
- (void)boostBackgroundRestoreWithCompletionHandler:(id /* block */)a0;
- (void)startPreflightWithCompletionHandler:(id /* block */)a0;
- (BOOL)unpinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (BOOL)deleteItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 error:(id *)a4;
- (id)journalLastModifiedForBackupUUID:(id)a0 error:(id *)a1;
- (void)saveSyncSettingsEnabledForMegaBackup:(id)a0;
- (void)fetchRestorableSnapshotsWithCompletion:(id /* block */)a0;
- (id)getBackupListWithFiltering:(BOOL)a0 error:(id *)a1;
- (BOOL)isBackupOnCellularAllowedWithAccount:(id)a0 error:(id *)a1;
- (BOOL)postFollowUpForDrySpellWithDuration:(double)a0 firstBackup:(BOOL)a1 error:(id *)a2;
- (BOOL)postFollowUpForRestoreTimeoutWithError:(id *)a0;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (BOOL)airTrafficShouldCreateAppPlaceholdersWithError:(id *)a0;
- (BOOL)mergeSnapshots:(id)a0 backupUUID:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)prepareForBackgroundRestoreWithError:(id *)a0;
- (BOOL)unsetLocalBackupPasswordWithError:(id *)a0;
- (void)prioritizeRestoreFileWithPath:(id)a0;
- (void)setBackupEnabled:(BOOL)a0 forDomainName:(id)a1;
- (BOOL)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)extractItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 toPath:(id)a4 error:(id *)a5;
- (BOOL)startBackupWithOptions:(id)a0 error:(id *)a1;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 withQOS:(long long)a2 context:(id)a3 error:(id *)a4;
- (void)fetchBackgroundRestoreCellularAccessWithCompletion:(id /* block */)a0;
- (BOOL)requestMegaBackupExpirationDate:(id)a0 error:(id *)a1;
- (BOOL)deleteSnapshotID:(unsigned long long)a0 fromBackupUDID:(id)a1 error:(id *)a2;
- (BOOL)setEntryPointForMegaBackupTelemetry:(long long)a0 error:(id *)a1;

@end

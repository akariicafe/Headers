@class NSObject;
@protocol MBManagerDelegate;

@interface MBManager : NSObject

@property (weak) NSObject<MBManagerDelegate> *delegate;

- (id)restoreState;
- (id)restoreInfo;
- (BOOL)postFollowUpForDrySpellWithDuration:(double)a0 firstBackup:(BOOL)a1 error:(id *)a2;
- (id)domainInfoList;
- (void)startPreflightWithCompletionHandler:(id /* block */)a0;
- (BOOL)restoreBookWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)setEntryPointForMegaBackupTelemetry:(long long)a0 error:(id *)a1;
- (id)domainInfoForName:(id)a0;
- (BOOL)postFollowUpForRestoreTimeoutWithError:(id *)a0;
- (id)dateOfLastBackup;
- (void)setRestoreSessionWithBackupUDID:(id)a0 snapshotUUID:(id)a1;
- (id)disabledDomainInfos;
- (BOOL)startScanWithError:(id *)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)restoreFileWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)restorePreviousSettingsEnabledForMegaBackup:(id *)a0;
- (id)getBackupListWithError:(id *)a0;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)a0 assetType:(id)a1;
- (BOOL)setBackupOnCellularEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)updateMegaBackupExpirationDate:(id)a0 error:(id *)a1;
- (BOOL)inheritSnapshot:(id)a0 fromDevice:(id)a1 error:(id *)a2;
- (void)setRestoreQualityOfService:(long long)a0;
- (BOOL)exitMegaBackupMode:(id *)a0;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)a0 error:(id *)a1;
- (void)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1;
- (BOOL)airTrafficShouldCreateAppPlaceholdersWithError:(id *)a0;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 withQOS:(long long)a2 context:(id)a3 error:(id *)a4;
- (id)dateOfNextScheduledBackup;
- (void)syncBackupEnabled;
- (id)personalPersonaIdentifier;
- (void)setBackupEnabled:(BOOL)a0 forDomainName:(id)a1;
- (id)nextBackupSizeInfo;
- (id)backupState;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 error:(id *)a2;
- (void)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)extractItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 toPath:(id)a4 error:(id *)a5;
- (BOOL)allowiTunesBackup;
- (id)restoreFilesForDomain:(id)a0 error:(id *)a1;
- (BOOL)removeDomainName:(id)a0 error:(id *)a1;
- (BOOL)restoreFilesWithPaths:(id)a0 context:(id)a1 error:(id *)a2;
- (id)backgroundRestoreInfo;
- (id)getAppleIDsMapForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (BOOL)countCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)restoreFilesWithPaths:(id)a0 error:(id *)a1;
- (void)fetchBackgroundRestoreCellularAccessWithCompletion:(id /* block */)a0;
- (BOOL)resumeDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (BOOL)isBackupEnabled;
- (void)prioritizeRestoreFileWithPath:(id)a0;
- (void)setBackupEnabled:(BOOL)a0;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)a0;
- (BOOL)setMegaBackupTurnOnAllAppsSyncTelemetry:(BOOL)a0 error:(id *)a1;
- (void)setAllowiTunesBackup:(BOOL)a0;
- (id)backupList;
- (void)saveBackgroundRestoreCellularAccess:(id)a0 completion:(id /* block */)a1;
- (void)startRestoreForSnapshot:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)startBackupWithOptions:(id)a0 error:(id *)a1;
- (void)startDataTransferWithPreflightInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1;
- (id)journalForBackupUUID:(id)a0 error:(id *)a1;
- (BOOL)archiveLogsTo:(id)a0 error:(id *)a1;
- (void)saveBackupEnabledForMegaBackup;
- (id)getBackupListWithFiltering:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)setMegaBackupTurnOniCloudBackupTelemetry:(BOOL)a0 error:(id *)a1;
- (BOOL)isInitialMegaBackupCompleted:(id *)a0;
- (BOOL)countCameraRollQuota;
- (id)journalLastModifiedForBackupUUID:(id)a0 error:(id *)a1;
- (id)initWithAccount:(id)a0 delegate:(id)a1 eventQueue:(id)a2;
- (void)fetchAppBundleIDsForSnapshot:(id)a0 completion:(id /* block */)a1;
- (BOOL)prepareForBackgroundRestoreWithError:(id *)a0;
- (id)init;
- (BOOL)discountCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)isManualBackupOnCellularAllowedWithAccount:(id)a0 error:(id *)a1;
- (void)startKeychainDataImportWithKeychainInfo:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)addFileToBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 fromPath:(id)a4 error:(id *)a5;
- (BOOL)deleteBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)saveKeybagsForBackupUDID:(id)a0 withError:(id *)a1;
- (BOOL)logPrebuddyFlowTelemetry:(long long)a0 error:(id *)a1;
- (id)_init;
- (id)backupDeviceUDID;
- (BOOL)unpinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (BOOL)cancelDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (id)filesForSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (BOOL)unsetLocalBackupPasswordWithError:(id *)a0;
- (BOOL)restoreFileWithPath:(id)a0 error:(id *)a1;
- (BOOL)pinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (void)fetchRestorableSnapshotsWithCompletion:(id /* block */)a0;
- (BOOL)isLocalBackupPasswordSetWithError:(id *)a0;
- (BOOL)mergeSnapshots:(id)a0 backupUUID:(id)a1 error:(id *)a2;
- (BOOL)deleteItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 error:(id *)a4;
- (BOOL)restoreFileExistsWithPath:(id)a0;
- (void)saveBackupDomainsEnabledForMegaBackup:(id)a0;
- (BOOL)restoreSupportsBatching;
- (BOOL)isBackupOnCellularEnabledWithError:(id *)a0;
- (BOOL)discountCameraRollQuota;
- (BOOL)startDeviceTransferWithTaskType:(long long)a0 sessionInfo:(id)a1 error:(id *)a2;
- (void)cancelRestore;
- (void)restoreFileWithPath:(id)a0;
- (BOOL)startBackupWithError:(id *)a0;
- (BOOL)restoreBookWithPath:(id)a0 error:(id *)a1;
- (void)rebootDevice;
- (BOOL)isBackupOnCellularAllowedWithAccount:(id)a0 error:(id *)a1;
- (BOOL)startScanForBundleIDs:(id)a0 error:(id *)a1;
- (unsigned long long)nextBackupSize;
- (id)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 error:(id *)a4;
- (void)insufficientFreeSpaceToRestore;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1 personaIdentifier:(id)a2;
- (BOOL)clearAllPendingFollowUpsWithError:(id *)a0;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (id)restoreFailuresForDataclass:(id)a0 assetType:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (void)fetchiCloudRestoreIsCompleteWithCompletion:(id /* block */)a0;
- (void)startBackup;
- (id)backgroundRestoreCellularAccessWithError:(id *)a0;
- (void)cancel;
- (id)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 error:(id *)a3;
- (BOOL)setupBackupWithPasscode:(id)a0 error:(id *)a1;
- (void)setSupportsiTunes:(BOOL)a0;
- (id)getBuddyDataStashForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)a0;
- (void)finishRestore;
- (id)reservedBackupSizeListWithError:(id *)a0;
- (id)backupDeviceUUID;
- (BOOL)requestMegaBackupExpirationDate:(id)a0 error:(id *)a1;
- (BOOL)recordRestoreFailure:(id)a0 error:(id *)a1;
- (void)clearRestoreSession;
- (BOOL)wasBackupEnabledForMegaBackup:(id *)a0;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)a0 size:(unsigned long long *)a1;
- (void)saveSyncSettingsEnabledForMegaBackup:(id)a0;
- (BOOL)isBackupEnabledForDomainName:(id)a0;
- (id)restoreStateWithError:(id *)a0;
- (BOOL)setPrebuddyUIDeltaTelemetry:(id)a0 date:(id)a1 error:(id *)a2;
- (BOOL)postFollowUpForBackgroundRestoreProgress:(id)a0 error:(id *)a1;

@end

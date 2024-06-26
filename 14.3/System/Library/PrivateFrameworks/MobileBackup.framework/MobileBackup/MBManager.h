@class NSObject;
@protocol MBManagerDelegate;

@interface MBManager : NSObject

@property (weak) NSObject<MBManagerDelegate> *delegate;

- (void)cancel;
- (void)finishRestore;
- (BOOL)restoreFileWithPath:(id)a0 error:(id *)a1;
- (BOOL)startBackupWithOptions:(id)a0 error:(id *)a1;
- (void)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1;
- (BOOL)airTrafficShouldCreateAppPlaceholdersWithError:(id *)a0;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)a0 assetType:(id)a1;
- (id)domainInfoList;
- (id)backupList;
- (id)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 error:(id *)a4;
- (BOOL)countCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (void)setSupportsiTunes:(BOOL)a0;
- (BOOL)saveKeybagsForBackupUDID:(id)a0 withError:(id *)a1;
- (BOOL)removeDomainName:(id)a0 error:(id *)a1;
- (BOOL)setupBackupWithPasscode:(id)a0 error:(id *)a1;
- (BOOL)addFileToBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 fromPath:(id)a4 error:(id *)a5;
- (BOOL)deleteBackupUDID:(id)a0 error:(id *)a1;
- (id)getAppleIDsMapForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)isBackupEnabled;
- (BOOL)cancelDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (id)journalLastModifiedForBackupUUID:(id)a0 error:(id *)a1;
- (BOOL)discountCameraRollQuota;
- (id)getBackupListWithFiltering:(BOOL)a0 error:(id *)a1;
- (BOOL)unsetLocalBackupPasswordWithError:(id *)a0;
- (id)dateOfLastBackup;
- (void)startPreflightWithCompletionHandler:(id /* block */)a0;
- (BOOL)isLocalBackupPasswordSetWithError:(id *)a0;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)a0 error:(id *)a1;
- (BOOL)isBackupEnabledForDomainName:(id)a0;
- (id)backupDeviceUUID;
- (BOOL)recordRestoreFailure:(id)a0 error:(id *)a1;
- (void)setBackupEnabled:(BOOL)a0 forDomainName:(id)a1;
- (BOOL)startScanForBundleIDs:(id)a0 error:(id *)a1;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (void)cancelRestore;
- (void)insufficientFreeSpaceToRestore;
- (id)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 error:(id *)a3;
- (BOOL)restoreFileWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (id)restoreFailuresForDataclass:(id)a0 assetType:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)inheritSnapshot:(id)a0 fromDevice:(id)a1 error:(id *)a2;
- (id)init;
- (void)syncBackupEnabled;
- (BOOL)mergeSnapshots:(id)a0 backupUUID:(id)a1 error:(id *)a2;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (BOOL)resumeDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (id)dateOfNextScheduledBackup;
- (id)restoreState;
- (id)domainInfoForName:(id)a0;
- (void)setRestoreSessionWithBackupUDID:(id)a0 snapshotUUID:(id)a1;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)a0;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)a0 size:(unsigned long long *)a1;
- (BOOL)restoreFilesWithPaths:(id)a0 error:(id *)a1;
- (id)disabledDomainInfos;
- (void)restoreFileWithPath:(id)a0;
- (void).cxx_destruct;
- (void)setRestoreQualityOfService:(long long)a0;
- (id)nextBackupSizeInfo;
- (BOOL)startDeviceTransferWithTaskType:(long long)a0 sessionInfo:(id)a1 error:(id *)a2;
- (id)restoreInfo;
- (BOOL)pinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (void)rebootDevice;
- (unsigned long long)nextBackupSize;
- (void)fetchiCloudRestoreIsCompleteWithCompletion:(id /* block */)a0;
- (BOOL)restoreBookWithPath:(id)a0 error:(id *)a1;
- (id)backgroundRestoreInfo;
- (BOOL)restoreBookWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)deleteItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 error:(id *)a4;
- (void)setBackupEnabled:(BOOL)a0;
- (void)startKeychainDataImportWithKeychainInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearRestoreSession;
- (BOOL)discountCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 error:(id *)a2;
- (BOOL)startBackupWithError:(id *)a0;
- (id)journalForBackupUUID:(id)a0 error:(id *)a1;
- (BOOL)restoreFileExistsWithPath:(id)a0;
- (BOOL)extractItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 toPath:(id)a4 error:(id *)a5;
- (id)reservedBackupSizeListWithError:(id *)a0;
- (id)restoreFilesForDomain:(id)a0 error:(id *)a1;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1;
- (void)setAllowiTunesBackup:(BOOL)a0;
- (BOOL)unpinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (void)prioritizeRestoreFileWithPath:(id)a0;
- (BOOL)startScanWithError:(id *)a0;
- (BOOL)prepareForBackgroundRestoreWithError:(id *)a0;
- (void)startBackup;
- (id)backupDeviceUDID;
- (void)startDataTransferWithPreflightInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)filesForSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (BOOL)archiveLogsTo:(id)a0 error:(id *)a1;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 withQOS:(long long)a2 context:(id)a3 error:(id *)a4;
- (BOOL)countCameraRollQuota;
- (id)getBuddyDataStashForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (id)backupState;
- (BOOL)allowiTunesBackup;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)a0;
- (BOOL)restoreFilesWithPaths:(id)a0 context:(id)a1 error:(id *)a2;
- (id)getBackupListWithError:(id *)a0;
- (BOOL)restoreSupportsBatching;
- (id)_init;
- (id)initWithDelegate:(id)a0;

@end

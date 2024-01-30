@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    unsigned int _userDataDisposition;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userDataDispositionLock;
    BOOL _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesCompleteBlockLock;
}

@property (copy, nonatomic) id /* block */ prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration;

- (void).cxx_destruct;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (void)_linkAsideAlbumMetadata;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (id)_dataMigrationInfo;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (BOOL)_userDataDispositionMatchesDisposition:(unsigned int)a0;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)restoreTypeDescription;
- (BOOL)isRestoreFromBackup;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)isOTARestoreInProgress;

@end

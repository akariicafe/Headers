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

+ (BOOL)isDataMigrationInProgress;

- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (id)restoreTypeDescription;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (id)_dataMigrationInfo;
- (void).cxx_destruct;
- (BOOL)_userDataDispositionMatchesDisposition:(unsigned int)a0;
- (void)_linkAsideAlbumMetadata;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isRestoreFromBackup;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (BOOL)isRestoreFromBackupSourceCloud;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (BOOL)isOTARestoreInProgress;

@end

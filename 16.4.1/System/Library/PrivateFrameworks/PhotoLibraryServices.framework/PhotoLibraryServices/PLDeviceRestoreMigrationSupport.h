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

- (BOOL)isRestoreFromBackupSourceiTunes;
- (id)restoreTypeDescription;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (id)_dataMigrationInfo;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (void)_linkAsideAlbumMetadata;
- (BOOL)_userDataDispositionMatchesDisposition:(unsigned int)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (BOOL)isOTARestoreInProgress;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)isRestoreFromBackup;
- (void).cxx_destruct;

@end

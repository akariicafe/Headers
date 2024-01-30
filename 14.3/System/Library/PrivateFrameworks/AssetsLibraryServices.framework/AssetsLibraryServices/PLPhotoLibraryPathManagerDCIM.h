@class NSString, PLImportFileManager;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {
    unsigned int _persistedAlbumDataDirectoryExists;
    NSString *_photoDataDirectory;
    NSString *_photoDataCachesDirectory;
    NSString *_photoDataAnalyticsDirectory;
    NSString *_photoDataSearchDirectory;
    NSString *_restoreInfoDirectory;
    NSString *_dcimDirectory;
    NSString *_cplAssetsDirectory;
    NSString *_cmmAssetsDirectory;
    NSString *_journalsDirectory;
    NSString *_projectsDirectory;
    NSString *_privateDirectory;
    NSString *_changeStoreDatabasePath;
    NSString *_thumbnailsDirectory;
    NSString *_thumbnailsV2Directory;
    NSString *_thumbnailsVideoKeyFramesDirectory;
    BOOL _assetAlbumOrderStructurePathCreated;
}

@property (retain, nonatomic) PLImportFileManager *importFileManager;

+ (id)systemLibraryPathManager;

- (id)cloudRestoreCompleteTokenPath;
- (id)syncInfoPath;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)a0 populateInvalidAdjustmentPaths:(id)a1;
- (id)addToPath:(id)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosSyncDirectory;
- (id)photosDatabasePath;
- (void).cxx_destruct;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)a0;
- (id)getImportFileManager;
- (id)photoDirectoryWithType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)convertPhotoLibraryPathType:(unsigned char)a0;
- (id)iTunesSyncedFaceDataDirectory;
- (id)photoMetadataDirectory;
- (id)cloudRestoreForegroundPhaseCompleteTokenPath;
- (id)createPathsForNewLibraries;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)externalDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)cloudRestoreBackgroundPhaseInProgressTokenPath;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)a0 error:(id *)a1;
- (id)basePrivateDirectoryPath;
- (id)privateDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)modelRestorePostProcessingCompleteTokenPath;
- (id)pathToAssetAlbumOrderStructure;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)a0;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)initWithLibraryURL:(id)a0;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)pathsForExternalWriters;
- (id)photoMutationsDirectory;
- (id)pathsForPermissionCheck;
- (id)privateCacheDirectoryWithSubType:(unsigned char)a0;
- (id)pathsForClientAccess:(id)a0;
- (id)pathToAssetsToAlbumsMapping;

@end

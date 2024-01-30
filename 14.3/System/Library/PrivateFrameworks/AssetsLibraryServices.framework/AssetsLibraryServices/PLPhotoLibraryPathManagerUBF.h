@class NSString, NSFileManager;

@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore {
    NSString *_databaseDirectory;
    NSString *_searchDatabaseDirectory;
    NSString *_originalsDirectory;
    NSString *_privateDirectory;
    NSString *_privateCacheDirectory;
    NSString *_resourcesDirectory;
    NSString *_journalsDirectory;
    NSString *_rendersDirectory;
    NSString *_derivativesDirectory;
    NSString *_derivativesThumbsDirectory;
    NSString *_derivativesMasterThumbsDirectory;
    NSString *_resourcesCPLDataDirectory;
    NSString *_resourcesPhotoStreamsDataDirectory;
    NSString *_resourcesPhotoCloudSharingDirectory;
    NSString *_resourcesPhotoCloudSharingDataDirectory;
    NSString *_resourcesPhotoCloudSharingMetadataDirectory;
    NSString *_resourcesPhotoCloudSharingCacheDirectory;
    NSString *_resourcesProjectsDataDirectory;
    NSString *_resourcesProjectsLegacyDirectory;
    NSString *_resourcesMomentSharedDirectory;
    NSString *_resourcesAnalyticsDirectory;
    NSString *_externalDirectory;
    NSFileManager *_fm;
}

+ (id)systemLibraryPathManager;

- (id)syncInfoPath;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)a0 mode:(unsigned char)a1 toURLWithHandler:(id /* block */)a2;
- (id)addToPath:(id)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)photosDatabasePath;
- (void).cxx_destruct;
- (id)baseDirectoryForBundleScope:(unsigned char)a0;
- (id)readOnlyUrlWithIdentifier:(id)a0;
- (void)setExtendedAttributesWithIdentifier:(id)a0 andURL:(id)a1;
- (id)photoDirectoryWithType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)convertPhotoLibraryPathType:(unsigned char)a0;
- (id)extendedPathsWithError:(id *)a0;
- (BOOL)createPathsForNewLibrariesWithError:(id *)a0;
- (id)_externalDirectoryWithBundleIdentifier:(id)a0 createIfNeeded:(BOOL)a1;
- (id)externalDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (void)setExtendedAttributesWithIdentifier:(id)a0;
- (id)basePrivateDirectoryPath;
- (id)privateDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)corePathsWithError:(id *)a0 directDatabaseAccess:(BOOL)a1 limitedLibrary:(BOOL)a2;
- (id)urlWithIdentifier:(id)a0;
- (id)initWithLibraryURL:(id)a0;
- (id)pathsForExternalWriters;
- (id)pathsForPermissionCheck;
- (id)privateCacheDirectoryWithSubType:(unsigned char)a0;
- (id)pathsForClientAccess:(id)a0;
- (id)pathToAssetsToAlbumsMapping;

@end

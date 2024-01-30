@class NSString, NSFileManager;

@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore {
    NSString *_databaseDirectory;
    NSString *_searchDatabaseDirectory;
    NSString *_originalsDirectory;
    NSString *_privateDirectory;
    NSString *_privateCacheDirectory;
    NSString *_scopesBaseDirectory;
    NSString *_scopesPhotoCloudSharingDirectory;
    NSString *_scopesPhotoCloudSharingDataDirectory;
    NSString *_scopesPhotoCloudSharingMetadataDirectory;
    NSString *_scopesPhotoCloudSharingCacheDirectory;
    NSString *_scopesSyndicationDirectory;
    NSString *_scopesMomentSharedDirectory;
    NSString *_resourcesDirectory;
    NSString *_journalsDirectory;
    NSString *_rendersDirectory;
    NSString *_derivativesDirectory;
    NSString *_derivativesThumbsDirectory;
    NSString *_derivativesMasterThumbsDirectory;
    NSString *_resourcesCPLDataDirectory;
    NSString *_resourcesPhotoStreamsDataDirectory;
    NSString *_resourcesProjectsDataDirectory;
    NSString *_resourcesProjectsLegacyDirectory;
    NSString *_resourcesAnalyticsDirectory;
    NSString *_resourcesPartialVideoDirectory;
    NSString *_externalDirectory;
    NSString *_internalDirectory;
    NSFileManager *_fm;
}

- (id)pathsForExternalWriters;
- (void)enumerateBundleScopesWithBlock:(id /* block */)a0;
- (id)pathsForClientAccess:(id)a0;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)a0 mode:(unsigned char)a1 toURLWithHandler:(id /* block */)a2;
- (id)pathsForPermissionCheck;
- (id)corePathsWithError:(id *)a0 directDatabaseAccess:(BOOL)a1 limitedLibrary:(BOOL)a2;
- (id)readOnlyUrlWithIdentifier:(id)a0;
- (id)convertPhotoLibraryPathType:(unsigned char)a0;
- (id)privateDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (void).cxx_destruct;
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)a0;
- (id)basePrivateDirectoryPath;
- (id)photosDatabasePath;
- (id)assetMainFilePathWithDirectory:(id)a0 filename:(id)a1 bundleScope:(unsigned short)a2;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)a0 type:(unsigned char)a1 bundleScope:(unsigned short)a2;
- (id)internalDirectoryWithSubType:(unsigned char)a0 additionalPathComponents:(id)a1;
- (id)urlWithIdentifier:(id)a0;
- (void)setExtendedAttributesWithIdentifier:(id)a0;
- (id)photoDirectoryWithType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)_scopedInternalPathManagerWithBundleScope:(unsigned short)a0;
- (id)_externalDirectoryWithBundleIdentifier:(id)a0 createIfNeeded:(BOOL)a1;
- (id)syncInfoPath;
- (void)setExtendedAttributesWithIdentifier:(id)a0 andURL:(id)a1;
- (BOOL)shouldUseFileIdentifierForBundleScope:(unsigned short)a0;
- (id)privateCacheDirectoryWithSubType:(unsigned char)a0;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1;
- (id)addToPath:(id)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (id)externalDirectoryWithSubType:(unsigned char)a0 leafType:(unsigned char)a1 additionalPathComponents:(id)a2;
- (BOOL)createPathsForNewLibrariesWithError:(id *)a0;
- (id)pathToAssetsToAlbumsMapping;
- (BOOL)isDeviceRestoreSupported;
- (id)extendedPathsWithError:(id *)a0;
- (BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)a0 error:(id *)a1;

@end

@class NSMutableDictionary, ML3AccountCacheDatabase, NSDate, NSDictionary, NSObject, ML3DatabasePrivacyContext, ML3DatabaseMetadata, ML3LibraryNotificationManager, NSString, ML3Container, NSArray, NSNumber, ML3DatabaseConnectionPool, NSLock, ML3MusicLibraryResourcesManager;
@protocol OS_dispatch_queue, ML3MusicLibraryDelegate;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate, NSSecureCoding, _MSVAccountInformationProviding> {
    NSString *_libraryUID;
    NSLock *_libraryUIDLock;
    NSString *_syncLibraryUID;
    ML3AccountCacheDatabase *_accountCacheDatabase;
    ML3DatabasePrivacyContext *_privacyContext;
    NSMutableDictionary *_optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryContainerFilterPredicatesByContainerClass;
    NSMutableDictionary *_optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
    BOOL _isHomeSharingLibraryLoaded;
    BOOL _isHomeSharingLibrary;
}

@property (class, readonly, nonatomic) BOOL deviceSupportsASTC;
@property (class, readonly, nonatomic) long long devicePreferredImageFormat;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *globalSerialQueue;
@property (class, copy, nonatomic) NSString *sharedLibraryDatabasePath;
@property (class, readonly, nonatomic) NSDictionary *distributedToLocalNotificationMapping;
@property (class, readonly, nonatomic) NSMutableDictionary *musicLibraryPerUserDSID;
@property (class, readonly, nonatomic) ML3MusicLibrary *autoupdatingSharedLibrary;
@property (class, readonly, copy, nonatomic) NSString *autoupdatingSharedLibraryPath;
@property (class, readonly, copy, nonatomic) NSArray *registeredLibraries;
@property (class, readonly, copy, nonatomic) NSArray *allLibraries;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *artworkDirectory;
@property (readonly, copy, nonatomic) NSString *originalArtworkDirectory;
@property (readonly, copy, nonatomic) NSString *rootArtworkCacheDirectory;
@property (readonly, nonatomic) BOOL supportsUbiquitousPlaybackPositions;
@property (copy, nonatomic) NSNumber *sagaAccountID;
@property (copy, nonatomic) NSNumber *sagaLastKnownActiveLockerAccountDSID;
@property (copy, nonatomic) NSDate *sagaLastGeniusUpdateDate;
@property (copy, nonatomic) NSDate *sagaLastItemPlayDataUploadDate;
@property (copy, nonatomic) NSDate *sagaLastPlaylistPlayDataUploadDate;
@property (copy, nonatomic) NSString *sagaCloudLibraryCUID;
@property (copy, nonatomic) NSString *sagaCloudLibraryTroveID;
@property (nonatomic) long long sagaDatabaseUserVersion;
@property (nonatomic) long long sagaCloudAddToPlaylistBehavior;
@property (nonatomic) BOOL sagaNeedsFullUpdateAfterNextUpdate;
@property (nonatomic) BOOL sagaPrefersToMergeWithCloudLibrary;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (copy, nonatomic) NSDate *sagaLastLibraryUpdateTime;
@property (copy, nonatomic) NSDate *sagaLastSubscribedContainersUpdateTime;
@property (nonatomic) long long preferredVideoQuality;
@property (nonatomic) long long sagaOnDiskDatabaseRevision;
@property (copy, nonatomic) NSNumber *jaliscoAccountID;
@property (copy, nonatomic) NSDate *jaliscoLastGeniusUpdateDate;
@property (copy, nonatomic) NSString *jaliscoLastSupportedMediaKinds;
@property (readonly, nonatomic) NSArray *jaliscoLastExcludedMediaKinds;
@property (nonatomic) BOOL jaliscoHasCloudGeniusData;
@property (nonatomic) BOOL jaliscoIsMusicGeniusUserEnabled;
@property (nonatomic) BOOL jaliscoNeedsUpdateForTokens;
@property (copy, nonatomic) NSDate *jaliscoLastLibraryUpdateTime;
@property (nonatomic) long long jaliscoOnDiskDatabaseRevision;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) ML3LibraryNotificationManager *notificationManager;
@property (readonly, nonatomic) struct iPhoneSortKeyBuilder { } *sortKeyBuilder;
@property (nonatomic, getter=isUsingSharedLibraryPath) BOOL usingSharedLibraryPath;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) ML3MusicLibraryResourcesManager *resourcesManager;
@property (weak, nonatomic) id<ML3MusicLibraryDelegate> delegate;
@property (readonly, nonatomic) ML3DatabaseConnectionPool *connectionPool;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) ML3DatabasePrivacyContext *privacyContext;
@property (readonly, nonatomic) NSString *libraryUID;
@property (readonly, nonatomic) long long currentRevision;
@property (readonly, nonatomic) long long currentContentRevision;
@property (nonatomic) long long syncGenerationID;
@property (readonly, nonatomic) long long autoFilledTracksTotalSize;
@property (nonatomic) NSString *syncLibraryID;
@property (readonly, nonatomic, getter=isLibraryEmpty) BOOL libraryEmpty;
@property (readonly, nonatomic) ML3Container *currentDevicePurchasesPlaylist;
@property (readonly, nonatomic) ML3Container *currentDevicePlaybackHistoryPlaylist;
@property (readonly, nonatomic) ML3Container *currentDevicePhotosMemoriesPlaylist;
@property (readonly, nonatomic) ML3DatabaseMetadata *databaseInfo;
@property (readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property (readonly, nonatomic) NSArray *preferredAudioTracks;
@property (readonly, nonatomic) NSArray *preferredSubtitleTracks;
@property (nonatomic) BOOL isHomeSharingLibrary;
@property (readonly, nonatomic) BOOL mediaRestrictionEnabled;
@property (readonly, nonatomic) BOOL downloadOnAddToLibrary;
@property (retain, nonatomic) NSArray *libraryEntityFilterPredicates;
@property (retain, nonatomic) NSArray *libraryContainerFilterPredicates;
@property (retain, nonatomic) NSArray *libraryPublicEntityFilterPredicates;
@property (retain, nonatomic) NSArray *libraryPublicContainerFilterPredicates;
@property (readonly, nonatomic) BOOL hasUserPlaylists;
@property (readonly, nonatomic) BOOL hasAddedToLibraryAppleMusicContent;
@property (readonly, nonatomic) BOOL hasUserPlaylistsContainingAppleMusicContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *accountDSID;

+ (id)pathForBaseLocationPath:(long long)a0;
+ (id)libraryContainerPathByAppendingPathComponent:(id)a0;
+ (id)pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(BOOL)a2 createParentFolderIfNecessary:(BOOL)a3;
+ (id)libraryContainerRelativePath:(id)a0;
+ (id)pathForResourceFileOrFolder:(int)a0;
+ (id)musicLibraryForUserAccount:(id)a0;
+ (void)setGlobalPrivacyContextWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)sectionIndexTitles;
+ (id)libraryContainerPath;
+ (id)sharedLibrary;
+ (void)setAutoupdatingSharedLibraryPath:(id)a0;
+ (id)assistantSyncDataChangedNotificationName;
+ (id)widthLimitedSetValuesQueue;
+ (id)_onGlobalQueue_shareableMusicLibraryWithResourcesManager:(id)a0;
+ (BOOL)deviceSupportsMultipleLibraries;
+ (void)disableSharedLibrary;
+ (void)disableAutomaticDatabaseValidation;
+ (void)enableAutomaticDatabaseValidation;
+ (id)localizedSectionHeaderForSectionHeader:(id)a0;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)a0;
+ (id)sectionIndexTitleForSectionHeader:(id)a0;
+ (void)enumerateSortMapTablesUsingBlock:(id /* block */)a0;
+ (void)removeOrphanedTracks;
+ (BOOL)updateTrackIntegrityOnConnection:(id)a0;
+ (id)artworkRelativePathFromToken:(id)a0;
+ (id)artworkTokenForArtistHeroURL:(id)a0;
+ (id)artworkTokenForChapterWithItemPID:(long long)a0 retrievalTime:(double)a1;
+ (long long)artworkSourceTypeForTrackSource:(int)a0;
+ (id)itemIndexSchemaSQL;
+ (int)userVersionUsingConnection:(id)a0;
+ (id)storeLinkSchemaSQL;
+ (id)sortMapSchemaSQL;
+ (id)sortMapNewSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)itemNewSchemaSQL;
+ (id)allSchemaSQL;
+ (id)allPragmaSQL;
+ (id)allTriggersSQL;
+ (id)allTables;
+ (id)indexSchemaSQL;
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)a0;
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)a0;
+ (BOOL)dropIndexesUsingConnection:(id)a0 tableNames:(const char *)a1;
+ (id)mediaFolderPath;
+ (id)mediaFolderPathByAppendingPathComponent:(id)a0;
+ (id)allLibraryContainerPaths;
+ (id)libraryPathForContainerPath:(id)a0;
+ (id)unitTestableLibraryForTest:(id)a0 basePath:(id)a1 setupSQLFilenames:(id)a2;
+ (id)databasePathForUnitTest:(id)a0 withBasePath:(id)a1;
+ (id)jaliscoGetSortedMediaKinds:(id)a0;

- (BOOL)recordPlayEventForAlbumPersistentID:(long long)a0;
- (BOOL)isCurrentThreadInTransaction;
- (void)importArtworkTokenForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkToken:(id)a2 artworkType:(long long)a3 sourceType:(long long)a4;
- (BOOL)deleteDatabaseProperty:(id)a0;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)a0;
- (BOOL)setValue:(id)a0 forDatabaseProperty:(id)a1;
- (id)valueForDatabaseProperty:(id)a0;
- (void)performDatabaseTransactionWithBlock:(id /* block */)a0;
- (BOOL)recordPlayEventForContainerPersistentID:(long long)a0;
- (void)databaseConnectionAllowingWrites:(BOOL)a0 withBlock:(id /* block */)a1;
- (unsigned long long)sectionIndexTitleIndexForSectionIndex:(unsigned long long)a0;
- (void)enumeratePersistentIDsAfterRevision:(long long)a0 revisionTrackingCode:(unsigned long long)a1 maximumRevisionType:(int)a2 forMediaTypes:(id)a3 inUsersLibrary:(BOOL)a4 usingBlock:(id /* block */)a5;
- (id)initWithPath:(id)a0;
- (void)setClientIdentity:(id)a0;
- (id)pathForBaseLocationPath:(long long)a0;
- (id)libraryContainerPathByAppendingPathComponent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (id)pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(BOOL)a2 createParentFolderIfNecessary:(BOOL)a3;
- (void)enumeratePersistentIDsAfterRevision:(long long)a0 revisionTrackingCode:(unsigned long long)a1 maximumRevisionType:(int)a2 usingBlock:(id /* block */)a3;
- (id)libraryContainerRelativePath:(id)a0;
- (BOOL)importOriginalArtworkFromImageData:(id)a0 withArtworkToken:(id)a1 artworkType:(long long)a2 sourceType:(long long)a3 mediaType:(unsigned int)a4;
- (void)retrieveBestArtworkTokensForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 retrievalTime:(double)a3 completionHandler:(id /* block */)a4;
- (BOOL)isArtworkTokenAvailable:(id)a0;
- (void).cxx_destruct;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)pathForResourceFileOrFolder:(int)a0;
- (void)clearSagaCloudAccountID;
- (id)initWithCoder:(id)a0;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)dealloc;
- (void)clearSagaLastItemPlayDataUploadDate;
- (void)clearSagaLastPlaylistPlayDataUploadDate;
- (id)libraryContainerPath;
- (void)connectionPool:(id)a0 createdNewConnection:(id)a1;
- (void)connectionWillOpenDatabase:(id)a0;
- (void)connectionDidOpenDatabase:(id)a0;
- (void)connectionWillCloseDatabase:(id)a0;
- (void)connectionDidAccessDatabase:(id)a0;
- (void)connectionDidBeginDatabaseTransaction:(id)a0;
- (void)connection:(id)a0 didEndDatabaseTransactionAndCommit:(BOOL)a1;
- (id)initWithClientIdentity:(id)a0 forUserAccount:(id)a1;
- (id)initWithResourcesManager:(id)a0;
- (id)initWithPath:(id)a0 readOnly:(BOOL)a1 populateUnitTestTablesBlock:(id /* block */)a2;
- (id)initWithClientIdentity:(id)a0 path:(id)a1;
- (id)initWithClientIdentity:(id)a0 path:(id)a1 readOnly:(BOOL)a2 populateUnitTestTablesBlock:(id /* block */)a3;
- (void)setLibraryUID:(id)a0;
- (id)libraryEntityFilterPredicatesForEntityClass:(Class)a0;
- (id)libraryEntityFilterPredicatesForContainerClass:(Class)a0;
- (id)checkoutReaderConnection;
- (id)checkoutWriterConnection;
- (void)checkInDatabaseConnection:(id)a0;
- (void)reconnectToDatabase;
- (void)performReadOnlyDatabaseTransactionWithBlock:(id /* block */)a0;
- (void)performAsyncDatabaseWriteTransactionWithBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (BOOL)automaticDatabaseValidationDisabled;
- (BOOL)validateDatabase;
- (int)currentDatabaseVersion;
- (BOOL)createIndexes;
- (BOOL)emptyAllTables;
- (BOOL)clearAllGeniusData;
- (BOOL)clearAllCloudKVSData;
- (id)accountCacheDatabase;
- (void)accessSortKeyBuilder:(id /* block */)a0;
- (id)groupingKeyForString:(id)a0;
- (id)groupingKeysForStrings:(id)a0;
- (unsigned long long)unknownSectionIndex;
- (void)notifyContentsDidChange;
- (void)notifyAssistantContentsDidChange;
- (void)notifyEntitiesAddedOrRemoved;
- (void)notifyNonContentsPropertyDidChange;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifySectionsDidChange;
- (void)notifyCloudLibraryAvailabilityDidChange;
- (void)notifyLibraryImportDidFinish;
- (void)notifyKeepLocalStateDidChange;
- (void)saveTrackMetadata;
- (void)saveTrackMetadataSinceRevision:(long long)a0 withGrappaID:(unsigned int)a1;
- (void)savePlaylists;
- (void)savePlaylistsSinceRevision:(long long)a0 withGrappaID:(unsigned int)a1;
- (BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)a0;
- (BOOL)requiresNonSchemaUpdatesOnConnection:(id)a0;
- (BOOL)updateSortMap;
- (void)getChangedPersistentIDsAfterRevision:(long long)a0 revisionTrackingCode:(long long)a1 maximumRevisionType:(int)a2 usingBlock:(id /* block */)a3;
- (BOOL)persistentID:(long long)a0 changedAfterRevision:(long long)a1 revisionTrackingCode:(long long)a2;
- (unsigned long long)countOfChangedPersistentIdsAfterRevision:(long long)a0 revisionTrackingCode:(unsigned long long)a1 maximumRevisionType:(int)a2;
- (void)removeSource:(int)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeSource:(int)a0 usingConnection:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeTracksWithPersistentIDs:(id)a0 fromSource:(int)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeTracksWithPersistentIDs:(id)a0 fromSource:(int)a1 usingConnection:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)removePlaylistsWithPersistentIDs:(id)a0 fromSource:(int)a1 usingConnection:(id)a2 withCompletionHandler:(id /* block */)a3;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned long long)a0;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)a0 urgency:(unsigned long long)a1 respectSongMattress:(BOOL)a2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)a0;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)a0 urgency:(unsigned long long)a1;
- (void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)importExistingOriginalArtworkWithArtworkToken:(id)a0 artworkType:(long long)a1 sourceType:(long long)a2 mediaType:(unsigned int)a3;
- (BOOL)importOriginalArtworkFromFileURL:(id)a0 withArtworkToken:(id)a1 artworkType:(long long)a2 sourceType:(long long)a3 mediaType:(unsigned int)a4;
- (BOOL)removeArtworkAssetWithToken:(id)a0;
- (BOOL)deleteArtworkToken:(id)a0;
- (void)migrateExistingArtworkToken:(id)a0 newArtworkToken:(id)a1 newSourceType:(long long)a2;
- (void)importArtworkTokenForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkToken:(id)a2 artworkType:(long long)a3 sourceType:(long long)a4 usingConnection:(id)a5;
- (void)removeArtworkTokenForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 sourceType:(long long)a3;
- (void)removeArtworkTokenForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 sourceType:(long long)a3 usingConnection:(id)a4;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 retrievalTime:(double)a3 usingConnection:(id)a4;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 retrievalTime:(double)a3 preserveExistingAvailableToken:(BOOL)a4 usingConnection:(id)a5;
- (void)enumerateArtworkTokensForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 usingBlock:(id /* block */)a3;
- (BOOL)cleanupArtworkWithOptions:(unsigned long long)a0;
- (BOOL)cleanupArtworkWithOptions:(unsigned long long)a0 usingConnection:(id)a1;
- (void)removeTombstonesForDeletedItems;
- (void)removeOrphanedTracksOnlyInCaches:(BOOL)a0;
- (void)removeItemsWithFamilyAccountID:(unsigned long long)a0 purchaserAccountID:(unsigned long long)a1 downloaderAccountID:(unsigned long long)a2;
- (void)migratePresignedValidity;
- (BOOL)hasPresignedValidity;
- (BOOL)verifyPresignedValidity;
- (void)deletePresignedValidity;
- (void)updateTrackIntegrity;
- (void)_logDatabaseAccess;
- (BOOL)_insertArtworkRowWithArtworkToken:(id)a0 artworkType:(long long)a1 sourceType:(long long)a2 relativePath:(id)a3;
- (BOOL)_insertArtworkRowWithArtworkToken:(id)a0 artworkType:(long long)a1 sourceType:(long long)a2 relativePath:(id)a3 usingConnection:(id)a4;
- (BOOL)_updateBestArtworkTokensForArtworkToken:(id)a0 artworkType:(long long)a1 sourceType:(long long)a2 preserveExistingAvailableToken:(BOOL)a3 usingConnection:(id)a4;
- (BOOL)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 retrievalTime:(double)a3 preserveExistingAvailableToken:(BOOL)a4 usingConnection:(id)a5;
- (id)_allArtworkVariantDirectories;
- (void)_deleteAllArtworkVariantsAtRelativePaths:(id)a0;
- (BOOL)_removeOrphanedArtworkTokensUsingConnection:(id)a0;
- (BOOL)_removeOrphanedArtworkMetadataUsingConnection:(id)a0;
- (BOOL)_removeOrphanedArtworkAssetsUsingConnection:(id)a0;
- (BOOL)_removeInvalidAvailableArtworkTokensUsingConnection:(id)a0;
- (void)_convertOriginalArtworkToDevicePreferredFormatFromSourceURL:(id)a0 toDestinationURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_autogenerateArtworkForRelativePath:(id)a0 artworkType:(long long)a1 mediaType:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (id)_newGeniusDBConnectionAtPath:(id)a0;
- (BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)a0;
- (void)_configureMediaLibraryDatabaseConnection:(id)a0;
- (void)_teardownMediaLibraryDatabaseConnection:(id)a0;
- (BOOL)_clearAllRowsFromTables:(id)a0;
- (void)_effectiveSettingsDidChangeNotification:(id)a0;
- (void)_loggingSettingsDidChangeNotification:(id)a0;
- (void)_libraryPathDidChangeNotification:(id)a0;
- (BOOL)_prepareForAccountChange:(id *)a0;
- (void)_completeAccountChangeWithPath:(id)a0;
- (BOOL)_shouldProcessAccountChanges;
- (void)_closeAndLockCurrentDatabaseConnections;
- (void)_setupNotificationManager;
- (void)_tearDownNotificationManager;
- (void)_postClientNotificationWithDistributedName:(id)a0 localName:(id)a1;
- (void)_onQueue_updateDatabaseConnectionsProfilingLevel;
- (id)artistForArtistName:(id)a0 seriesName:(id)a1;
- (id)artistGroupingKeyForArtistName:(id)a0 seriesName:(id)a1;
- (id)albumForAlbumArtistPersistentID:(long long)a0 albumName:(id)a1 feedURL:(id)a2 seasonNumber:(id)a3 compilation:(BOOL)a4;
- (BOOL)repairAlbumArtistRelationshipsWithConnection:(id)a0;
- (BOOL)_validateDatabaseUsingConnection:(id)a0 error:(id *)a1;
- (BOOL)coerceValidDatabaseWithError:(id *)a0;
- (id)insertStringsIntoSortMap:(id)a0 didReSortMap:(BOOL *)a1;
- (BOOL)inTransactionUpdateSortMapOnConnection:(id)a0 forceRebuild:(BOOL)a1 forceUpdateOriginals:(BOOL)a2;
- (BOOL)updateSortMapOnConnection:(id)a0 forceUpdateOriginals:(BOOL)a1;
- (BOOL)inTransactionUpdateSortMapOnConnection:(id)a0 forceUpdateOriginals:(BOOL)a1;
- (id)_systemUnicodeVersionData;
- (BOOL)inTransactionUpdateSearchMapOnConnection:(id)a0;
- (BOOL)coalesceMismatchedCollectionsUsingConnection:(id)a0;
- (struct { long long x0; long long x1; })nameOrderForString:(id)a0;
- (BOOL)_coalesceMismatchedCollectionClass:(Class)a0 usingConnection:(id)a1;
- (BOOL)updateSortMapOnConnection:(id)a0;
- (BOOL)validateSortMapUnicodeVersionOnConnection:(id)a0;
- (id)insertStringsIntoSortMap:(id)a0;
- (long long)insertStringIntoSortMapNoTransaction:(id)a0;
- (id)genreForGenre:(id)a0;
- (id)composerForComposerName:(id)a0;
- (id)albumArtistForEffectiveAlbumArtistName:(id)a0;
- (void)_updateSystemPlaylist:(id)a0 withName:(id)a1 usingConnection:(id)a2;
- (BOOL)updateSystemPlaylistNamesForCurrentLanguageUsingConnection:(id)a0;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (BOOL)autoFilledTracksArePurgeable;
- (long long)purgeableStorageSizeWithUrgency:(unsigned long long)a0 includeAutoFilledTracks:(BOOL)a1;
- (void)_enumeratePurgeableAlbumTracksForUrgency:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)_enumeratePurgeablePodcastEpisodesForUrgency:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (long long)_purgeableTracksTotalSizeWithUrgency:(unsigned long long)a0 includeAutoFilledTracks:(BOOL)a1;
- (unsigned long long)_purgeableArtworkTotalSizeWithUrgency:(unsigned long long)a0;
- (id)_nonPurgeableAlbumsQuerySQLWithUrgency:(unsigned long long)a0;
- (id)_purgeableItemsPredicateSQLWithUrgency:(unsigned long long)a0;
- (long long)minimumPurgeableStorage;
- (unsigned long long)_totalSizeForAllNonCacheTracks;
- (id)_purgeableAlbumsQuerySQLWithUrgency:(unsigned long long)a0;
- (void)_enumeratePurgeableTracksForUrgency:(unsigned long long)a0 includeAutoFilledTracks:(BOOL)a1 includeCloudAssets:(BOOL)a2 usingBlock:(id /* block */)a3;
- (id)_purgeableTrackPredicateWithUrgency:(unsigned long long)a0 includeAutoFilledTracks:(BOOL)a1 includeCloudAssets:(BOOL)a2;
- (long long)_clearAllCloudAssets;
- (BOOL)_shouldPurgeKeepLocalTracksForUrgency:(unsigned long long)a0;
- (id)_allKeepLocalPlaylistTracks;
- (id)_notInKeepLocalCollectionPredicate;
- (long long)clearPurgeableStorageAmount:(long long)a0 withUrgency:(unsigned long long)a1 includeAutoFilledTracks:(BOOL)a2;
- (long long)_cloudAssetsTotalSize;
- (long long)_clearOrphanedAssetsOfAmount:(long long)a0 withUrgency:(unsigned long long)a1;
- (long long)_clearDatabaseFileFreeSpace;
- (long long)purgeableStorageSizeWithUrgency:(unsigned long long)a0;
- (long long)clearPurgeableStorageAmount:(long long)a0 withUrgency:(unsigned long long)a1;
- (long long)clearAllRemovedTracks;
- (void)setAutoFilledTracksArePurgeable:(BOOL)a0;
- (void)setShouldOptimizeStorage:(BOOL)a0;
- (void)setMinimumPurgeableStorage:(long long)a0;
- (unsigned long long)_managedClearPurgeableTracksOfAmount:(unsigned long long)a0 urgency:(unsigned long long)a1;
- (long long)_clearPurgeableTracksOfAmount:(long long)a0 withUrgency:(unsigned long long)a1 includeAutoFilledTracks:(BOOL)a2;
- (unsigned long long)_clearPurgeableArtworkOfAmount:(long long)a0 withUrgency:(unsigned long long)a1;
- (long long)_clearPurgeableTracksOfAmount:(long long)a0 withUrgency:(unsigned long long)a1 includeCloudAssets:(BOOL)a2 includeAutoFilledTracks:(BOOL)a3;
- (long long)_databaseFileFreeSpace;
- (unsigned long long)_artworkTotalSize;
- (BOOL)shouldOptimizeStorage;
- (BOOL)_shouldPurgeAllArtworkAtUrgency:(unsigned long long)a0;
- (unsigned long long)_managedPurgeableTracksTotalSizeWithUrgency:(unsigned long long)a0;
- (unsigned long long)_purgeAllArtwork;
- (void)_enumeratePurgeableStreamedTracksForUrgency:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)artworkCacheDirectoryForSize:(struct CGSize { double x0; double x1; })a0;
- (id)artworkCacheDirectoryForEffect:(id)a0;
- (BOOL)hasOriginalArtworkForRelativePath:(id)a0;
- (BOOL)isArtworkFetchableForPersistentID:(long long)a0 entityType:(long long)a1 artworkType:(long long)a2 artworkSourceType:(long long)a3;
- (id)uppService;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)a0;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)a0;
- (void)clearSagaLastGeniusUpdateDate;
- (void)clearSagaCloudLibraryCUID;
- (void)clearSagaCloudLibraryTroveID;
- (void)clearSagaPrefersToMergeWithCloudLibrary;
- (void)clearSagaCloudAddToPlaylistBehavior;
- (long long)syncIdFromMultiverseId:(id)a0;
- (BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)a0 error:(id *)a1;
- (void)clearJaliscoAccountID;
- (void)clearJaliscoLastGeniusUpdateDate;
- (void)sortJaliscoLastSupportedMediaKinds;
- (void)updateJaliscoExcludedMediaKindsWith:(id)a0 excludingMediaKindsInSet:(BOOL)a1;
- (void)clearJaliscoLastExcludedMediaKinds;

@end

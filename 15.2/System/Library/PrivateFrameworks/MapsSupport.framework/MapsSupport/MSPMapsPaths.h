@class NSString, NSURL;

@interface MSPMapsPaths : NSObject {
    NSURL *_libraryURL;
    NSURL *_groupLibraryURL;
    id /* block */ _invalidationHandler;
}

@property (readonly, nonatomic) NSString *homeDirectory;
@property (readonly, nonatomic) NSString *mapsDirectory;
@property (readonly, nonatomic) NSString *cacheDirectory;
@property (readonly, nonatomic) NSString *groupDirectory;
@property (readonly, nonatomic) NSString *nanoDirectory;
@property (readonly, nonatomic) NSString *geoPinnedPlacesSettingsPath;
@property (readonly, nonatomic) NSString *geoCollectionsSettingsPath;
@property (readonly, nonatomic) NSString *bookmarksSettingsPath;
@property (readonly, nonatomic) NSString *geoBookmarksSettingsPath;
@property (readonly, nonatomic) NSString *directionsSettingsPath;
@property (readonly, nonatomic) NSString *historySettingsPath;
@property (readonly, nonatomic) NSString *geoHistorySettingsPath;
@property (readonly, nonatomic) NSString *nanoHistorySettingsPath;
@property (readonly, nonatomic) NSString *failedSearchesSettingsPath;
@property (readonly, nonatomic) NSString *failedGeoSearchesSettingsPath;
@property (readonly, nonatomic) NSString *failedGeoDirectionsSettingsPath;
@property (readonly, nonatomic) NSString *failedDirectionsSettingsPath;
@property (readonly, nonatomic) NSString *routingAppLaunchRecordPath;
@property (readonly, nonatomic) NSString *pinsSettingsPath;
@property (readonly, nonatomic) NSString *directionsCachePath;
@property (readonly, nonatomic) NSString *reportAProblemDirectionsRecordingsPath;
@property (readonly, nonatomic) NSString *reportAProblemSearchRecordingsPath;
@property (readonly, nonatomic) NSString *reportAProblemNotificationsPath;
@property (readonly, nonatomic) NSString *favoritesSyncedMarkerFile;
@property (readonly, nonatomic) BOOL shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
@property (readonly, nonatomic) NSString *historySyncedMarkerFile;
@property (readonly, nonatomic) BOOL shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;

+ (id)cacheDirectory;
+ (id)routingAppLaunchRecordPath;
+ (id)failedDirectionsSettingsPath;
+ (id)mapsApplicationContainerPaths;
+ (id)nanoDirectory;
+ (id)failedGeoDirectionsSettingsPath;
+ (id)currentMapsApplicationContainerURL;
+ (id)failedGeoSearchesSettingsPath;
+ (id)currentMapsGroupContainerURL;
+ (id)historySyncedMarkerFile;
+ (id)pinsSettingsPath;
+ (id)groupDirectory;
+ (id)mapsApplicationContainerPathsWithInvalidationHandler:(id /* block */)a0;
+ (id)geoHistorySettingsPath;
+ (id)directionsSettingsPath;
+ (id)historySettingsPath;
+ (id)reportAProblemNotificationsPath;
+ (id)favoritesSyncedMarkerFile;
+ (id)directionsCachePath;
+ (id)geoBookmarksSettingsPath;
+ (id)mapsDirectory;
+ (id)failedSearchesSettingsPath;
+ (id)reportAProblemSearchRecordingsPath;
+ (id)geoCollectionsSettingsPath;
+ (id)pathsAtLocation:(long long)a0;
+ (id)geoPinnedPlacesSettingsPath;
+ (id)reportAProblemDirectionsRecordingsPath;
+ (id)bookmarksSettingsPath;
+ (id)nanoHistorySettingsPath;

- (BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)a0;
- (id)initWithLibraryDirectoryURL:(id)a0 groupLibraryURL:(id)a1 invalidationHandler:(id /* block */)a2;
- (BOOL)_deleteSyncedFileAtPath:(id)a0;
- (void)_invalidate;
- (BOOL)deleteHistorySyncedMarkerFile;
- (BOOL)deleteFavoritesSyncedMarkerFile;
- (void).cxx_destruct;

@end

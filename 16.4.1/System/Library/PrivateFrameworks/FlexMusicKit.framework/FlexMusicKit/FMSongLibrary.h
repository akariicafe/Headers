@class FlexReachability, NSMutableDictionary, NSDictionary, NSMutableSet, NSArray, NSMutableArray, FlexCloudManager;

@interface FMSongLibrary : NSObject

@property (retain, nonatomic) NSMutableArray *songs;
@property (readonly, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSMutableDictionary *songsByUID;
@property (retain, nonatomic) NSMutableSet *assetsInFlight;
@property (retain, nonatomic) FlexCloudManager *cloudManager;
@property (retain, nonatomic) FlexReachability *flexReachability;
@property (nonatomic) long long networkStatus;
@property (nonatomic) BOOL contactedCloud;
@property (retain, nonatomic) NSArray *bundledSongs;
@property (readonly, nonatomic) BOOL networkingIsDisabled;

+ (id)sharedLibraryWithOptions:(id)a0;

- (void)_setupReachability;
- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)fetchSongWithUID:(id)a0;
- (id)fetchSongsWithOptions:(id)a0;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)a0;
- (id)fetchSongsWithOptions_photos_only:(id)a0;
- (id)_registerSongs:(id)a0;
- (BOOL)supportForCloud;
- (void)_createCloudManager;
- (void)_downloadProgressChanged:(id)a0;
- (void)_loadBundledSongs;
- (void)_loadCachedSongs;
- (void)_notifySongDownloadInProgressChanged:(BOOL)a0;
- (void)_notifySongsChanged:(id)a0;
- (void)_updateFromCloud;
- (void)cancelDownloadOfAllAssets;
- (void)networkStatusChanged:(id)a0;
- (id)registerSongBundleAtPath:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)unregisterSongWithID:(id)a0;

@end

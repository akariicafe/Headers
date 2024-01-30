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

- (id)initWithOptions:(id)a0;
- (void)_setupReachability;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fetchSongWithUID:(id)a0;
- (id)fetchSongsWithOptions:(id)a0;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)networkStatusChanged:(id)a0;
- (void)_createCloudManager;
- (void)_loadBundledSongs;
- (void)_loadCachedSongs;
- (void)_updateFromCloud;
- (void)_notifySongsChanged:(id)a0;
- (void)_downloadProgressChanged:(id)a0;
- (void)_notifySongDownloadInProgressChanged:(BOOL)a0;
- (id)registerSongBundleAtPath:(id)a0;
- (BOOL)supportForCloud;
- (void)unregisterSongWithID:(id)a0;
- (id)_registerSongs:(id)a0;
- (void)cancelDownloadOfAllAssets;

@end

@class NSMutableDictionary, NSMutableArray, FMSongLibrary;

@interface FlexCloudManager : NSObject

@property (nonatomic) unsigned long long retryCount;
@property (readonly, weak) FMSongLibrary *library;
@property (readonly) NSMutableArray *cloudManagedSongs;
@property (readonly) NSMutableDictionary *cloudManagedSongsByUID;

+ (id)createCloudManager:(long long)a0 withLibrary:(id)a1 options:(id)a2;

- (id)initWithLibrary:(id)a0;
- (unsigned long long)assetStatus:(id)a0;
- (void).cxx_destruct;
- (void)retryFetchAllSongs;
- (void)fetchAllSongsWithCompletion:(id /* block */)a0;
- (void)_registerSongs:(id)a0;
- (void)cancelDownloadOfAsset:(id)a0;
- (id)loadCachedSongs;
- (void)loadAssetWithID:(id)a0 forSongID:(id)a1;
- (void)requestDownloadOfAsset:(id)a0 withOptions:(id)a1;
- (void)cancelDownloadOfAllAssets;
- (void)requestPurgeOfAsset:(id)a0;
- (id)_purgeAndReturnReplacementFor:(id)a0;
- (void)requestDownloadOfAsset:(id)a0;

@end

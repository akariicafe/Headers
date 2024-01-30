@class NSObject;
@protocol FlexSongProtocol;

@interface FMSong : NSObject

@property (readonly) NSObject<FlexSongProtocol> *backend;

+ (id)availableTagIDs;
+ (BOOL)hasValidTagIDs:(id)a0;
+ (id)loadSongBundleAtPath:(id)a0;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)a0;
+ (id)localizedNameForTagWithID:(id)a0;
+ (long long)versionFromArtworkFilename:(id)a0;

- (id)artistName;
- (id)keywords;
- (id)tagIDs;
- (id)uid;
- (long long)metadataVersion;
- (BOOL)canPlay;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (void)updateAssets:(id)a0;
- (BOOL)isLoaded;
- (long long)sampleRate;
- (BOOL)hidden;
- (id)description;
- (id)initWithBackend:(id)a0;
- (id)_impl;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (void)_loadIfNeeded;
- (id)assetWithID:(id)a0;
- (id)idealDurations;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (id)songName;
- (id)uid_photos_only;
- (BOOL)_loadFlexSong;
- (void)_notifySongAssetsChanged;
- (id)audioEncoderPresetName;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (id)customOptions;
- (id)existingAssetWithID:(id)a0;
- (BOOL)recalled;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (id)songFormat;
- (void)updateAsset:(id)a0 downloadProgress:(double)a1 error:(id)a2;
- (void)updateBackend:(id)a0;

@end

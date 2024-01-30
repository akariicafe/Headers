@class NSObject;
@protocol FlexSongProtocol;

@interface FMSong : NSObject

@property (readonly) NSObject<FlexSongProtocol> *backend;

+ (id)availableTagIDs;
+ (id)localizedNameForTagWithID:(id)a0;
+ (id)loadSongBundleAtPath:(id)a0;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)a0;
+ (BOOL)hasValidTagIDs:(id)a0;
+ (long long)versionFromArtworkFilename:(id)a0;

- (id)artistName;
- (id)_impl;
- (id)uid;
- (BOOL)isLoaded;
- (BOOL)hidden;
- (id)tagIDs;
- (id)initWithBackend:(id)a0;
- (long long)metadataVersion;
- (long long)sampleRate;
- (BOOL)canPlay;
- (id)description;
- (void).cxx_destruct;
- (id)songName;
- (id)keywords;
- (id)artwork;
- (void)updateAssets:(id)a0;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (id)idealDurations;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)assetWithID:(id)a0;
- (id)customOptions;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)audioEncoderPresetName;
- (id)songFormat;
- (BOOL)recalled;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (id)mappedToVEK;
- (void)_notifySongAssetsChanged;
- (BOOL)_loadFlexSong;
- (void)_loadIfNeeded;
- (id)existingAssetWithID:(id)a0;
- (void)updateBackend:(id)a0;
- (void)updateAsset:(id)a0 downloadProgress:(double)a1;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;

@end

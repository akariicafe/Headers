@class NSObject;
@protocol FlexSongProtocol;

@interface FMSong : NSObject

@property (readonly) NSObject<FlexSongProtocol> *backend;

+ (id)loadSongsAndArtworkInFolderAtPath:(id)a0;
+ (id)loadSongBundleAtPath:(id)a0;
+ (id)availableTagIDs;
+ (id)localizedNameForTagWithID:(id)a0;
+ (BOOL)hasValidTagIDs:(id)a0;
+ (long long)versionFromArtworkFilename:(id)a0;

- (id)keywords;
- (id)artwork;
- (long long)sampleRate;
- (id)uid;
- (BOOL)hidden;
- (void).cxx_destruct;
- (id)artistName;
- (id)tagIDs;
- (BOOL)canPlay;
- (id)description;
- (id)initWithBackend:(id)a0;
- (long long)metadataVersion;
- (void)_loadIfNeeded;
- (void)updateAssets:(id)a0;
- (BOOL)isLoaded;
- (id)_impl;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)songName;
- (id)assetWithID:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (BOOL)recalled;
- (id)mappedToVEK;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)_notifySongAssetsChanged;
- (BOOL)_loadFlexSong;
- (id)existingAssetWithID:(id)a0;
- (void)updateBackend:(id)a0;
- (id)songFormat;
- (id)audioEncoderPresetName;
- (void)updateAsset:(id)a0 downloadProgress:(double)a1;
- (id)idealDurations;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)customOptions;

@end

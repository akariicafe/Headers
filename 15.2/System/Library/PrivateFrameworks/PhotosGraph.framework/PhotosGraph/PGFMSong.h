@class FMSong;

@interface PGFMSong : NSObject

@property (readonly, nonatomic) FMSong *wrappedSong;

+ (id)availableTagIDs;
+ (id)localizedNameForTagWithID:(id)a0;

- (id)artistName;
- (id)uid;
- (BOOL)isLoaded;
- (BOOL)hidden;
- (id)tagIDs;
- (long long)metadataVersion;
- (long long)sampleRate;
- (BOOL)canPlay;
- (id)description;
- (id)valence;
- (void).cxx_destruct;
- (id)songName;
- (id)arousal;
- (id)keywords;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (id)idealDurations;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)assetWithID:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)initWithFMSong:(id)a0;
- (id)audioEncoderPresetName;
- (id)songFormat;
- (BOOL)recalled;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (id)_valueAssociatedWithTagPrefix:(id)a0;

@end

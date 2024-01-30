@class NSString, NSSet, NSArray, UIImage, NSDictionary;

@interface FlexSongBackend : NSObject <FlexSongProtocol>

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *audioEncoderPresetName;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSSet *tagIDs;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) UIImage *artwork;
@property (retain, nonatomic) NSString *songFormat;
@property (nonatomic) long long sampleRate;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL recalled;
@property (nonatomic) long long metadataVersion;
@property (retain, nonatomic) NSDictionary *customOptions;

- (BOOL)isLoaded;
- (BOOL)canPlay;
- (void).cxx_destruct;
- (void)updateAssets:(id)a0;
- (id)idealDurations;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)assetWithID:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)existingAssetWithID:(id)a0;
- (void)updateSongArtist:(id)a0 title:(id)a1 tags:(id)a2 keywords:(id)a3 hidden:(BOOL)a4 recalled:(BOOL)a5 metadataVersion:(long long)a6;
- (id)initWithUID:(id)a0 songName:(id)a1 artistName:(id)a2 tagIDs:(id)a3 keywords:(id)a4 hidden:(BOOL)a5 recalled:(BOOL)a6 audioEncoderPresetName:(id)a7 metadataVersion:(long long)a8 songFormat:(id)a9 sampleRate:(long long)a10 customOptions:(id)a11;
- (void)updateSampleRate:(long long)a0;
- (BOOL)verifyRendition:(id)a0 forDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 failureReason:(id *)a2;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)timedMetadataItemsWithIdentifier:(id)a0 forRendition:(id)a1;
- (id)_loadArtworkImage;
- (BOOL)_verifyClips:(id)a0 inRendition:(id)a1 failureReason:(id *)a2;
- (BOOL)_verifyKeyFrames:(id)a0 failureReason:(id *)a1;

@end

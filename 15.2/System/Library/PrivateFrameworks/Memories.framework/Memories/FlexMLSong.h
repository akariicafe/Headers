@class FlexMLSummaryManager, NSString, NSURL;

@interface FlexMLSong : FlexSongBackend

@property (retain, nonatomic) FlexMLSummaryManager *summaryManager;
@property (readonly, nonatomic) NSString *rootPath;
@property (readonly, nonatomic) NSString *metadataPath;
@property (retain, nonatomic) NSString *audioFileExtension;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cachedNaturalDuration;
@property (readonly, nonatomic) NSURL *audioFileURL;

+ (id)loadSongAtPath:(id)a0;

- (BOOL)isLoaded;
- (id)initWithFileAtPath:(id)a0;
- (BOOL)canPlay;
- (void).cxx_destruct;
- (void)updateAssets:(id)a0;
- (id)idealDurations;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (void)_setupInitialAssets:(id)a0;
- (BOOL)verifyRendition:(id)a0 forDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 failureReason:(id *)a2;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)timedMetadataItemsWithIdentifier:(id)a0 forRendition:(id)a1;

@end

@class AVMutableCompositionTrack, AVMutableComposition, NSError, NSMutableArray;

@interface PXStoryExportAudioCompositionBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *audioMixParameters;
@property (retain, nonatomic) AVMutableComposition *audioComposition;
@property (nonatomic) float musicCompositionDefaultVolume;
@property (retain, nonatomic) NSMutableArray *musicCompositionTracks;
@property (retain, nonatomic) NSMutableArray *musicMixParameters;
@property (retain, nonatomic) AVMutableCompositionTrack *videoHighlightCompositionTrackA;
@property (retain, nonatomic) AVMutableCompositionTrack *videoHighlightCompositionTrackB;
@property (retain, nonatomic) AVMutableCompositionTrack *currentVideoHighlightCompositionTrack;
@property (retain, nonatomic) NSMutableArray *duckingAudioSegments;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } outroDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)finishAndWaitWithResultHandler:(id /* block */)a0;
- (void)_applyMusicDuckingAndFadeOut;
- (void)_applyVolumeRampsToVideoHilightAudioSegment:(id)a0 inAudioCompositionTrack:(id)a1 volume:(float)a2 fadeIn:(double)a3 fadeOut:(double)a4;
- (id)_insertAudioTrack:(id)a0 fromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 intoAudioCompositionTrack:(id)a2 atTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 error:(id *)a4;
- (id)_mutableAudioMixParametersCreatedIfNeededForCompositionTrack:(id)a0;
- (id)_mutableAudioMixParametersForCompositionTrack:(id)a0;
- (BOOL)addAudioFromVideoHighlightAsset:(id)a0 fromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atStoryTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 volume:(float)a3 fadeIn:(double)a4 fadeOut:(double)a5 shouldDuck:(BOOL)a6 error:(id *)a7;
- (BOOL)addMusicAsset:(id)a0 withAudioMix:(id)a1 preferredVolume:(float)a2 error:(id *)a3;
- (id)initWithMaximumDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 outroDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end

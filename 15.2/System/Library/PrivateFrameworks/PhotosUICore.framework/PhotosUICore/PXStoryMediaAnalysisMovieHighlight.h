@class NSData, NSDictionary;

@interface PXStoryMediaAnalysisMovieHighlight : NSObject <PXStoryMovieHighlight> {
    NSDictionary *_analysis;
    long long _highlightIndex;
}

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) float qualityScore;
@property (readonly, nonatomic) NSData *normalizationData;
@property (readonly, nonatomic) BOOL hasVoice;
@property (readonly, nonatomic) BOOL hasFace;
@property (readonly, nonatomic) BOOL hasMusic;
@property (readonly, nonatomic) float peakVolume;
@property (readonly, nonatomic) float loudness;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bestPlaybackRect;

+ (float)fractionOfResults:(id)a0 inRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
+ (id)movieHighlightsFromMediaAnalysis:(id)a0;
+ (id)movieSummaryFromMediaAnalysis:(id)a0;
+ (id)livePhotoFromMediaAnalysis:(id)a0;
+ (id)fullMovieFromMediaAnalysis:(id)a0;
+ (id)defaultHighlightFromMediaAnalysis:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })bestTimeRangeForTargetDuration:(double)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })bestTimeRangeForPreferredDuration:(double)a0 min:(double)a1 max:(double)a2;
- (id)initWithMediaAnalysis:(id)a0 movieHighlightIndex:(long long)a1;
- (id)analysisResults;
- (id)movieHighlightResults;
- (id)movieSummaryResults;
- (id)irisRecommendedResults;
- (id)movieHighlightScoreResults;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_bestTimeRangeForRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 targetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_bestTimeRangeForTargetDuration:(double)a0 tolerance:(double)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_bestTimeRangeForMinDuration:(double)a0 maxDuration:(double)a1;
- (id)voiceResults;
- (BOOL)hasVoiceInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)faceResults;
- (BOOL)hasFaceInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)musicResults;
- (BOOL)hasMusicInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)loudnessResults;
- (float)audioPeakForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)audioLoudnessForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end

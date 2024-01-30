@class NSArray, PXStoryMutableConcreteTimeline, NSIndexSet, PXStoryResourcesDataSource, NSMutableArray, PXStoryMultipartPanoramaParameters;
@protocol PXStoryTimelineSpec, PXStoryTimelineScorer, PXStoryTimelineStyle;

@interface PXStoryConcreteSubtimelineScanner : NSObject {
    struct { struct CGSize { double width; double height; } viewportSize; double dividerWidth; double singleAssetAspectRatio; } _clipCompositionContext;
    unsigned long long _productionOptions;
    long long _initialResourceIndex;
    long long _nextResourceIndex;
    long long _numberOfResources;
    BOOL _firstDisplayAssetIsSameAsKey;
    PXStoryMutableConcreteTimeline *_subtimelineWithClipComposition;
    PXStoryMutableConcreteTimeline *_bestSubtimeline;
    PXStoryMutableConcreteTimeline *_candidateSubtimeline;
    PXStoryMutableConcreteTimeline *_precedingSubtimeline;
    PXStoryMutableConcreteTimeline *_precedingSubtimelineWithCandidateSubtimeline;
    PXStoryMutableConcreteTimeline *_precedingSubtimelineWithCandidateAndSubsequentSubtimelines;
    PXStoryMutableConcreteTimeline *_subtimelineWithRemainingClips;
    PXStoryMutableConcreteTimeline *_emptySubtimeline;
    NSIndexSet *_originalPlaybackStylesAllowedInNUp;
    long long *_nUpPlaybackStyleMapping;
    NSMutableArray *_reusableDisplayAssetInfos;
    struct { struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } s; struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } t; } _noKenBurnsEffectParameters[3];
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; long long rank; } preferredCue; char expectedTransitionKind; } _defaultDurationInfo;
    long long _maximumNumberOfTitleTextResourceIndexes;
    long long *_titleTextResourceIndexes;
    PXStoryMultipartPanoramaParameters *_defaultHorizontalMultipartPanoramaParameters;
    PXStoryMultipartPanoramaParameters *_defaultVerticalMultipartPanoramaParameters;
    double _minimumAspectRatioForHorizontalMultipartPanorama;
    double _maximumAspectRatioForVerticalMultipartPanorama;
}

@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly, nonatomic) id<PXStoryTimelineSpec> spec;
@property (readonly, nonatomic) id<PXStoryTimelineStyle> timelineStyle;
@property (readonly, nonatomic) id<PXStoryTimelineScorer> timelineScorer;
@property (readonly, nonatomic) long long numberOfRemainingResources;
@property (readonly, nonatomic) NSArray *randomNumberGenerators;
@property (readonly, nonatomic) BOOL isAtBeginning;
@property (readonly, nonatomic) BOOL isAtEnd;
@property (nonatomic) struct { long long x0; unsigned long long x1[5]; } scanState;

- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_addTitlesToTimeline:(id)a0;
- (void)_initializeDefaultMultipartPanoramaParameters;
- (id)_newDisplayAssetsInfo;
- (id)_nextDisplayAssetsInfoWithMaximumCount:(long long)a0;
- (void)_recycleDisplayAssetsInfo:(id)a0;
- (BOOL)_scanFastestSubtimelineWithNextDisplayAssetResultHandler:(id /* block */)a0;
- (BOOL)_scanMultipartPanoramaSubtimelineAfterTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 axis:(long long)a1 nextDisplayAssetsInfo:(id)a2 resultHandler:(id /* block */)a3;
- (BOOL)_scanMultipartPanoramaSubtimelineAfterTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nextDisplayAssetsInfo:(id)a1 resultHandler:(id /* block */)a2;
- (BOOL)_scanSubtimelineWithClipComposition:(id)a0 displayAssets:(id)a1 assetContentInfos:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a2 playbackStyles:(const long long *)a3 separatorEffectParameters:(const struct { unsigned int x0; double x1; double x2; } *)a4 kenBurnsEffectParameters:(const struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a5 transitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a6 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 durationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a8 resultHandler:(id /* block */)a9;
- (void)enumeratePossibleNextSubtimelinesAfterTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (BOOL)scanBestSubtimelineFollowingTimeline:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)scanFastestSubtimelineWithDisplayAssetResourceCount:(long long)a0 resultHandler:(id /* block */)a1;
- (BOOL)scanFastestSubtimelineWithRemainingClipsResultHandler:(id /* block */)a0;
- (BOOL)scanSubtimelineWithClipComposition:(id)a0 displayAssets:(id)a1 assetContentInfos:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a2 playbackStyles:(const long long *)a3 separatorEffectParameters:(const struct { unsigned int x0; double x1; double x2; } *)a4 kenBurnsEffectParameters:(const struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a5 transitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a6 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 durationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a8 resultHandler:(id /* block */)a9;

@end

@class PXStoryRecipeClipMotionStyleProvider, NSArray, NSMutableDictionary, PFStoryAutoEditConfiguration, PXStoryRecipeClipTransitionProvider, PXStoryMultipartPanoramaParameters;
@protocol PXAudioCueSource, PXStoryTimelineSpec, PXAudioAsset, PXStoryAutoEditDecisionList, PFRandomNumberGenerator, PXStoryErrorReporter;

@interface PXStoryConcreteTimelineStyle : NSObject <PXStoryTimelineStyle> {
    id<PXStoryTimelineSpec> _spec;
    BOOL _isRTL;
    id<PXAudioAsset> _audioAsset;
    long long _songPace;
    struct { unsigned long long croppingOptions; BOOL preferStillKeySegment; } _styleOptions;
    unsigned long long _keyAssetCroppingOptions;
    unsigned long long _otherAssetsCroppingOptions;
    BOOL _allowsDefaultTransitions;
    BOOL _allowsRandomTransitionFallback;
    NSArray *_possibleFallbackTransitionKinds;
    BOOL _allowsDefaultSeparatorEffects;
    BOOL _allowsRandomSeparatorEffectsFallback;
    BOOL _allowsDefaultKenBurns;
    BOOL _allowsRandomKenBurnsFallback;
    struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } _overallDurationInfo;
    id<PXStoryAutoEditDecisionList> _autoEditDecisionList;
    NSArray *_allowedKeyAssetClipCompositions;
    NSArray *_allowedClipCompositions;
    id<PFRandomNumberGenerator> _randomNumberGenerator;
    id<PXStoryErrorReporter> _errorReporter;
    id<PXAudioCueSource> _cueSource;
    double _effectiveMovementDurationFactor;
    double _scaleSpeedFactor;
    double _rotationSpeedFactor;
    BOOL _didInitializeDefaultMultipartPanoramaParameters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_clipByAssetUUID;
    PXStoryRecipeClipTransitionProvider *_fallbackTransitionProvider;
    PXStoryRecipeClipMotionStyleProvider *_fallbackMotionStyleProvider;
    PFStoryAutoEditConfiguration *_autoEditConfiguration;
}

@property (readonly, nonatomic) BOOL allowsKenBurnsAnimations;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } defaultDisplayAssetPresentationDuration;
@property (readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultHorizontalMultipartPanoramaParameters;
@property (readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultVerticalMultipartPanoramaParameters;
@property (readonly, nonatomic) BOOL allowsIncompleteTimelines;

- (id)init;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })_durationInfoForClip:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_clipForDisplayAsset:(id)a0;
- (id)_clipForDisplayAssets:(id)a0;
- (void)_ensureDefaultMultipartPanoramaParameters;
- (void)_getOneUpKenBurnsParameters:(struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forMotionInfo:(const struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; } *)a1 motionParameters:(const struct { double x0; double x1; double x2; double x3; } *)a2 factory:(id)a3;
- (struct { double x0; double x1; double x2; double x3; })_kenBurnsMotionParametersForDuration:(double)a0;
- (struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })_transitionInfoForClip:(id)a0 isKeyAsset:(BOOL)a1;
- (id)allowedClipCompositionsWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nextDisplayAssets:(id)a1;
- (BOOL)allowsMultipartPanoramaForDisplayAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; })audioInfoForDisplayAsset:(id)a0;
- (id)clipCompositionForKeyAsset:(id)a0 contentInfo:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a1 finalPlaybackStyle:(long long)a2;
- (double)composabilityScoreForSegmentWithDisplayAssets:(id)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })contentInfoForDisplayAsset:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })durationInfoForSegmentWithDisplayAssets:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (double)effectiveMovementDurationForDurationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a0;
- (void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)a0 displayAssets:(id)a1 assetContentInfos:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a2 finalPlaybackStyles:(const long long *)a3 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 durationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a5 separatorEffectParameters:(const struct { unsigned int x0; double x1; double x2; } *)a6 separatorEffectContext:(long long)a7 buffer:(struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a8 usingBlock:(id /* block */)a9;
- (void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)a0 displayAssets:(id)a1 finalPlaybackStyles:(const long long *)a2 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 durationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a4 buffer:(struct { unsigned int x0; double x1; double x2; } *)a5 usingBlock:(id /* block */)a6;
- (long long)finalNUpPlaybackStyleForOriginalPlaybackStyle:(long long)a0;
- (long long)finalOneUpPlaybackStyleForDisplayAsset:(id)a0 originalPlaybackStyle:(long long)a1;
- (id)initWithSpec:(id)a0 audioAsset:(id)a1 cueSource:(id)a2 overallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a3 autoEditDecisionList:(id)a4 autoEditConfiguration:(id)a5 allowedKeyAssetClipCompositions:(id)a6 allowedClipCompositions:(id)a7 randomNumberGenerators:(id)a8 errorReporter:(id)a9 allowsIncompleteTimelines:(BOOL)a10 styleOptions:(struct { unsigned long long x0; BOOL x1; })a11;
- (BOOL)isOriginalPlaybackStyleAllowedInNUp:(long long)a0;
- (id)sortedCropContentsRectsForMultipartPanoramaWithDisplayAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 proposedCropContentsRects:(id)a2 axis:(long long)a3 normalizedKenBurnsEffectParameters:(struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a4 durationInfos:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } *)a5 transitionInfos:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } *)a6;
- (struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })transitionInfoForSegmentWithClipComposition:(id)a0 displayAssets:(id)a1;

@end

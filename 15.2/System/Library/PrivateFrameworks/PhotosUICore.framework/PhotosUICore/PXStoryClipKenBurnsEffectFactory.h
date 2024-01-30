@protocol PXStoryTimelineSpec, PXStoryClipComposition, PXStoryDisplayAssetCroppingContext, PXDisplayAssetFetchResult;

@interface PXStoryClipKenBurnsEffectFactory : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    long long _clipCount;
    long long _clipCapacity;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_clipFrames;
    struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *_clipSafeAreaInsets;
    struct CGSize { double x0; double x1; } *_clipAssetSizes;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_clipSuggestedCrops;
    struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *_clipSourceTransforms;
    struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *_clipTargetTransforms;
    BOOL _shouldFitSourceAndTargetIndependently;
    long long _assetCapacity;
    struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *_assetContentInfos;
    long long *_assetPlaybackStyles;
}

@property (readonly, nonatomic) id<PXStoryTimelineSpec> spec;
@property (readonly, nonatomic) id<PXStoryClipComposition> clipComposition;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) id<PXStoryDisplayAssetCroppingContext> croppingContext;
@property (readonly, nonatomic) unsigned long long croppingOptions;
@property (readonly, nonatomic) long long numberOfParameters;

+ (void)factoryForSpec:(id)a0 clipComposition:(id)a1 displayAssets:(id)a2 croppingContext:(id)a3 croppingOptions:(unsigned long long)a4 assetContentInfos:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a5 playbackStyles:(const long long *)a6 separatorEffectParameters:(const struct { unsigned int x0; double x1; double x2; } *)a7 handler:(id /* block */)a8;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)_configureWithSpec:(id)a0 clipComposition:(id)a1 displayAssets:(id)a2 croppingContext:(id)a3 croppingOptions:(unsigned long long)a4 assetContentInfos:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a5 playbackStyles:(const long long *)a6 separatorEffectParameters:(const struct { unsigned int x0; double x1; double x2; } *)a7;
- (void)_getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forConfiguration:(id /* block */)a1;
- (void)getParametersForNoEffect:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forZoomWithScale:(double)a1;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forZoomWithScale:(double)a1 relativeTransformOrigin:(struct CGPoint { double x0; double x1; })a2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forPanWithCameraMovingTowardsEdge:(unsigned int)a1 distance:(double)a2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forOppositePansWithDistance:(double)a1;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forParallelPansWithDistance:(double)a1;
- (void)_configureClipAtIndex:(long long)a0 forPanWithCameraMovingTowardsEdge:(unsigned int)a1 distance:(double)a2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forSplitAssetOppositePansWithDistance:(double)a1;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forRotationWithAngle:(double)a1 scale:(double)a2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a0 forRotationWithAngle:(double)a1 scale:(double)a2 relativeTransformOrigin:(struct CGPoint { double x0; double x1; })a3;

@end

@class Backwarp, Correlation, FeatureExtractor, NSObject, FlowEstimate;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, MTLCommandQueue, MTLDeviceSPI;

@interface OpticalFlow : NSObject {
    FeatureExtractor *_featureExtractor;
    FlowEstimate *_flowEstimator[6];
    FeatureExtractor *_baseFeatureExtractor;
    FlowEstimate *_baseFlowEstimator[6];
    Correlation *_correlation;
    Backwarp *_backwarp;
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    NSObject<OS_dispatch_semaphore> *_flowEstimateSemaphore;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    long long _usage;
    long long _baseStageUsage;
    BOOL _baseStageCreated;
}

@property (readonly, nonatomic) int numLevels;
@property (nonatomic) BOOL upscaleFinalFlow;
@property (nonatomic) unsigned long long downsampling;
@property (nonatomic) BOOL skipLastLevel;
@property (nonatomic) BOOL preAllocateResources;
@property (nonatomic) BOOL twoStageFlow;

- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)switchUsageTo:(long long)a0;
- (void)allocateFeatureBuffers:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a0;
- (void)allocateIntermediateStorage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a0;
- (void)releaseFeatureBuffers:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a0;
- (void)releaseIntermediateStorage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a0;
- (void)extractFeaturesFromFirst:(struct __CVBuffer { } *)a0 second:(struct __CVBuffer { } *)a1 outputFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a2;
- (void)predictFowardFlow:(struct __CVBuffer { } *)a0 fromBackwardFlow:(struct __CVBuffer { } *)a1;
- (void)estimateFlowFromFirstFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a0 secondFeature:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a1 storage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a2 outputFlow:(struct __CVBuffer { } *)a3;
- (void)estimateTwoWayFlowFromFirstFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a0 secondFeature:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a1 storage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } x1; } *)a2 outputForwardFlow:(struct __CVBuffer { } *)a3 outputBackwardFlow:(struct __CVBuffer { } *)a4;
- (void)upscaleInputFlow:(struct __CVBuffer { } *)a0 outFlow:(struct __CVBuffer { } *)a1;
- (BOOL)createModules;
- (BOOL)createBaseLayer;
- (void)allocateIntermediateStageStorage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } *)a0 baseStage:(BOOL)a1;
- (void)allocateCorreleationBuffer:(struct __CVBuffer **)a0 forLevel:(unsigned int)a1 extractor:(id)a2;
- (void)releaseIntermediateStageStorage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } *)a0;
- (void)allocateImageFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a0 extractor:(id)a1;
- (void)releaseImageFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a0;
- (void)extractFeaturesFromImage:(struct __CVBuffer { } *)a0 outputFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a1;
- (struct __CVBuffer { } *)subsmapleInput:(struct __CVBuffer { } *)a0 forUsage:(long long)a1;
- (void)releaseUnusedFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } x1; } *)a0;
- (void)estimateStageFlowFromFirstFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a0 secondFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a1 storage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; unsigned int x4; } *)a2 baseStage:(BOOL)a3 startLevel:(int)a4 lastLevel:(int)a5 startFlow:(struct __CVBuffer { } *)a6 outputFlow:(struct __CVBuffer { } *)a7;
- (void)estimateFlowLevel:(unsigned int)a0 withEstimator:(id *)a1 firstFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a2 secondFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; } *)a3 correlation:(struct __CVBuffer { } *)a4 upscaledFlow:(struct __CVBuffer { } *)a5 warpedImage:(struct __CVBuffer { } *)a6 prevFlow:(struct __CVBuffer { } *)a7 outputFlow:(struct __CVBuffer { } *)a8;

@end

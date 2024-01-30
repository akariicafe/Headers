@class NSObject, NSString, VCPBackwarp, VCPFlowDecoder, MPSImageBilinearScale, VCPFlowFeatureExtractor, VCPCorrelation;
@protocol MTLCommandQueue, MTLDeviceSPI, OS_dispatch_semaphore;

@interface VCPModelR2D2 : NSObject {
    NSString *_resConfig;
    int _numLevels;
    int _startLevel;
    VCPFlowFeatureExtractor *_featureExtractor;
    VCPFlowDecoder *_flowDecoder[7];
    VCPCorrelation *_correlation;
    VCPBackwarp *_backwarp;
    struct { struct { int channels; int height; int width; } featureShape[7]; struct __CVBuffer *feature[7]; } _imageFeature[2];
    struct { struct __CVBuffer *correlations[7]; struct __CVBuffer *flows[7]; struct __CVBuffer *upscaledFlows[7]; struct __CVBuffer *warpedBuffers[7]; } _storage;
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    NSObject<OS_dispatch_semaphore> *_flowDecoderSemaphore;
    MPSImageBilinearScale *_bilinearScale;
}

@property (readonly, nonatomic) int inputHeight;
@property (readonly, nonatomic) int inputWidth;

- (void).cxx_destruct;
- (int)createModules;
- (int)allocateFeatures;
- (int)configForAspectRatio:(id)a0;
- (int)updateModelForAspectRatio:(id)a0;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;
- (int)allocateStorages;
- (int)extractFeatureFromImage:(struct __CVBuffer { } *)a0 toFeature:(struct { struct { int x0; int x1; int x2; } x0[7]; struct __CVBuffer *x1[7]; } *)a1;
- (int)allocateCorreleationBuffer:(struct __CVBuffer **)a0 forLevel:(unsigned int)a1;
- (int)estimateFlowForLevel:(int)a0 upperFlow:(struct __CVBuffer { } *)a1 outputFlow:(struct __CVBuffer { } *)a2;
- (int)updateModulesWithConfig:(id)a0;
- (void)releaseFeatureBuffers;
- (void)releaseStorages;
- (id)initUsingLightweight:(BOOL)a0 aspectRatio:(id)a1 numLevels:(int)a2 startLevel:(int)a3;
- (int)extractFeaturesFromFirst:(struct __CVBuffer { } *)a0 andSecond:(struct __CVBuffer { } *)a1;
- (int)estimateMotionFlow:(struct __CVBuffer { } *)a0;
- (int)scaleFlowTo:(struct __CVBuffer { } *)a0 inFlow:(struct __CVBuffer { } *)a1;
- (void)releaseMemory;

@end

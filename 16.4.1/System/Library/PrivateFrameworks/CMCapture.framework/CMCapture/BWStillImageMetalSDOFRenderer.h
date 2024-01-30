@class NSString, NSDictionary, FigSDOFEffectRendering;
@protocol MTLCommandQueue;

@interface BWStillImageMetalSDOFRenderer : NSObject <BWFilterRenderer> {
    NSDictionary *_sdofRenderingTuningParameters;
    FigSDOFEffectRendering *_sdofEffectRenderer;
    int _portraitRenderQuality;
    struct { int width; int height; } _imageDimensions;
    struct { int width; int height; } _depthDataMapDimensions;
    id<MTLCommandQueue> _mtlCommandQueue;
}

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (id)initWithSDOFRenderingTuningParameters:(id)a0 imageDimensions:(struct { int x0; int x1; })a1 depthDataMapDimensions:(struct { int x0; int x1; })a2 portraitRenderQuality:(int)a3 metalCommandQueue:(id)a4;

@end

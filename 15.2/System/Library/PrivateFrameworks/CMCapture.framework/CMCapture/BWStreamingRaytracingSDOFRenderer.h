@class NSString, PTRenderPipeline, FigMetalContext, PTRenderRequest, MTLTextureDescriptor, BWFigVideoCaptureDevice;
@protocol PTRenderState;

@interface BWStreamingRaytracingSDOFRenderer : NSObject <BWFilterRenderer> {
    FigMetalContext *_metalContext;
    PTRenderPipeline *_ptRenderPipeline;
    PTRenderRequest *_ptRenderRequest;
    MTLTextureDescriptor *_texDesc;
    MTLTextureDescriptor *_texDescUV;
    MTLTextureDescriptor *_texDescDisparity;
    BWFigVideoCaptureDevice *_captureDevice;
    id<PTRenderState> _ptRenderState;
    BOOL _isFullRange;
    BOOL _isTenBit;
    BOOL _renderStateIsConfigured;
    long long _YCbCrColorDepth;
    struct { int width; int height; } _alignment;
    double _highlightBoostFactor;
    double _highlightChromaFactor;
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

- (void)dealloc;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithCaptureDevice:(id)a0;
- (int)createTextureDescriptorsWithColorVideoFormat:(id)a0 depthVideoFormat:(id)a1;
- (id)getPTTexture:(struct __CVBuffer { } *)a0;

@end

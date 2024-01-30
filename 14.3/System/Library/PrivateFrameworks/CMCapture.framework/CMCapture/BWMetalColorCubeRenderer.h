@class NSString, NSBundle, FigColorCubeMetalFilter;
@protocol MTLCommandQueue;

@interface BWMetalColorCubeRenderer : NSObject <BWFilterRenderer> {
    NSBundle *_bundle;
    FigColorCubeMetalFilter *_filter;
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
+ (id)bundle;

- (int)_loadAndConfigureFilterBundle;
- (id)initWithVideoFormat:(id)a0 metalCommandQueue:(id)a1;
- (void)dealloc;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end

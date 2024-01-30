@class NSString, MTLRenderPassDescriptor, NSObject;
@protocol MTLDevice, PXGMetalRenderDestinationDelegate, MTLTexture, OS_dispatch_queue;

@interface PXGPixelBufferMetalRenderDestination : NSObject <PXGMetalRenderDestination> {
    struct __CVMetalTextureCache { } *_textureCache;
    struct __CVBuffer { } *_cvMetalTexture;
    struct __CVBuffer { } *_pixelBuffer;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLTexture> renderTexture;
@property (retain, nonatomic) id<MTLTexture> depthStencilTexture;
@property (retain, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) unsigned int pixelBufferFormatType;
@property (readonly, nonatomic) struct CGColorSpace { } *destinationColorSpace;
@property (copy, nonatomic) id /* block */ renderCompletionBlock;
@property (readonly, nonatomic) struct CGSize { double width; double height; } renderSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderBoundsInPoints;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthStencilPixelFormat;
@property (weak, nonatomic) id<PXGMetalRenderDestinationDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (readonly, nonatomic) BOOL canSetColorSpace;
@property (nonatomic) struct CGColorSpace { } *colorspace;
@property (readonly, nonatomic) unsigned long long destinationColorSpaceName;
@property (nonatomic) BOOL lowMemoryMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsRender;
- (void)releaseCachedResources;
- (void)renderImmediately;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_createRenderPassDescriptor;
- (void)_createResourceForRenderingFrame;
- (void)_initializeDepthStencilTexture;
- (void)_initializeMetalProperties;
- (void)_initializePixelBufferProperties;
- (void)_releaseResourcesForRenderingFrame;
- (id)initWithCVPixelBufferPool:(struct __CVPixelBufferPool { } *)a0 scale:(double)a1;
- (void)notifyDidCompleteRenderForFrameID:(long long)a0;

@end

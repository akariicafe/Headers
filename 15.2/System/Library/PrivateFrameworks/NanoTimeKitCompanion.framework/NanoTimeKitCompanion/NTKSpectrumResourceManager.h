@protocol MTLDevice, MTLLibrary, MTLTexture, MTLRenderPipelineState, MTLBuffer;

@interface NTKSpectrumResourceManager : NSObject {
    id<MTLDevice> _device;
    unsigned long long _clients;
    unsigned long long _pixelFormat;
    id<MTLBuffer> _verticesBuffer;
    id<MTLRenderPipelineState> _pipelineStates[16];
    id<MTLTexture> _vignetteTexture;
    id<MTLTexture> _overlayTexture;
    id<MTLLibrary> _library;
}

+ (void)_deallocInstance:(id)a0;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPixelFormat:(unsigned long long)a0;
- (void)_loadGeometry;
- (void)_asyncDeallocInstance;
- (id)_generatePipeline:(unsigned long long)a0;
- (void)addClient;
- (void)removeClient;
- (id)vignetteTexture;
- (id)overlayTexture;
- (id)renderPipelineForConfig:(unsigned long long)a0;
- (id)verticesBuffer;

@end

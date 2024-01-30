@class NSBundle, NTKPromise;
@protocol MTLDevice;

@interface NTKKaleidoscopeResourceManager : NSObject {
    NSBundle *_bundle;
    id<MTLDevice> _device;
    unsigned long long _clients;
    unsigned long long _viewMtlPixelFormat;
    NTKPromise *_renderPipelines[4][2];
    NTKPromise *_mtlBuffer;
}

+ (void)_deallocInstance:(id)a0;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithPixelFormat:(unsigned long long)a0;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (void)_loadMTLBufferData;
- (void)_loadPrograms;
- (void)addClient;
- (void)removeClient;
- (void)_queue_setupPipelineForType:(unsigned long long)a0 vertexFunction:(id)a1 fragmentName:(id)a2 inLibrary:(id)a3 librarySPI:(id)a4;
- (id)getPipelineForShaderType:(unsigned long long)a0 blending:(BOOL)a1;
- (id)getGeometryBuffer;

@end

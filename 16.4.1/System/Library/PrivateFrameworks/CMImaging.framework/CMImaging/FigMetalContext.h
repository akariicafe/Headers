@class MTLVertexDescriptor, FigMetalAllocator, FigMetalExecutionStatus;
@protocol MTLBuffer, MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue, MTLPipelineLibrarySPI;

@interface FigMetalContext : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id<MTLPipelineLibrarySPI> pipelineLibrary;
@property (retain, nonatomic) FigMetalAllocator *allocator;
@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus;
@property (nonatomic) BOOL allowCommandBufferCommitsOnlyByForceCommit;
@property (retain, nonatomic) id<MTLBuffer> fullRangeVertexBuf;
@property (retain, nonatomic) MTLVertexDescriptor *fullRangeVertexDesc;

+ (id)createMetalDevice;

- (id)initWithbundle:(id)a0 andOptionalCommandQueue:(id)a1;
- (void)insertDebugCaptureBoundary;
- (id)rebindTex:(id)a0 format:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(int)a3 xFactor:(int)a4;
- (id)initWithLibraryData:(char *)a0 ofSize:(unsigned long long)a1 andOptionalCommandQueue:(id)a2;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 textureSize:(struct CGSize { double x0; double x1; })a3 plane:(unsigned long long)a4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 widthAlignmentFactor:(unsigned long long)a4 heightAlignmentFactor:(unsigned long long)a5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 alignmentFactor:(unsigned long long)a4;
- (void)commit;
- (BOOL)ReadMetalTextureFromFile:(const char *)a0 texture:(id)a1;
- (int)setQueuePriority:(int)a0;
- (BOOL)WriteMetalTextureToFile:(const char *)a0 texture:(id)a1;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3;
- (void)commitAndWait;
- (void)forceCommit;
- (id)initWithoutLibraryUsingOptionalCommandQueue:(id)a0;
- (id)create2DTextureFromBuffer:(id)a0 offset:(unsigned long long)a1 width:(int)a2 height:(int)a3 format:(unsigned long long)a4 usage:(unsigned long long)a5;
- (int)initRangeVertex;
- (void)prewarmInternalMetalShadersForFormatsList:(id)a0;
- (int)commonInitWithOptionalCommandQueue:(id)a0;
- (id)CreateMetalTextureFromFile:(const char *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4;
- (BOOL)ReadMetalTextureFromFile:(const char *)a0 texture:(id)a1 mipmapLevel:(int)a2;
- (BOOL)WriteMetalTextureToFile:(const char *)a0 texture:(id)a1 mipmapLevel:(int)a2;
- (void)waitForIdle;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)a0;
- (id)bindPixelBufferToMTLBuffer:(struct __CVBuffer { } *)a0;
- (id)init;
- (id)computePipelineStateFor:(id)a0 constants:(id)a1;
- (id)create2DTextureFromBuffer:(id)a0 offset:(unsigned long long)a1 stride:(unsigned long long)a2 width:(int)a3 height:(int)a4 format:(unsigned long long)a5 usage:(unsigned long long)a6;
- (void).cxx_destruct;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 plane:(unsigned long long)a5;
- (void)waitForSchedule;

@end

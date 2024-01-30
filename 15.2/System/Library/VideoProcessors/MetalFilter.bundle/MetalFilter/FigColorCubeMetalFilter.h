@class NSDictionary, NSString, FigMetalContext;
@protocol MTLCommandQueue, MTLTexture, MTLRenderPipelineState;

@interface FigColorCubeMetalFilter : NSObject <ImageBufferProcessor> {
    FigMetalContext *_metal;
    unsigned long long _yuvFormat;
    id<MTLRenderPipelineState> _colorCubePipelineState[2][2][2][2];
    id<MTLRenderPipelineState> _colorCubePipelineStateY[2][2][2][2];
    id<MTLRenderPipelineState> _colorCubePipelineStateUV[2][2][2][2];
    id<MTLRenderPipelineState> _cubeConvert[2];
    id<MTLTexture> _fgCubesTexture;
    id<MTLTexture> _fgCubesTextureTemp;
    id<MTLTexture> _bgCubeTexture;
    id<MTLTexture> _bgCubeTextureTemp;
    BOOL _useBgCube;
    BOOL _isSingleFgCube;
}

@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct { int x0; int x1; BOOL x2; int x3; BOOL x4; } *filterDescriptor;
@property (nonatomic) struct __CVBuffer { } *inputPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *mattePixelbuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRectangle;
@property (nonatomic) int matteToInputPixelBufferRotationDegrees;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)loadCube:(id)a0 ofSize:(int)a1 intoTexture:(id)a2 toSliceIndex:(int)a3;
+ (int)createCubeTexture:(id *)a0 ofSize:(int)a1 cubesCount:(int)a2 textureType:(unsigned long long)a3 withDevice:(id)a4;

- (int)releaseResources;
- (int)prewarm;
- (int)resetState;
- (int)createPipelineStatesForCubeConversionWithVertexFunction:(id)a0;
- (int)purgeResources;
- (int)createPipelineStatesWithFragmentName:(id)a0 vertexFunction:(id)a1;
- (int)prewarmWithTuningParameters:(id)a0;
- (int)process;
- (int)finishProcessing;
- (int)createKernels;
- (int)setForegroundCubesWithNames:(id)a0 data:(id)a1;
- (int)setup;
- (int)setBackgroundCubeWithName:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (int)prepareToProcess:(unsigned int)a0;
- (id)createPipelineStateWithVertexFunction:(id)a0 fragmentName:(id)a1 isLuma:(BOOL)a2 useBgCube:(BOOL)a3 manyFgCubes:(BOOL)a4 colorSpace:(int)a5 mixInGammaDomain:(BOOL)a6;
- (int)runWithInputPixelBuffer:(struct __CVBuffer { } *)a0 mattePixelBuffer:(struct __CVBuffer { } *)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2 targetRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)convertCubeWithSrcTexture:(id)a0 dstTexture:(id)a1 isP3Cube:(BOOL)a2;
- (void)dealloc;
- (int)allocateResources;
- (id)initWithCommandQueue:(id)a0;
- (void)prewarmMetalInternalShader;

@end

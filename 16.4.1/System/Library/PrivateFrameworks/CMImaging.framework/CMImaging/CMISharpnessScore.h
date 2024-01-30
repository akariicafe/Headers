@class FigMetalAllocator, FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMISharpnessScore : NSObject {
    FigMetalContext *_metal;
    float _kernelWeight[25];
    id<MTLComputePipelineState> _sharpnessScoreCalculatorShaderFloat[4];
    id<MTLComputePipelineState> _sharpnessScoreCalculatorShaderUInt[4];
    id<MTLComputePipelineState> _sumScoreStep1Shader;
    id<MTLComputePipelineState> _sumScoreStep2Shader;
    int _counter;
}

@property (retain, nonatomic) FigMetalAllocator *allocator;

+ (id)externalMemoryDescriptorForConfiguration:(id)a0;
+ (unsigned long long)bytesRequiredForProcessingImageWith:(int)a0 height:(int)a1;

- (void).cxx_destruct;
- (int)calculateFromPixelBuffer:(struct __CVBuffer { } *)a0 toImageScore:(float *)a1 andFromRoi:(id)a2 toRoiScore:(id)a3 sourceComponent:(int)a4;
- (id)initWithOptionalCommandQueue:(id)a0 externalMemoryResource:(id)a1 kernelWeights:(id)a2;
- (int)_calculateFromTexture:(id)a0 toImageScore:(float *)a1 andFromRoi:(id)a2 toRoiScore:(id)a3 sourceComponent:(int)a4 binning:(int)a5 firstPixel:(int)a6;
- (int)_computeSharpnessScore:(id)a0 outputTexture:(id)a1 sourceComponent:(int)a2 binning:(int)a3 firstPixel:(int)a4;
- (void)_getDefaultConvolutionWeights:(float *)a0;
- (int)_sumScoreForRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiId:(int)a1 scoreTexture:(id)a2 output:(float *)a3;
- (int)calculateFromRawTexture:(id)a0 toImageScore:(float *)a1 andFromRoi:(id)a2 toRoiScore:(id)a3 sourceComponent:(int)a4 isQuadra:(BOOL)a5 firstPixel:(int)a6;
- (int)calculateFromTexture:(id)a0 toImageScore:(float *)a1 andFromRoi:(id)a2 toRoiScore:(id)a3 sourceComponent:(int)a4;
- (id)computePipelineFor:(unsigned long long)a0 sourceComponent:(int)a1;
- (id)initWithOptionalCommandQueue:(id)a0 kernelWeights:(id)a1;

@end

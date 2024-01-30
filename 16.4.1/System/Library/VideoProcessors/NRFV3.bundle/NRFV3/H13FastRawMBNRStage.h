@class H13FastRawMBNRShaders, FigMetalContext, NSString, SoftISPStaticParameters;

@interface H13FastRawMBNRStage : NSObject <SoftISPStage>

@property (readonly, nonatomic) H13FastRawMBNRShaders *shaders;
@property (readonly, nonatomic) FigMetalContext *metal;
@property (readonly, nonatomic) SoftISPStaticParameters *staticParameters;
@property (readonly, nonatomic) unsigned int outputDownscaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (union { struct { unsigned int x0; unsigned int x1; } x0; })auxiliaryPixelBufferSizeForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (unsigned int)auxiliaryPixelFormatForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 outputCompressionLevel:(int)a2;
- (int)bypassRawMBNRWithArgs:(id)a0;
- (unsigned long long)bytesRequiredForConfig:(id)a0;
- (id)configForPrepareDescriptor:(id)a0 outputCompressionLevel:(int)a1;
- (id)createArgsWithConfig:(id)a0 bounds:(id)a1 inputFrame:(id)a2 outputFrame:(id)a3;
- (id)createIntermediateMetalDeviceTexture:(id)a0 withPixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)createIntermediateMetalTexture:(id)a0 withPixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (int)generatePyramidFromTexture:(id)a0 outputPyramid:(id *)a1 startLevel:(int)a2 numLevels:(int)a3 pyramidName:(id)a4;
- (int)getNoiseMapForInputTexture:(id)a0 bayerNoise:(id *)a1 inputFrame:(id)a2 outputFrame:(id)a3 bounds:(id)a4 h13FastConfig:(id)a5 lscGainsTex:(id)a6;
- (id)initWithMetalContext:(id)a0 staticParameters:(id)a1;
- (unsigned int)outputPixelFormatForInputPixelFormat:(unsigned int)a0 outputCompressionLevel:(int)a1;
- (int)runRawMBNROnInputTexture:(id)a0 outputTexture:(id *)a1 bayerNoise:(id)a2 inputFrame:(id)a3 outputFrame:(id)a4 bounds:(id)a5 h13FastConfig:(id)a6 lscGainsTex:(id)a7;
- (int)runWithArgs:(id)a0;
- (int)validateInputFrame:(id)a0 config:(id)a1;

@end

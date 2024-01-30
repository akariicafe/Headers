@class H13FastRawScaleShaders, FigMetalContext, NSString, SoftISPStaticParameters;
@protocol MTLBuffer;

@interface H13FastRawScaleStage : NSObject <SoftISPStage> {
    id<MTLBuffer> _8to12ExpansionLUT;
    id<MTLBuffer> _8to10ExpansionLUT;
}

@property (readonly, nonatomic) H13FastRawScaleShaders *shaders;
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
- (unsigned long long)bytesRequiredForConfig:(id)a0;
- (id)configForPrepareDescriptor:(id)a0 outputCompressionLevel:(int)a1;
- (id)createArgsWithConfig:(id)a0 bounds:(id)a1 inputFrame:(id)a2 outputFrame:(id)a3;
- (id)createIntermediateMetalTexture:(id)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)initWithMetalContext:(id)a0 staticParameters:(id)a1;
- (unsigned int)outputPixelFormatForInputPixelFormat:(unsigned int)a0 outputCompressionLevel:(int)a1;
- (int)runCARWithArgs:(struct { float x0; float x1[7]; struct { float x0[7]; float x1[7]; } x2; struct { float x0[7]; float x1[7]; } x3; } *)a0 targetTexture:(id)a1;
- (int)runPDCWithArgs:(id)a0 inputTex:(id)a1 outputTex:(id)a2;
- (int)runQuadraPDCWithArgs:(id)a0 inputTex:(id)a1 outputTex:(id)a2;
- (int)runWithArgs:(id)a0;
- (int)validateInputFrame:(id)a0 config:(id)a1;

@end

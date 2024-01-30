@class SoftISPStaticParameters, FigMetalContext, H13FastBayerProcShaders, H13FastAWB, NSString, CMIWarpStage;
@protocol MTLTexture;

@interface H13FastBayerProcStage : NSObject <SoftISPStage>

@property (readonly, nonatomic) H13FastBayerProcShaders *shaders;
@property union { unsigned long long frameID; struct { unsigned short captureIndex; unsigned short sensorIndex; BOOL isSIFR; BOOL isPB; char timeMachineIndex; char bracketedCaptureIndex; } ; } sifrFrameId;
@property (retain) id<MTLTexture> sifrThumbnailTexture;
@property (readonly, nonatomic) H13FastAWB *awb;
@property (readonly, nonatomic) CMIWarpStage *warpStage;
@property (readonly, nonatomic) FigMetalContext *metal;
@property (readonly, nonatomic) SoftISPStaticParameters *staticParameters;
@property (readonly, nonatomic) unsigned int outputDownscaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)runSSCWithArgs:(struct SSCConfig { id x0; int x1; } *)a0 inputTexture:(id)a1 outputMetadata:(id)a2 firstPixel:(int)a3 isQuadra:(BOOL)a4;
- (int)_getWarpConfigForInputFrame:(id)a0 bounds:(id)a1 warpConfig:(struct CMIWarpConfig { } *)a2;
- (BOOL)_shouldApplyGDC:(id)a0;
- (union { struct { unsigned int x0; unsigned int x1; } x0; })auxiliaryPixelBufferSizeForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (unsigned int)auxiliaryPixelFormatForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 outputCompressionLevel:(int)a2;
- (id)auxiliaryPixelFormatsForInputPixelFormat:(unsigned int)a0 outputCompressionLevel:(int)a1;
- (unsigned long long)bytesRequiredForConfig:(id)a0;
- (id)configForPrepareDescriptor:(id)a0 outputCompressionLevel:(int)a1;
- (id)createArgsWithConfig:(id)a0 bounds:(id)a1 inputFrame:(id)a2 outputFrame:(id)a3;
- (id)createIntermediateMetalTexture:(id)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 compressed:(BOOL)a4;
- (id)createThumbnailTextureArray:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (int)dispatchHRCreateHuemapThumbnailsWithInputTexture:(id)a0 outputTexture:(id)a1 config:(struct HRConfig { struct { int x0; int x1; unsigned short x2; unsigned short x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x0; unsigned short x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } x11; } *)a2 args:(id)a3;
- (int)dispatchHRDGnuCorrectionWithInputTexture:(id)a0 outputTextures:(struct { id x0; id x1; } *)a1 lscMetadata:(struct { struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } x0; id x1; } *)a2 config:(struct HRDConfig { int x0; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3; float x4; float x5; float x6; float x7[5]; float x8; float x9; float x10[7]; float x11; float x12; float x13[5]; float x14; float x15; float x16[7]; struct { float x0; float x1; } x17; struct { float x0; float x1; } x18; } *)a3 args:(id)a4 isQuadra:(BOOL)a5 gnuEnabled:(BOOL)a6;
- (int)dispatchHRDRedBlueFilterWithTextures:(struct { id x0; id x1; id x2; id x3; } *)a0 config:(struct HRDConfig { int x0; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3; float x4; float x5; float x6; float x7[5]; float x8; float x9; float x10[7]; float x11; float x12; float x13[5]; float x14; float x15; float x16[7]; struct { float x0; float x1; } x17; struct { float x0; float x1; } x18; } *)a1 args:(id)a2 isQuadra:(BOOL)a3;
- (int)dispatchHRPreprocessDSLUTWithInputTexture:(id)a0 outputTexture:(id)a1 config:(struct HRConfig { struct { int x0; int x1; unsigned short x2; unsigned short x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x0; unsigned short x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } x11; } *)a2 args:(id)a3;
- (int)dispatchHRWithInputTextures:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; } *)a0 outputTexture:(id)a1 hrdConfig:(struct HRDConfig { int x0; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3; float x4; float x5; float x6; float x7[5]; float x8; float x9; float x10[7]; float x11; float x12; float x13[5]; float x14; float x15; float x16[7]; struct { float x0; float x1; } x17; struct { float x0; float x1; } x18; } *)a2 hrConfig:(struct HRConfig { struct { int x0; int x1; unsigned short x2; unsigned short x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x0; unsigned short x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } x11; } *)a3 args:(id)a4 isQuadra:(BOOL)a5;
- (int)dispatchHuemapGenerationInputTexture:(id)a0 outputTexture:(id)a1 config:(struct FrontEndProcessorThumbnailConfig { struct Config { BOOL x0; BOOL x1; int x2; } x0; unsigned short x1; float x2; float x3; float x4; float x5; unsigned short x6; float x7; } *)a2 args:(id)a3 isQuadra:(BOOL)a4;
- (int)dispatchHuemapMotionCompensationWithSifr:(id)a0 ev0:(id)a1 outputTexture:(id)a2 config:(struct HuemapMotionCompensationConfig { float x0; float x1; float x2; float x3; BOOL x4; BOOL x5; BOOL x6; unsigned short x7; float x8; unsigned short x9; float x10; float x11; float x12; float x13; float x14; unsigned short x15; } *)a3 args:(id)a4;
- (int)dispatchHuemapWithInputTexture:(id)a0 outputTexture:(id)a1 config:(struct HuemapConfig { float x0; float x1; float x2; float x3; BOOL x4; BOOL x5; BOOL x6; unsigned short x7; } *)a2 args:(id)a3;
- (id)initWithMetalContext:(id)a0 staticParameters:(id)a1;
- (unsigned int)outputPixelFormatForInputPixelFormat:(unsigned int)a0 outputCompressionLevel:(int)a1;
- (int)prepareLSCMetadata:(struct { struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } x0; id x1; } *)a0 withArgs:(id)a1 forAWB:(BOOL)a2;
- (int)processPreHRWithConfig:(SEL)a0 inputTex:(id)a1 outputTex:(id)a2 lscMetadata:(id)a3 hrEnabled:(struct { struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } x0; id x1; } *)a4 outputFrame:(BOOL)a5 awbComputedGains:(id)a6;
- (int)runAWBWithArgs:(id)a0 awbComputedGOCGains:(void *)a1 updatedMetadata:(id)a2 lscGainsTex:(id)a3 inputTex:(id)a4 auxEnabled:(unsigned char)a5 hrEnabled:(unsigned char)a6;
- (int)runDraftDemosaicWithArgs:(id)a0 inputTexture:(id)a1 outputFrame:(id)a2 isQuadra:(BOOL)a3;
- (int)runHRWithInputTextures:(SEL)a0 outputTexture:(struct { id x0; id x1; id x2; } *)a1 outputMetadata:(id)a2 isFinalOutput:(id)a3 isQuadra:(BOOL)a4 gnuEnabled:(BOOL)a5 args:(BOOL)a6 lscMetadata:(id)a7 awbComputedGains:(struct { struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } x0; id x1; } *)a8;
- (int)runHuemapGenerateInputThumbnailWithInputTexture:(SEL)a0 outputTexture:(id)a1 lscConfig:(id *)a2 isSifr:(struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } *)a3 args:(BOOL)a4 awbComputedGains:(id)a5 isQuadra:(BOOL)a6;
- (int)runHuemapGenerationWithInputTexture:(SEL)a0 outputTexture:(id)a1 lscConfig:(id *)a2 args:(struct LSCConfig { unsigned short x0; unsigned short x1; float x2; unsigned int x3; BOOL x4; union { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; } x5; union { void /* unknown type, empty encoding */ x0[4]; struct { } x1; } x6; void /* unknown type, empty encoding */ x7[4]; } *)a3 awbComputedGains:(id)a4;
- (int)runHuemapMotionCompensationWithSifrTexture:(id)a0 ev0ThumbnailTexture:(id)a1 outputTexture:(id *)a2 args:(id)a3;
- (int)runWithArgs:(id)a0;
- (BOOL)shouldRunDraftDemosaic:(id)a0;
- (BOOL)sifrFrameIdMatchesFrameId:(union { unsigned long long x0; struct { unsigned short x0; unsigned short x1; BOOL x2; BOOL x3; char x4; char x5; } x1; })a0;
- (int)validateInputFrame:(id)a0 config:(id)a1;

@end

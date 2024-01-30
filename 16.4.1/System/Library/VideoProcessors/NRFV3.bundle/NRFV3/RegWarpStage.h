@class CMIWarpStage, NSString, FigMetalContext, RegWarpPP, RegWarpShaders, SoftISPStaticParameters;

@interface RegWarpStage : NSObject <SoftISPStage> {
    RegWarpShaders *_shaders;
    struct __CVBuffer { } *_regWarpInput;
    BOOL _referenceFrameProcessed;
    unsigned long long _referenceFrameUniqueID;
    struct { unsigned int numThreads; unsigned int numHorizontalBlocks; unsigned int numVerticalBlocks; unsigned int nccSearchRadius; unsigned int nccPatchRadius; unsigned int maxSearchRadius; unsigned int internalBorderSize; float ransacAdaptiveThresholdFactor; float ransacMinMatchingScoreAccepted; unsigned int maxNumberOfPyramidLevels; BOOL skipInitialDownsample; BOOL performHistEq; } _regWarpPPConfig;
    RegWarpPP *_regWarpPP;
    CMIWarpStage *_warpStage;
    struct { void /* unknown type, empty encoding */ pixelPitch; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; } _referenceGDCParams;
    int _gdcMode;
}

@property (readonly, nonatomic) FigMetalContext *metal;
@property (readonly, nonatomic) SoftISPStaticParameters *staticParameters;
@property (readonly, nonatomic) unsigned int outputDownscaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)allocateResources:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (union { struct { unsigned int x0; unsigned int x1; } x0; })auxiliaryPixelBufferSizeForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (unsigned int)auxiliaryPixelFormatForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 outputCompressionLevel:(int)a2;
- (unsigned long long)bytesRequiredForConfig:(id)a0;
- (id)configForPrepareDescriptor:(id)a0 outputCompressionLevel:(int)a1;
- (id)createArgsWithConfig:(id)a0 bounds:(id)a1 inputFrame:(id)a2 outputFrame:(id)a3;
- (id)createMetalTexture:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormat:(unsigned long long)a3;
- (void)downscaleRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)initWithMetalContext:(id)a0 staticParameters:(id)a1;
- (unsigned int)outputPixelFormatForInputPixelFormat:(unsigned int)a0 outputCompressionLevel:(int)a1;
- (int)runWithArgs:(id)a0;
- (int)setReferenceFrameByUniqueID:(unsigned long long)a0;
- (int)validateInputFrame:(id)a0 config:(id)a1;

@end

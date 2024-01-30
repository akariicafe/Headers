@class FigMetalAllocator, NSString, FigMetalContext, MPSImageHistogramEqualization, FigRegWarpPPGPUShaders, MPSImageHistogram;
@protocol MTLTexture, MTLBuffer;

@interface FigRegWarpPPGPU : NSObject <CMIRegWarp> {
    FigMetalContext *_metal;
    FigRegWarpPPGPUShaders *_shaders;
    struct { unsigned int w; unsigned int h; } _pyramidLevelsDim[8];
    id<MTLTexture> _referencePyramidImage[8];
    id<MTLTexture> _nonReferencePyramidImage[8];
    id<MTLBuffer> _referencePyramidCorners[8];
    id<MTLBuffer> _nonReferencePyramidCorners[8];
    struct { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } _roi;
    struct { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } _pyramidLevelsRoi[8];
    struct { float normX[2]; float normY[2]; float inverseX[2]; float inverseY[2]; } _normCoefs[8];
    float _inlierThreshold[8];
    struct { void /* unknown type, empty encoding */ pixelPitch; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; } _referenceGDCParams;
    struct { void /* unknown type, empty encoding */ pixelPitch; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; } _nonReferenceGDCParams;
    struct { unsigned long long numberOfHistogramEntries; BOOL histogramForAlpha; void /* unknown type, empty encoding */ minPixelValue; void /* unknown type, empty encoding */ maxPixelValue; } _mpsHistCfg;
    MPSImageHistogram *_mpsHist;
    MPSImageHistogramEqualization *_mpsHistEq;
    struct { struct { unsigned int w; unsigned int h; } dims; struct { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } roi; struct { float normX[2]; float normY[2]; float inverseX[2]; float inverseY[2]; } normCoef; float minNCCThreshold; short minCornerResponseThreshold; struct { void /* unknown type, empty encoding */ pixelPitch; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; } refGDCParams; struct { void /* unknown type, empty encoding */ pixelPitch; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; } nrfGDCParams; BOOL applyGDC; } _cornerMatchingParams;
    unsigned int _numPyrLevels;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    BOOL _skipInitialDownsample;
    BOOL _performHistEq;
    BOOL _allocateBuffersWithAllocator;
    BOOL _isShaderHarvesting;
}

@property (retain, nonatomic) FigMetalAllocator *allocator;
@property (nonatomic) BOOL applyGDC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)prewarmShaders:(id)a0;

- (void)releaseResources;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_releaseBuffer:(id *)a0;
- (int)_setDefaultCornerMatchingParams;
- (int)_constructPyramid:(id *)a0 withTexture:(id)a1 mapping:(struct { unsigned char x0[256]; } *)a2 level0Only:(BOOL)a3;
- (int)_convertTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 toGPUTransform:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a1;
- (int)_detectCorners:(id)a0 roi:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a1 corners:(id)a2 pyrLevel:(unsigned int)a3;
- (id)_newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 label:(id)a2;
- (int)_setNormCoefs:(struct { float x0[2]; float x1[2]; float x2[2]; float x3[2]; } *)a0 width:(unsigned int)a1 height:(unsigned int)a2;
- (int)_updatePyramidRoi;
- (int)_verifyInputPixelFormat:(unsigned long long)a0;
- (int)allocateResources:(unsigned int)a0 imageHeight:(unsigned int)a1 imageFormat:(unsigned int)a2 externalMemory:(void *)a3 externalMemorySize:(unsigned int)a4;
- (int)allocateResourcesWithWidth:(unsigned int)a0 height:(unsigned int)a1;
- (id)initWithOptionalCommandQueue:(id)a0 config:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; unsigned int x9; BOOL x10; BOOL x11; } *)a1;
- (int)processNonReference:(struct __CVBuffer { } *)a0 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1 outputTransform:(struct { float x0[9]; } *)a2;
- (int)processNonReference:(struct __CVBuffer { } *)a0 outputTransform:(struct { float x0[9]; } *)a1;
- (int)processNonReferenceTexture:(id)a0 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1 outputTransform:(struct { float x0[9]; } *)a2;
- (int)processNonReferenceTexture:(id)a0 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1 outputTransform:(struct { float x0[9]; } *)a2 mapping:(struct { unsigned char x0[256]; } *)a3;
- (int)processNonReferenceTexture:(id)a0 outputTransform:(struct { float x0[9]; } *)a1;
- (int)processReference:(struct __CVBuffer { } *)a0 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 numKeypoints:(unsigned int *)a3;
- (int)processReference:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 numKeypoints:(unsigned int *)a2;
- (int)processReferenceTexture:(id)a0 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 numKeypoints:(unsigned int *)a3;
- (int)processReferenceTexture:(id)a0 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 numKeypoints:(unsigned int *)a3 mapping:(struct { unsigned char x0[256]; } *)a4;
- (int)processReferenceTexture:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 numKeypoints:(unsigned int *)a2;

@end

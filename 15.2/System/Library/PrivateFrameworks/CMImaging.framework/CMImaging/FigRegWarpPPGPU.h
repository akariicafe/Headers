@class FigRegWarpPPGPUShaders, FigMetalContext;
@protocol MTLTexture, MTLBuffer;

@interface FigRegWarpPPGPU : NSObject {
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
    struct { struct { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } roi; struct { float normX[2]; float normY[2]; float inverseX[2]; float inverseY[2]; } normCoef; float minNCCThreshold; short minCornerResponseThreshold; } _cornerMatchingParams;
    unsigned int _numPyrLevels;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    BOOL _skipInitialDownsample;
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)allocateResourcesWithWidth:(unsigned int)a0 height:(unsigned int)a1;
- (int)_setNormCoefs:(struct { float x0[2]; float x1[2]; float x2[2]; float x3[2]; } *)a0 width:(unsigned int)a1 height:(unsigned int)a2;
- (int)_setDefaultCornerMatchingParams;
- (int)_verifyInputPixelFormat:(unsigned long long)a0;
- (int)_updatePyramidRoi;
- (int)_constructPyramid:(id *)a0 withTexture:(id)a1 mapping:(struct { unsigned char x0[256]; } *)a2 level0Only:(BOOL)a3;
- (int)_detectCorners:(id)a0 roi:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a1 corners:(id)a2;
- (int)_convertTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 toGPUTransform:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a1;
- (id)initWithMetalContext:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 skipInitialDownsample:(BOOL)a3;
- (int)processReference:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 numKeypoints:(unsigned int *)a2 mapping:(struct { unsigned char x0[256]; } *)a3;
- (int)processNonReference:(id)a0 outputTransform:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a1 mapping:(struct { unsigned char x0[256]; } *)a2;

@end

@class RegDenseShaders, FigMetalContext, PyramidStorage, RegPyrFusionResources, RegPyrFusion;
@protocol MTLTexture, MTLBuffer;

@interface RegDense : NSObject {
    PyramidStorage *_pyrConfidence;
    FigMetalContext *_metal;
    RegDenseShaders *_shaders;
    RegPyrFusion *_sfRegPyr;
    PyramidStorage *_refPyramid;
    PyramidStorage *_nonRefPyramid;
    RegPyrFusionResources *_sfRegPyrBuffers;
    id<MTLBuffer> _homographyMatrixBuffer;
    id<MTLTexture> _blendingWeight;
}

- (void)releaseResources;
- (void)dealloc;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (int)allocateResourcesForWidth:(unsigned long long)a0 height:(unsigned long long)a1 scratchBuffer:(id)a2;
- (int)blendingWeightUsing:(id)a0 and:(id)a1 homography:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 relativeBrightness:(float)a3;
- (unsigned long long)computeBufferOffset:(unsigned long long *)a0 width:(int)a1 height:(int)a2 format:(unsigned long long)a3;
- (unsigned long long)computeScratchBufferOffsets;
- (int)copy420Buffer:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;
- (int)pyramidConfidence:(id)a0 input:(id)a1;
- (int)runWithAmbnrBuffers:(id)a0 ambnrStage:(id)a1 referenceFrameIndex:(int)a2 nonReferenceFrameIndex:(int)a3 homography:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 scratchBuffer:(struct __CVBuffer { } *)a5 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a6 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a7;
- (int)warpFrame:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1 homography:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a3;

@end

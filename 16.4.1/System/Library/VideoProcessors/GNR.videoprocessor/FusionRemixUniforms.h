@protocol MTLBuffer;

@interface FusionRemixUniforms : NSObject {
    id<MTLBuffer> _fragUniBufSBP;
    id<MTLBuffer> _vertexUniBufSBP;
    id<MTLBuffer> _fragUniBufInt;
    struct FusionRemixStageUniformsSBP { struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; struct { float x0; float x1; } x10; struct { float x0; float x1; } x11; float x12[4]; struct BilateralGridUniforms { int x0; float x1; float x2; float x3; int x4; struct BilateralSolverConfiguration { float x0; float x1; float x2; float x3; } x5; } x13; float x14; float x15; float x16; BOOL x17; } *_ptr2FragBufSBP;
    struct FusionRemixStageUniformsVertex { struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } x0; int x1; float x2; float x3; int x4; } *_ptr2VertBufSBP;
    struct FusionRemixStageUniformsInternal { int x0; float x1; void /* unknown type, empty encoding */ x2[4]; int x3; int x4; BOOL x5; } *_ptr2FragBufInt;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end

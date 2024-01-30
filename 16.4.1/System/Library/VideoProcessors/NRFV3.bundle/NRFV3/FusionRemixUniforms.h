@protocol MTLBuffer;

@interface FusionRemixUniforms : NSObject {
    id<MTLBuffer> _fragUniBufSBP;
    id<MTLBuffer> _vertexUniBufSBP;
    id<MTLBuffer> _fragUniBufInt;
    struct FusionRemixStageUniformsIBP { struct FusionConfiguration { struct { void /* unknown type, empty encoding */ x0[3]; } x0[5]; BOOL x1; struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } x2[5]; int x3; int x4; int x5; int x6; int x7; int x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; int x13; BOOL x14; BOOL x15; BOOL x16; } x0; float x1; float x2; float x3; float x4; float x5; float x6; struct FusionRemixStageSparseDensePair { float x0; float x1; } x7; struct FusionRemixStageSparseDensePair { float x0; float x1; } x8; struct NoiseModel { float x0; float x1; float x2; } x9; float x10[4]; float x11[4]; float x12[4]; float x13; float x14; float x15[4]; struct PatchBasedFusionParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x16; float x17; } *_ptr2FragBufSBP;
    struct FusionRemixStageUniformsVertex { struct FusionConfiguration { struct { void /* unknown type, empty encoding */ x0[3]; } x0[5]; BOOL x1; struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } x2[5]; int x3; int x4; int x5; int x6; int x7; int x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; int x13; BOOL x14; BOOL x15; BOOL x16; } x0; float x1; float x2; int x3; } *_ptr2VertBufSBP;
    struct FusionRemixStageUniformsInternal { int x0; int x1; float x2; float x3; float x4; BOOL x5; } *_ptr2FragBufInt;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0 heap:(id)a1;

@end

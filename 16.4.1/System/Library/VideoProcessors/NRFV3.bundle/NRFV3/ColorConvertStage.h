@class ColorConvertStageShaders, FigMetalContext;

@interface ColorConvertStage : NSObject {
    FigMetalContext *_metal;
    ColorConvertStageShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)_convertColor:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a0 lumaPedestal:(float)a1 inputLuma:(id)a2 inputChroma:(id)a3 outputLuma:(id)a4 outputChroma:(id)a5;
- (int)convertColor:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a0 inputLuma:(id)a1 inputChroma:(id)a2 outputLuma:(id)a3 outputChroma:(id)a4;
- (int)convertColor:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a0 inputYCbCr:(id)a1 outputLuma:(id)a2 outputChroma:(id)a3;
- (int)extractLinearBufferWithLumaInput:(id)a0 chromaInput:(id)a1 inputIsLinear:(BOOL)a2 removeChromaBias:(BOOL)a3 lumaPedestal:(float)a4 exposureParams:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } *)a5 ccm:(struct { void /* unknown type, empty encoding */ x0[3]; })a6 output:(struct __CVBuffer { } *)a7;

@end

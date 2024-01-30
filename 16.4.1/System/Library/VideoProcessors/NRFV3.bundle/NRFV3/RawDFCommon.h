@class RawDFCommonShaders, FigMetalContext;

@interface RawDFCommon : NSObject {
    FigMetalContext *_metal;
    RawDFCommonShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;
+ (id)packHomography:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0;
+ (float)calculateReadNoise:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } *)a0;
+ (int)fillRawNoiseModelParameters:(struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } *)a0 exposureParams:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } *)a1;
+ (id)getLSCGainsWithFrame:(id)a0 lscGainsPlist:(id)a1;
+ (void /* unknown type, empty encoding */)getRegwarpResourceSetupDimensionsForInputWidth:(int)a0 height:(int)a1;
+ (void /* unknown type, empty encoding */)getRegwarpSurfaceDimensionsForInputWidth:(int)a0 height:(int)a1;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })unpackHomography:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end

@interface DeepFusionCommon : NSObject

+ (int)networkVersion;
+ (float)calculateReadNoise:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } *)a0;
+ (BOOL)fillRawNoiseModelParameters:(struct DeepFusionRawNoiseModelParameters { float x0; float x1; float x2; float x3; unsigned char x4; float x5; } *)a0 exposureParams:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } *)a1;
+ (float)getLumaPedestalWithProperties:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } *)a0 plistSource:(id)a1;
+ (int)intermediateVersion;

@end

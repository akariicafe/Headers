@class FigMetalContext;

@interface LTMComputeProxy : NSObject <LTMAlgorithmBase> {
    struct LTMDriver { void /* function */ **x0; struct sLtmComputeInput { float x0[3072]; float x1[64]; float x2[1024]; float x3[48]; float x4[48]; float x5[64]; float x6[64]; float x7[65]; float x8[48]; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; unsigned short x21; float x22[9]; float x23[192]; float x24; float x25; float x26; float x27[48]; } x1; struct sLtmComputeMeta { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; int x5; BOOL x6; int x7; float x8; } x2; struct sLtmComputeOutput { float x0[3120]; float x1[65]; float x2[257]; float x3[257]; float x4[5184]; float x5[257]; float x6; unsigned long long x7; float x8; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 3; } x3; int x4; struct LTMCompute *x5; BOOL x6; } *_ltmDriver;
    FigMetalContext *_metalContext;
}

@property (nonatomic) struct sCLRProcHITHStat { unsigned int x0; unsigned short x1[6]; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned char x14; unsigned short x15; unsigned int x16; void *x17; unsigned int x18; unsigned int x19; void *x20; unsigned int x21; unsigned int x22; void *x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; } *procHITHStat;
@property (nonatomic) struct sRefDriverInputs { BOOL x0; unsigned short x1; unsigned int x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x4; float x5; float x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned int x11; float x12; unsigned short x13; BOOL x14; unsigned char x15; unsigned char x16; unsigned int x17; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x18; float x19; BOOL x20; unsigned char x21; BOOL x22; BOOL x23; float x24; float x25; float x26; float x27; unsigned short x28[512]; float x29; struct sBTRect { int x0; int x1; unsigned int x2; unsigned int x3; } x30; struct sAWBColorCorrectionMatrix_local { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0[9]; } x31; BOOL x32; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x1; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; } x33; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x1; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; } x34; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x1; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; } x35; unsigned int x36; unsigned char x37; struct sFaceInfo { struct sCIspFDRect { int x0; int x1; unsigned int x2; unsigned int x3; } x0[10]; unsigned int x1; } x38; } *driverInputs;
@property (readonly, nonatomic) float *LTC;
@property (readonly, nonatomic) float *globalLUT;
@property (readonly, nonatomic) float *rgbToneCurve;
@property (nonatomic) float *spatialCCM;

- (int)allocateResources;
- (void)dealloc;
- (int)purgeResources;
- (int)process;
- (id)initWithMetalContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)prewarmShaders;

@end

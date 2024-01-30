@interface H13FastRawScaleConfig : SoftISPConfig

@property (nonatomic) BOOL isCAREnabled;
@property (nonatomic) BOOL shouldMatchGenregs;

- (int)configureFromRegistersPDCArgs:(id)a0 forInputFrame:(id)a1 metalCtx:(id)a2 pdpConfig:(const struct { struct { BOOL x0; unsigned char x1; } x0[16]; BOOL x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *)a3;
- (int)_createDetectionLutTexsWithArgs:(id)a0 metalCtx:(id)a1;
- (int)_createFlatLUTTexWithData:(const unsigned short *)a0 lutSize:(unsigned long long)a1 metalCtx:(id)a2 destArgs:(id)a3;
- (int)_createStaticDefectTableWithTable:(const struct { unsigned short x0; struct { unsigned short x0; unsigned short x1; } x1[0]; } *)a0 metalCtx:(id)a1 destArgs:(id)a2 quadraBinningFactor:(unsigned int)a3;
- (int)_createStaticDefectTableWithTableForQuadra:(const struct { unsigned short x0; struct { unsigned short x0; unsigned short x1; } x1[0]; } *)a0 metalCtx:(id)a1 destArgs:(id)a2;
- (int)_createXtalkTexWithData:(id)a0 metalCtx:(id)a1 pdcArgs:(id)a2 pdcXtalkConfig:(struct { float x0; unsigned char x1; } *)a3;
- (int)_fillPDPCorrectionConfig:(struct { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; } x1; } *)a0 gainAdj:(struct { BOOL x0; struct { float x0; float x1; float x2; float x3; } x1[4]; } *)a1 pdpConfig:(const struct { struct { BOOL x0; unsigned char x1; } x0[16]; BOOL x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *)a2 gocConfig:(const struct { BOOL x0; unsigned char x1; } *)a3;
- (int)_fillProcessFocusPixelsConfigWithPDPConfig:(const struct { struct { BOOL x0; unsigned char x1; } x0[16]; BOOL x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *)a0 args:(id)a1 gainAdj:(const struct { BOOL x0; struct { float x0; float x1; float x2; float x3; } x1[4]; } *)a2;
- (int)configureFromMetadataPDCArgs:(id)a0 forInputFrame:(id)a1 metalCtx:(id)a2 pdpConfig:(const struct { struct { BOOL x0; unsigned char x1; } x0[16]; BOOL x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *)a3;
- (int)configurePDCArgs:(id)a0 forInputFrame:(id)a1 bounds:(id)a2 metalCtx:(id)a3 pdpConfig:(const struct { struct { BOOL x0; unsigned char x1; } x0[16]; BOOL x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *)a4;
- (int)generateGOCConfigFromInputFrameMetadata:(id)a0 toGocConfig:(struct { BOOL x0; unsigned char x1; } *)a1;
- (void)generateNoiseModelsFromBinningFactor:(float)a0 NoiseModel:(id)a1 AnalogGain:(float)a2 DigitalGain:(float)a3 PreGain:(unsigned int)a4 forFocusPixels:(float[33])a5 forDefects:(float[33])a6;
- (int)generatePDPConfigFromInputFrameMetadata:(id)a0 bounds:(id)a1 toPdpConfig:(struct { struct { BOOL x0; unsigned char x1; } x0[16]; BOOL x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *)a2;
- (int)getBLCGOCConfigForInputFrame:(id)a0 gocConfig:(struct { BOOL x0; unsigned char x1; } *)a1;
- (int)getCARConfigForInputFrame:(id)a0 bounds:(id)a1 carConfig:(struct { float x0; float x1[7]; struct { float x0[7]; float x1[7]; } x2; struct { float x0[7]; float x1[7]; } x3; } *)a2;
- (int)getCARConfigForInputFrameFromMetadata:(id)a0 bounds:(id)a1 carConfig:(struct { float x0; float x1[7]; struct { float x0[7]; float x1[7]; } x2; struct { float x0[7]; float x1[7]; } x3; } *)a2;
- (int)getCARConfigForInputFrameFromRegistersDict:(id)a0 bounds:(id)a1 carConfig:(struct { float x0; float x1[7]; struct { float x0[7]; float x1[7]; } x2; struct { float x0[7]; float x1[7]; } x3; } *)a2;
- (int)getDMAInputConfigForInputFrame:(id)a0 dmaInputConfig:(struct { BOOL x0; BOOL x1; BOOL x2; unsigned char x3; } *)a1;
- (int)getPDPConfigForInputFrame:(id)a0 bounds:(id)a1 pdpConfig:(struct { struct { BOOL x0; unsigned char x1; } x0[16]; BOOL x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *)a2;
- (int)getPDPGainsForInputFrame:(id)a0 pdpGainsTex:(id)a1;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputPixelFormat:(unsigned int)a2;
- (float)pdcInterpX:(float)a0 fromRangeStartingAt:(float)a1 endingAt:(float)a2 toRangeStartingAt:(float)a3 endingAt:(float)a4;

@end

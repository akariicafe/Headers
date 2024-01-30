@interface H13FastRawMBNRConfig : SoftISPConfig

- (int)getBayerMBNRSettingsForInputFrame:(id)a0 rawMBNRConfig:(struct { float x0; float x1; unsigned int x2; BOOL x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a1 totalGain:(float)a2 band:(int)a3;
- (int)getChromaMBNRSettingsForInputFrame:(id)a0 rawMBNRConfig:(struct { float x0; float x1; unsigned int x2; BOOL x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a1 totalGain:(float)a2 band:(int)a3;
- (int)getEnabledForInputFrame:(id)a0 isEnabled:(BOOL *)a1;
- (int)getLSCGainsForInputFrame:(id)a0 lscConfig:(struct LSCConfig { unsigned short x0; unsigned short x1; } *)a1 lscGainsTex:(id)a2;
- (int)getLSCGridDimensions:(struct LSCConfig { unsigned short x0; unsigned short x1; } *)a0 portType:(id)a1;
- (int)getMBNRSettingsForInputFrame:(id)a0 rawMBNRConfig:(struct { float x0; float x1; unsigned int x2; BOOL x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a1 totalGain:(float)a2;
- (int)getNoiseModelForInputFrame:(id)a0 outputFrame:(id)a1 noiseConfig:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; } *)a2;
- (int)getRawMBNRConfigForInputFrame:(id)a0 bounds:(id)a1 rawMBNRConfig:(struct { float x0; float x1; unsigned int x2; BOOL x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a2;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1;
- (int)updateNoiseModelForInputFrame:(id)a0 noiseConfig:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; } *)a1 totalGain:(float)a2 band:(int)a3;
- (int)updateRawMBNRConfigForInputFrame:(id)a0 bounds:(id)a1 band:(unsigned short)a2 rawMBNRConfig:(struct { float x0; float x1; unsigned int x2; BOOL x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a3;

@end

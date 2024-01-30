@interface MSRHDRProcessingT2 : MSRHDRProcessingT1

- (id)init;
- (void)setupMSRPolynomialTableForHDR10;
- (void)dumpMmrConfig;
- (unsigned int)polynomialTableScale;
- (void)setupHardwareConfigUnit;
- (void)setupMSRMappingTableWithMetadata:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12[3]; unsigned int x13[3][18]; unsigned int x14[1][1][3][9]; unsigned int x15[1][1][3][9]; unsigned int x16[1][1][3][9]; unsigned int x17[1][1][3][9]; unsigned int x18[1][1][3][9]; int x19[1][1][3][9][3]; unsigned int x20[1][1][3][9][3]; long long x21[1][1][3][9][6]; float x22[1][1][3][9][6]; unsigned int x23[1][1][3][9]; int x24[1][1][3][9]; unsigned int x25[1][1][3][9]; int x26[1][1][3][9][4][7]; unsigned int x27[1][1][3][9][4][7]; long long x28[1][1][3][9][4][7]; float x29[1][1][3][9][4][7]; int x30[1][1][3][9][6]; unsigned int x31[1][1][3][9][6]; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35[9]; unsigned int x36[1][1][9][3]; unsigned int x37[1][1][9][3]; unsigned int x38[1][1][9][3]; long long x39[1][1][9][3]; unsigned int x40[1][1][9][3]; unsigned int x41[1][1][9][3]; long long x42[1][1][9][3]; unsigned int x43[1][1][9][3]; unsigned int x44[1][1][9][3]; long long x45[1][1][9][3]; unsigned int x46[1][1][9][3]; unsigned int x47[1][1][9][3]; unsigned int x48[1][1][3][16384]; unsigned int x49[1][1][3][16384]; unsigned int x50; } *)a0;
- (void)updateMmrReshapeChromaForComponent:(unsigned short)a0 mmrReshapeChroma:(int)a1;
- (void)updateMmrTableForComponent:(unsigned short)a0 mmrClipValMin:(unsigned short *)a1 mmrClipValMax:(unsigned short *)a2 mmrCoeff:(float *)a3;
- (void)updatePolynomialTablesForComponent:(unsigned short *)a0 Component:(unsigned short)a1 TableSize:(unsigned long long)a2;

@end

@interface PLBBMav16HwMsgParser : PLBBMav13HwMsgParser

@property (nonatomic) struct { unsigned int x0[7]; } *mav16AppsPerf;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2[2][3]; unsigned int x3[2][4]; unsigned int x4[2]; unsigned int x5[4]; unsigned int x6[4]; unsigned int x7[16]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } *rfEnhWCDMAMav16;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; int x2; unsigned int x3[17]; unsigned int x4[12]; unsigned int x5[6]; unsigned int x6[3]; unsigned int x7[6]; unsigned int x8[2][7]; unsigned int x9[2][6]; unsigned int x10[2][6]; unsigned int x11[3]; unsigned int x12; unsigned int x13[3][2]; unsigned int x14[3][3][3]; unsigned int x15; unsigned int x16[3]; unsigned long long x17[8]; struct { unsigned char x0; unsigned char x1; unsigned char x2[2]; unsigned char x3[2]; } x18; } *rfEnhLTEMav16;
@property (nonatomic) struct { unsigned int x0[4]; } *mav16AppsSleepVeto;
@property (nonatomic) struct { unsigned int x0[21]; } *mav16MpssSleepVeto;
@property (nonatomic) struct { unsigned int x0[16]; } *mav16QdspSpeed;

- (void)logMav16HwRFEnhWCDMAWithLogger:(id)a0;
- (void)parseData:(id)a0;
- (void)logWithLogger:(id)a0;
- (void)logMav16HwRFEnhLTEWithLogger:(id)a0;
- (void)logMav16MPSSWithLogger:(id)a0;
- (void)logMav16AppsPerfWithLogger:(id)a0;

@end

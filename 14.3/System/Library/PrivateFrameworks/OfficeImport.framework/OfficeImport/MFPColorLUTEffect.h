@interface MFPColorLUTEffect : MFPEffect {
    unsigned char mLutA[256];
    unsigned char mLutR[256];
    unsigned char mLutG[256];
    unsigned char mLutB[256];
}

+ (id)GUID;

- (id)initWithLUTA:(unsigned char[256])a0 LUTR:(unsigned char[256])a1 LUTG:(unsigned char[256])a2 LUTB:(unsigned char[256])a3;

@end

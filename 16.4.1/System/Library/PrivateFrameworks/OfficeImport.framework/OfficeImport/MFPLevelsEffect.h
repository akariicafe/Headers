@interface MFPLevelsEffect : MFPEffect {
    int mHighlight;
    int mMidtone;
    int mShadow;
}

+ (id)GUID;

- (id)initWithHighlight:(int)a0 midtone:(int)a1 shadow:(int)a2;

@end

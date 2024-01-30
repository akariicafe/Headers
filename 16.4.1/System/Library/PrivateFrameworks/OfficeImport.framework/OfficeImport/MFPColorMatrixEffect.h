@interface MFPColorMatrixEffect : MFPEffect {
    float mColorMatrix[5][5];
}

+ (id)GUID;

- (id)initWithColorMatrix:(float[5][5])a0;

@end

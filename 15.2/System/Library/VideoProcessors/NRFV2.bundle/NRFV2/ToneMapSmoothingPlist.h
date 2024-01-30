@class GainValueArray, NSMutableArray;

@interface ToneMapSmoothingPlist : NSObject {
    NSMutableArray *bands;
    int baseIterations;
    float maskedAlpha;
    float unmaskedAlpha;
    float skyMaskedAlpha;
    GainValueArray *maskedLambda;
    GainValueArray *unmaskedLambda;
    GainValueArray *skyMaskedLambda;
    GainValueArray *minGainRatio;
}

- (void).cxx_destruct;
- (id)init;
- (int)readPlist:(id)a0;

@end

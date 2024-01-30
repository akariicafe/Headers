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

- (id)init;
- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end

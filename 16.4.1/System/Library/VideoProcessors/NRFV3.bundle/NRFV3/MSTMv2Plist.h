@interface MSTMv2Plist : NSObject {
    float maskedAlpha;
    float unmaskedAlpha;
    float skyMaskedAlpha;
    float maskedLambda;
    float unmaskedLambda;
    float skyMaskedLambda;
    float maskedDetailMix;
    float unmaskedDetailMix;
    float skyMaskedDetailMix;
    float minGainRatio;
    float maxGainRatio;
}

- (int)readPlist:(id)a0;

@end

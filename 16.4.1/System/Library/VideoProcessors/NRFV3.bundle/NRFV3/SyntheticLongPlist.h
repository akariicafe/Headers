@class GainValueArray, NSMutableArray;

@interface SyntheticLongPlist : NSObject {
    NSMutableArray *bands;
    GainValueArray *shadowThreshold;
    GainValueArray *blackFusionBoost;
    GainValueArray *sigmaFactorR;
    GainValueArray *sigmaFactorG;
    GainValueArray *sigmaFactorB;
    GainValueArray *sharpness;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (int)readBandData:(id)a0;

@end

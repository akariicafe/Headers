@class GainValueArray;

@interface DeepFusionDesaturateData : NSObject {
    GainValueArray *yThresh;
    GainValueArray *sigma;
    GainValueArray *strength;
}

- (void).cxx_destruct;

@end

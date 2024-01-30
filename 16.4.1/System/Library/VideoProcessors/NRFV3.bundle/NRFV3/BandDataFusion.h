@class GainValueArray, PerReferenceBandata;

@interface BandDataFusion : NSObject {
    GainValueArray *adaptive_blur;
    GainValueArray *lumaBlackThreshold;
    GainValueArray *chromaBlackThreshold;
    GainValueArray *decayEdgeBoost;
    PerReferenceBandata *diffWeight;
    PerReferenceBandata *lumaFusionStrength;
    PerReferenceBandata *chromaFusionStrength;
}

- (id)init;
- (void).cxx_destruct;

@end

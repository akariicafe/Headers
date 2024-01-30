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

- (void).cxx_destruct;
- (id)init;

@end

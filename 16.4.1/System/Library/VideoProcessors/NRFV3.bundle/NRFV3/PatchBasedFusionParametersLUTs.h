@class GainValueArray;

@interface PatchBasedFusionParametersLUTs : NSObject {
    GainValueArray *boundsMapLimit;
    GainValueArray *shadowLimit;
    GainValueArray *lowResMotionThreshold;
    GainValueArray *boostedLumaMotionThreshold;
    GainValueArray *sadThreshold;
    GainValueArray *nccLowLimitMatchedTexture;
    GainValueArray *nccHighLimitMatchedTexture;
    GainValueArray *fusionBoostMatchedTexture;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end

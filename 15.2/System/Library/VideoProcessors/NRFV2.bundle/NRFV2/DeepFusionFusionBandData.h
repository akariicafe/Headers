@class GainValueArray;

@interface DeepFusionFusionBandData : NSObject {
    GainValueArray *chromaGlobal;
    GainValueArray *lscAmp;
    GainValueArray *lscOffset;
    GainValueArray *lumaMid;
    GainValueArray *lumaSlope;
    GainValueArray *highlightFusionAlpha;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end

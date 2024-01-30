@class GainValueArray;

@interface DeepFusionChromaBoostMaskBandData : NSObject {
    GainValueArray *colorMatchStart;
    GainValueArray *colorMatchEnd;
    GainValueArray *edgeMatchStart;
    GainValueArray *edgeMatchEnd;
}

- (void).cxx_destruct;

@end

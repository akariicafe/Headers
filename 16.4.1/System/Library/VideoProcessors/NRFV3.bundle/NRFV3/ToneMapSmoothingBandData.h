@class GainValueArray;

@interface ToneMapSmoothingBandData : NSObject {
    GainValueArray *maskedDetailMix;
    GainValueArray *unmaskedDetailMix;
    GainValueArray *skyMaskedDetailMix;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end

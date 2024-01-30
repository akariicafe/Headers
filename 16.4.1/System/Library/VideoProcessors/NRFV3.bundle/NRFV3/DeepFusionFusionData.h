@class NSArray;

@interface DeepFusionFusionData : NSObject {
    float EVM_EV0_motionThreshold;
    NSArray *sifrBands;
    NSArray *noSifrBands;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end

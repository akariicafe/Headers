@class NSDictionary, GainValueArray;

@interface SyntheticLongFusionPlist : NSObject {
    NSDictionary *slSceneModeDict;
    float staticGyroMotionThreshold;
    float staticSceneMotionThreshold;
    GainValueArray *syntheticLongPedestal;
}

- (void).cxx_destruct;
- (id)getConfigForSceneMode:(id)a0;

@end

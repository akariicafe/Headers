@interface GainMapPlist : NSObject {
    float minThreshold;
    float maxThreshold;
    float estGainScaling;
}

- (int)readPlist:(id)a0;

@end

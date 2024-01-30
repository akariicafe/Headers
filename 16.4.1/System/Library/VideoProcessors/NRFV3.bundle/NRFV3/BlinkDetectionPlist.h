@interface BlinkDetectionPlist : NSObject {
    unsigned char mode;
    unsigned short confidenceThreshold;
    float lEyePortionLeft;
    float lEyePortionTop;
    float lEyePortionWidth;
    float lEyePortionHeight;
    float rEyePortionLeft;
    float rEyePortionTop;
    float rEyePortionWidth;
    float rEyePortionHeight;
    float mouthPortionLeft;
    float mouthPortionTop;
    float mouthPortionWidth;
    float mouthHeight;
    float lEyePortionWeight;
    float rEyePortionWeight;
    float mouthPortionWeigth;
    float strength;
}

+ (void)initialize;

- (void)applyOverrides;
- (int)readPlist:(id)a0;

@end

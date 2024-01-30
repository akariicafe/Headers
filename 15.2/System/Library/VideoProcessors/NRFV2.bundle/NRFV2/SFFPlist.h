@interface SFFPlist : NSObject {
    float maxFaceLength;
    float maxBoundsRatio;
    float maxMeanSkinMaskValue;
    float featherRate;
    float featherOffset;
}

- (int)readPlist:(id)a0;

@end

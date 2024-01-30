@interface TCRPlist : NSObject {
    float globalAlpha;
    float localAlpha;
    float thresholdMask;
    float thresholdNumMaskTiles;
    float edgeMaskT0;
    float edgeMaskT1;
    float extraMaskAlpha;
    int maskType;
}

- (int)readPlist:(id)a0;

@end

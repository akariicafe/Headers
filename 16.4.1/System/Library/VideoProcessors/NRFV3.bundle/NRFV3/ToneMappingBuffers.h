@class NSArray, ToneMappingCurves;
@protocol MTLTexture;

@interface ToneMappingBuffers : NSObject {
    id<MTLTexture> inLumaTex;
    id<MTLTexture> inChromaTex;
    id<MTLTexture> localGainMapTex;
    id<MTLTexture> outLumaTex;
    id<MTLTexture> outChromaTex;
    id<MTLTexture> skinMask;
    id<MTLTexture> personMask;
    id<MTLTexture> skyMask;
    id<MTLTexture> instanceMasks[4];
    NSArray *skinToneClassification;
    NSArray *maskConfidences;
    NSArray *faceLandmarks;
    ToneMappingCurves *curves;
    float inputLumaPedestal;
}

- (id)init;
- (void).cxx_destruct;

@end

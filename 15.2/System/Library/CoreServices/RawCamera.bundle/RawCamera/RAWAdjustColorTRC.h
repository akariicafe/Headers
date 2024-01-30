@class CIImage, NSNumber, CIVector;

@interface RAWAdjustColorTRC : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputTRCs0;
    NSNumber *inputTRCy1;
    NSNumber *inputTRCs1;
    NSNumber *inputTRCy2;
    NSNumber *inputTRCs2;
    NSNumber *inputTRCy3;
    NSNumber *inputTRCs3;
    NSNumber *inputTRCy4;
    NSNumber *inputTRCs4;
    NSNumber *inputBoostAmount;
    NSNumber *inputBoostShadowAmount;
    NSNumber *inputBoostHDRAmount;
    NSNumber *inputBoostPreserveHueAmount;
    NSNumber *inputBoostPreserveRYHueAmount;
    NSNumber *inputBoostPreserveYGHueAmount;
    NSNumber *inputBoostPreserveGCHueAmount;
    NSNumber *inputBoostPreserveCBHueAmount;
    NSNumber *inputBoostPreserveBMHueAmount;
    NSNumber *inputBoostPreserveMRHueAmount;
    NSNumber *inputVersion;
    CIVector *inputReferencePoints;
    CIVector *inputOutputPoints;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)customAttributes;
- (void)setInputBoostAmount:(id)a0;

@end

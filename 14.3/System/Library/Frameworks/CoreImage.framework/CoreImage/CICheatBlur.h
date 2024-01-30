@class CIImage, NSNumber;

@interface CICheatBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;

- (id)_CIBox6;
- (id)_CIBox4;
- (id)outputImage;
- (id)_CICross4;

@end

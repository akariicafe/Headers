@class CIImage, NSNumber;

@interface CICheatBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIBox4;
- (id)_CIBox6;
- (id)_CICross4;

@end

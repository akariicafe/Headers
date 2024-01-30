@class CIImage, CIVector, NSNumber;

@interface CIDroste : CIFilter {
    CIImage *inputImage;
    CIVector *inputInsetPoint0;
    CIVector *inputInsetPoint1;
    NSNumber *inputStrands;
    NSNumber *inputPeriodicity;
    NSNumber *inputRotation;
    NSNumber *inputZoom;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIDroste;

@end

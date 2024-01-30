@class CIImage, CIVector, NSNumber;

@interface CIDroste : CIFilter {
    CIVector *inputInsetPoint0;
    CIVector *inputInsetPoint1;
    NSNumber *inputStrands;
    NSNumber *inputPeriodicity;
    NSNumber *inputRotation;
    NSNumber *inputZoom;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIDroste;

@end

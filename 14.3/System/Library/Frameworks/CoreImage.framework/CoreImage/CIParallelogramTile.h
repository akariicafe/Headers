@class CIImage, CIVector, NSNumber;

@interface CIParallelogramTile : CIFilter {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputAcuteAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;

- (id)outputImage;

@end

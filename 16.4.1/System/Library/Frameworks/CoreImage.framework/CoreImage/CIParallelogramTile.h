@class CIImage, CIVector, NSNumber;

@interface CIParallelogramTile : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputAcuteAngle;
    NSNumber *inputWidth;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;

@end

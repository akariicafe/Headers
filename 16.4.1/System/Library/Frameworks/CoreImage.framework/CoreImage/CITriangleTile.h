@class CIImage, CIVector, NSNumber;

@interface CITriangleTile : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CITriangleTile;

@end

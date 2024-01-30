@class CIImage, NSNumber, CIVector;

@interface CISeedFill : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputSplat;

- (id)outputImage;

@end

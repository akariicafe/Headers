@class CIImage, NSNumber, CIVector;

@interface CIFaceSegmentationFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRegion;
@property (retain, nonatomic) NSNumber *inputOrientation;
@property (retain, nonatomic) CIVector *inputFaceRect;

- (id)outputImage;

@end

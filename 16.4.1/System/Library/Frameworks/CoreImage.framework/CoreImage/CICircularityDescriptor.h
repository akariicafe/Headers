@class CIVector, CIImage;

@interface CICircularityDescriptor : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIImage *inputCentroid;

- (id)outputImage;

@end

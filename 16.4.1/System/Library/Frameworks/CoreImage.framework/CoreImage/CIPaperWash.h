@class NSNumber, CIImage;

@interface CIPaperWash : CIFilter {
    CIImage *inputImage;
}

@property (copy, nonatomic) NSNumber *inputSaturation;
@property (copy, nonatomic) NSNumber *inputGreyscale;

+ (id)customAttributes;

- (id)outputImage;

@end

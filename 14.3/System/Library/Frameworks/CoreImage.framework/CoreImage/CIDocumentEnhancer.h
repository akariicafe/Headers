@class NSNumber, CIImage;

@interface CIDocumentEnhancer : CIFilter {
    CIImage *inputImage;
}

@property (copy, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)outputImage;

@end

@class CIImage, NSNumber;

@interface CISingleChannelColorMap : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputChannelIndex;
@property (retain, nonatomic) NSNumber *inputShouldNormalize;
@property (retain, nonatomic) NSNumber *inputColorMapIndex;

+ (id)customAttributes;

- (id)outputImage;

@end

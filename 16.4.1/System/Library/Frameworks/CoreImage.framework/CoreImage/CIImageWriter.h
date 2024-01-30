@class NSString, CIFilter, CIImage, NSNumber;

@interface CIImageWriter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSString *inputFilename;
@property (retain) NSNumber *inputShouldDumpInputValues;
@property (retain) CIFilter *inputOriginalFilter;

+ (id)customAttributes;

- (id)outputImage;

@end

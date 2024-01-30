@class CIImage, NSArray, NSString;

@interface PIRedEye : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDestinationImage;
@property (retain, nonatomic) NSArray *inputCorrectionInfo;
@property (retain, nonatomic) NSString *inputCameraModel;

- (id)outputImage;
- (void).cxx_destruct;

@end

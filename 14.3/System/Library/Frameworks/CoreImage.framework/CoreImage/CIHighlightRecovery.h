@class CIImage, NSNumber, NSDictionary;

@interface CIHighlightRecovery : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSNumber *inputDraftMode;

- (id)outputImage;

@end

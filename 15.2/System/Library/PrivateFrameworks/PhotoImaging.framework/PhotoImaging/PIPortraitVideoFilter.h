@class AVMetadataItem, AVTimedMetadataGroup, CIImage, NSNumber;

@interface PIPortraitVideoFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDisparityImage;
@property (retain, nonatomic) NSNumber *inputRenderQuality;
@property (retain, nonatomic) NSNumber *inputRenderDebugMode;
@property (nonatomic) BOOL inputIsHDR;
@property (retain, nonatomic) AVMetadataItem *inputGlobalRenderingMetadata;
@property (retain, nonatomic) AVTimedMetadataGroup *inputTimedRenderingMetadata;
@property (retain, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSNumber *inputFocusedDisparity;

- (id)outputImage;
- (void).cxx_destruct;

@end

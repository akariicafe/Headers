@class NSNumber, PTGlobalRenderingMetadata, PIPortraitVideoMetadataSample, CIImage, NUCVPixelBuffer;

@interface PIPortraitVideoFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDisparityImage;
@property (retain, nonatomic) NUCVPixelBuffer *inputColorPixelBuffer;
@property (retain, nonatomic) NUCVPixelBuffer *inputDisparityPixelBuffer;
@property (retain, nonatomic) NSNumber *inputRenderQuality;
@property (retain, nonatomic) NSNumber *inputRenderDebugMode;
@property (nonatomic) BOOL inputIsHDR;
@property (retain, nonatomic) PTGlobalRenderingMetadata *inputGlobalRenderingMetadata;
@property (retain, nonatomic) PIPortraitVideoMetadataSample *inputTimedRenderingMetadata;
@property (retain, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSNumber *inputFocusedDisparity;

- (id)outputImage;
- (void).cxx_destruct;

@end

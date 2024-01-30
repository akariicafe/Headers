@class FigCaptureSinkConfiguration;

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject {
    BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
}

@property (nonatomic) BOOL allowsMultipleInflightCaptures;
@property (nonatomic) BOOL clientIsCameraOrDerivative;
@property (nonatomic) BOOL allowedToModifyInputBuffers;
@property (nonatomic) BOOL inputIs10Bit;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;
@property (nonatomic) float maxSupportedFrameRate;
@property (nonatomic) int motionAttachmentsSource;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic) BOOL usesHighEncodingPriority;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) int outputColorSpaceProperties;
@property (nonatomic) BOOL stillImageStabilizationSupported;
@property (nonatomic) int noiseReductionAndStabilizationScheme;
@property (nonatomic) struct { int width; int height; } depthDataDimensions;
@property (nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;

- (void)dealloc;

@end

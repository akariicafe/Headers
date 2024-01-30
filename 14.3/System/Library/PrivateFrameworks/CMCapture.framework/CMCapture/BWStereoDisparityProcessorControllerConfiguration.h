@interface BWStereoDisparityProcessorControllerConfiguration : BWStillImageProcessorConfiguration

@property (nonatomic) struct { int width; int height; } inputDimensions;
@property (nonatomic) struct { int width; int height; } disparityOutputDimensions;
@property (nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails;

@end

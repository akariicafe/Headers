@class NSArray, NSDictionary;

@interface BWIntelligentDistortionCorrectionProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (retain, nonatomic) NSArray *portTypesWithIntelligentDistortionCorrectionEnabled;
@property (nonatomic) struct { int width; int height; } geometricDistortionCorrectionExpandedImageDimensions;
@property (nonatomic) int intelligentDistortionCorrectionVersion;
@property (nonatomic) BOOL intelligentDistortionCorrectionAppliesFinalDimensions;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;
@property (nonatomic) struct { unsigned int maximumImageWidth; unsigned int maximumImageHeight; unsigned int maximumPersonMaskWidth; unsigned int maximumPersonMaskHeight; } processorConfig;
@property (retain, nonatomic) NSDictionary *providedInferenceAttachedMediaByMode;

- (void)dealloc;

@end

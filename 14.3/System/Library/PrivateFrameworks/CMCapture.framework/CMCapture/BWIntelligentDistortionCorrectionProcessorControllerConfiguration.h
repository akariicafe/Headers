@class NSArray, NSDictionary;

@interface BWIntelligentDistortionCorrectionProcessorControllerConfiguration : BWStillImageProcessorConfiguration

@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (nonatomic) int intelligentDistortionCorrectionVersion;
@property (nonatomic) struct { unsigned int maximumImageWidth; unsigned int maximumImageHeight; unsigned int maximumPersonMaskWidth; unsigned int maximumPersonMaskHeight; } processorConfig;
@property (retain, nonatomic) NSDictionary *providedInferenceAttachedMediaByMode;

- (void)dealloc;

@end

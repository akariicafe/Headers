@class BWVideoFormat;

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) int semanticDevelopmentVersion;
@property (nonatomic) BOOL redEyeReductionEnabled;
@property (nonatomic) BOOL providePersonMask;
@property (nonatomic) BOOL generateInfoWhetherMasksContainValidContent;

- (void)dealloc;

@end

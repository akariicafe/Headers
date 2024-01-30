@class BWVideoFormat;

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) int semanticDevelopmentVersion;
@property (nonatomic) int personSemanticsVersion;
@property (nonatomic) BOOL redEyeReductionEnabled;
@property (nonatomic) BOOL providePersonMask;
@property (nonatomic) BOOL provideSkyMask;
@property (nonatomic) BOOL providePersonInstanceMasks;
@property (nonatomic) BOOL provideSmartCameraClassifications;
@property (nonatomic) BOOL provideSkinToneClassifications;
@property (nonatomic) BOOL generateInfoWhetherMasksContainValidContent;

- (id)init;
- (void)dealloc;

@end

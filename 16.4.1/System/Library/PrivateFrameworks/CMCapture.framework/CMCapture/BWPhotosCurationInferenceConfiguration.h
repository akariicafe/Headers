@interface BWPhotosCurationInferenceConfiguration : BWVisionInferenceConfiguration

@property (nonatomic) int semanticDevelopmentVersion;

+ (id)configuration;

- (id)initWithInferenceType:(int)a0;

@end

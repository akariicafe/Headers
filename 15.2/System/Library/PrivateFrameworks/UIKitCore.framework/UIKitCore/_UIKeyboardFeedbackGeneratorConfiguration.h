@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) NSDictionary *feedbacks;
@property (nonatomic) double slowTypingTime;
@property (nonatomic) double fastTypingTime;
@property (nonatomic) double fastTypingVolumeMultiplier;
@property (nonatomic) BOOL scalingForSpeedEnabled;
@property (nonatomic) double releaseThreshold;

+ (id)hapticConfigurationForVisceral:(long long)a0;
+ (id)descriptorsForVisceral:(long long)a0 releaseThreshold:(double *)a1;
+ (id)feedbacksWithDescriptors:(id)a0;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyPaths;
- (BOOL)defaultEnabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

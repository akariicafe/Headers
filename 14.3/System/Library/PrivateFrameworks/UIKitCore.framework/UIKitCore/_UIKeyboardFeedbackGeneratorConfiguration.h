@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) NSDictionary *feedbacks;
@property (nonatomic) double slowTypingTime;
@property (nonatomic) double fastTypingTime;
@property (nonatomic) double fastTypingVolumeMultiplier;
@property (nonatomic) double slowTypingVolumeMultiplier;
@property (nonatomic) BOOL scalingForSpeedEnabled;
@property (nonatomic) double releaseThreshold;

+ (id)defaultConfiguration;
+ (id)configuration3;
+ (id)configuration1;
+ (id)configuration2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)feedbackKeyPaths;
- (BOOL)defaultEnabled;
- (BOOL)isEqual:(id)a0;

@end

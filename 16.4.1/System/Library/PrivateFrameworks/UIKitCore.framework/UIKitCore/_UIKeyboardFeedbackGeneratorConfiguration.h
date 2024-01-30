@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) NSDictionary *feedbacks;
@property (nonatomic) double slowTypingTime;
@property (nonatomic) double fastTypingTime;
@property (nonatomic) double fastTypingVolumeMultiplier;
@property (nonatomic) BOOL scalingForSpeedEnabled;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;
- (BOOL)defaultEnabled;
- (void).cxx_destruct;

@end

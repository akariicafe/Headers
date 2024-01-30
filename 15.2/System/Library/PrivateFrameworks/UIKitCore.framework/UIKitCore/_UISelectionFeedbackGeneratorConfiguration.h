@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UISelectionFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (nonatomic) double minimumInterval;
@property (nonatomic) double maxSpeed;
@property (nonatomic) double slowAudioVolume;
@property (nonatomic) double fastAudioVolume;
@property (nonatomic) double slowHapticVolume;
@property (nonatomic) double fastHapticVolume;

+ (id)strongConfiguration;
+ (id)lightConfiguration;
+ (id)defaultConfiguration;
+ (id)pickerConfiguration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyPaths;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIModulationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *feedback;
@property (copy, nonatomic) id /* block */ feedbackUpdateBlock;

+ (id)sliderConfiguration;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)requiredSupportLevel;

@end

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;
- (void)setclickDownFeedback:(id)a0;
- (long long)requiredSupportLevel;

@end

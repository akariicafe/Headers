@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIClickPresentationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *previewedPattern;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *poppedPattern;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *draggedPattern;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end

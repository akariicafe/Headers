@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionStartedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionEndedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionCancelledFeedback;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;

@end

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionStartedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionEndedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionCancelledFeedback;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;

@end

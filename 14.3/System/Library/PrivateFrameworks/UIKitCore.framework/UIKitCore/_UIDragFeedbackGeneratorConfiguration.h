@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIDragFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *interactionProgressingFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionUpdatedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *targetUpdatedFeedback;
@property (nonatomic) double progressingFeedbackDelay;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)feedbackKeyPaths;
- (BOOL)isEqual:(id)a0;
- (long long)requiredSupportLevel;

@end

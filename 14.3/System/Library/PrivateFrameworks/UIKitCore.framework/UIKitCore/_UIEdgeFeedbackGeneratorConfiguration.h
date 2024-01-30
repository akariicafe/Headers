@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable;

@interface _UIEdgeFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (nonatomic, getter=_defaultAxis, setter=_setDefaultAxis:) long long defaultAxis;
@property (nonatomic) double minDistanceFromEdge;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingThresholdFeedback;
@property (copy, nonatomic) id /* block */ userInteractingThresholdFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *userInteractingBeyondEdgeFeedback;
@property (copy, nonatomic) id /* block */ userInteractingBeyondEdgeFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingReleaseFeedback;
@property (copy, nonatomic) id /* block */ userInteractingReleaseFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingThresholdFeedback;
@property (copy, nonatomic) id /* block */ animatingThresholdFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingMaximumExtentFeedback;
@property (copy, nonatomic) id /* block */ animatingMaximumExtentFeedbackUpdateBlock;

+ (id)defaultConfiguration;
+ (id)sliderConfiguration;
+ (id)swipePresentationConfiguration;
+ (id)_scrollConfigurationWithAxis:(long long)a0;
+ (id)horizontalScrollConfiguration;
+ (id)_zoomConfiguration;
+ (id)verticalScrollConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end

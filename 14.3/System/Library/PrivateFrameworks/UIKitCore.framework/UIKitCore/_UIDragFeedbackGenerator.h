@class _UIDragFeedbackGeneratorConfiguration, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (readonly, nonatomic, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)_stopPlayingContinuousFeedback;
- (id)_stats_key;
- (void)userInteractionStarted;
- (void)_startPlayingContinuousFeedback;
- (void)userInteractionEnded;
- (void)dropTargetUpdated;
- (void).cxx_destruct;
- (void)positionUpdated;
- (void)_startPlayingContinuousFeedbackNow;

@end

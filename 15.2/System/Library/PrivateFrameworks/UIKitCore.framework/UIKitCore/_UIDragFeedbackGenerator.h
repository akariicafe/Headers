@class _UIDragFeedbackGeneratorConfiguration, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (readonly, nonatomic, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (void)dropTargetUpdated;
- (id)_stats_key;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)_startPlayingContinuousFeedbackNow;
- (void)positionUpdated;
- (void).cxx_destruct;
- (void)_startPlayingContinuousFeedback;
- (void)_stopPlayingContinuousFeedback;

@end

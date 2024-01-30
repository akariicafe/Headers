@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic) double lastSelectionChangeTime;
@property (readonly, nonatomic, getter=_selectionConfiguration) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (id)_stats_key;
- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)_deactivated;
- (void)_playFeedbackWithSpeed:(double)a0;
- (void)selectionChanged;

@end

@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic) double lastSelectionChangeTime;
@property (readonly, nonatomic, getter=_selectionConfiguration) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;

+ (Class)_configurationClass;

- (id)_stats_key;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)selectionChanged;
- (void)_playFeedbackWithSpeed:(double)a0;
- (void)_deactivated;

@end

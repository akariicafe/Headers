@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic) double lastSelectionChangeTime;
@property (readonly, nonatomic, getter=_selectionConfiguration) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionEnded;
- (id)_stats_key;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)selectionChanged;
- (void)_deactivated;
- (void)_playFeedbackWithSpeed:(double)a0;

@end

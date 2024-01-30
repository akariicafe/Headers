@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (readonly, nonatomic, getter=_buttonConfiguration) _UIButtonFeedbackGeneratorConfiguration *buttonConfiguration;

+ (Class)_configurationClass;

- (id)_stats_key;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (id)initWithStyle:(long long)a0 coordinateSpace:(id)a1;
- (id)initWithStyle:(long long)a0;

@end

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (id)initWithCoordinateSpace:(id)a0;
- (void)pressedUp;
- (void)pressedDown;
- (id)_clickConfiguration;

@end

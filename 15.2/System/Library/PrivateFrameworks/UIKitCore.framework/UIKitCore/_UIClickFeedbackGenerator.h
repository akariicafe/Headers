@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)pressedUp;
- (void)pressedDown;
- (id)initWithCoordinateSpace:(id)a0;
- (id)_clickConfiguration;

@end

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionEnded;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (id)initWithCoordinateSpace:(id)a0;
- (id)_clickConfiguration;
- (void)pressedDown;
- (void)pressedUp;

@end

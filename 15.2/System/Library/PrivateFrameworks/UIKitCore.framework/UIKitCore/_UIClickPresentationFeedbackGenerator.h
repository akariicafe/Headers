@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)popped;
- (void)previewed;
- (id)initWithCoordinateSpace:(id)a0;
- (void)dragged;
- (id)_clickConfiguration;

@end

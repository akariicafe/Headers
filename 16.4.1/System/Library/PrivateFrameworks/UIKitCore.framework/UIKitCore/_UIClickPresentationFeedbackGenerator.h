@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionEnded;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (id)initWithCoordinateSpace:(id)a0;
- (void)dragged;
- (id)_clickConfiguration;
- (void)popped;
- (void)previewed;

@end

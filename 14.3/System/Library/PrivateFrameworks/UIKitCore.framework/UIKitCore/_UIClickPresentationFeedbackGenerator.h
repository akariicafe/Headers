@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (void)popped;
- (void)userInteractionEnded;
- (id)initWithCoordinateSpace:(id)a0;
- (void)dragged;
- (void)previewed;
- (id)_clickConfiguration;

@end

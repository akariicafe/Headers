@class CSProminentDisplayViewController;

@interface PREditorFixedTimeTransition : NSObject

@property (retain, nonatomic) CSProminentDisplayViewController *sourceTimeViewController;
@property (retain, nonatomic) CSProminentDisplayViewController *destinationTimeViewController;

- (void)cleanUp;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void).cxx_destruct;
- (id)animationKey;
- (id)initWithSourceTimeViewController:(id)a0 destinationTimeViewController:(id)a1 anchorView:(id)a2;

@end

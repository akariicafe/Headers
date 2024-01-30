@class UIPresentationController;

@interface _UIPresentationControllerVisualStyle : NSObject

@property (readonly, nonatomic) UIPresentationController *presentationController;

- (void)runAlongsideTransitionFromPresentationController:(id)a0 transitionCoordinator:(id)a1;
- (void)runAlongsideTransitionToPresentationController:(id)a0 transitionCoordinator:(id)a1;
- (id)initWithPresentationController:(id)a0;
- (void)runAlongsidePresentation:(BOOL)a0 transitionCoordinator:(id)a1;

@end

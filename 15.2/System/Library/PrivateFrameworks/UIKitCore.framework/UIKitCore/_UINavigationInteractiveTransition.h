@class UIScreenEdgePanGestureRecognizer, _UIParallaxTransitionPanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {
    _UIParallaxTransitionPanGestureRecognizer *_edgePanRecognizer;
}

@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;

- (void)startInteractiveTransition;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_setShouldReverseLayoutDirection:(BOOL)a0;
- (id)initWithViewController:(id)a0 animator:(id)a1;
- (void)_configureNavigationGesture;
- (void).cxx_destruct;
- (id)gestureRecognizerView;
- (BOOL)_gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setNotInteractiveTransition;

@end

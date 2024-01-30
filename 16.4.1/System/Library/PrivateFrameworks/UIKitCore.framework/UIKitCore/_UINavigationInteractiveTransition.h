@class UIScreenEdgePanGestureRecognizer, _UIParallaxTransitionPanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {
    _UIParallaxTransitionPanGestureRecognizer *_edgePanRecognizer;
}

@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)gestureRecognizerView;
- (BOOL)_gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)startInteractiveTransition;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_configureNavigationGesture;
- (void)_setShouldReverseLayoutDirection:(BOOL)a0;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (void)setNotInteractiveTransition;
- (id)initWithViewController:(id)a0 animator:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
